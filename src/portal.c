#include <genesis.h>
#include <kdebug.h>
#include "common.h"
#include "draw.h"
#include "game.h"
#include "level.h"
#include "math3D.h"
#include "portal_map.h"
#include "portal_maps.h"
#include "vertex.h"


#define PORTAL_QUEUE_SIZE 32

//static Vect2D_s32* cached_verts;
static u32* sector_visited_cache; // i don't know if this helps much, but we might be able to use it
static u8* sector_render_queue;

typedef struct {
    s16 x1, x2;
    s16 sector;
} render_sector_item;

static render_sector_item portal_queue[PORTAL_QUEUE_SIZE];
static u8 queue_read;
static u8 queue_write;

static u8 mask(u8 idx) { return idx & (PORTAL_QUEUE_SIZE-1); }

static void queue_push(render_sector_item i) { 
    portal_queue[mask(queue_write++)] = i;
}

static render_sector_item queue_pop() {
    return portal_queue[mask(queue_read++)];
}

static int queue_size()     { return queue_write - queue_read; }
static int queue_empty()    { return queue_size() == 0 ; }
static int queue_full()     { return queue_size() == PORTAL_QUEUE_SIZE; }

void init_portal_renderer() {
    //vert_transform_cache = MEM_alloc(sizeof(u32) * cur_portal_map->num_verts);
    queue_read = 0;
    queue_write = 0;

    sector_visited_cache = MEM_alloc(sizeof(u32) * cur_portal_map->num_sectors);   
}

void clear_portal_cache() {
    //memset(sector_visited_cache, 0, sizeof(u32) * cur_portal_map->num_sectors);
}

typedef enum {
    PORTAL_TOP_VISIBLE,
    PORTAL_BOT_VISIBLE,
    PORTAL_TOP_AND_BOT_VISIBLE,
    PORTAL_NO_STEP_VISIBLE,
    WALL_VISIBLE,
} draw_types;


void portal_rend(u16 src_sector, u32 cur_frame) {
    portal_map* map = cur_portal_map;
    //static const portal_map* map = &portal_level_1;


    render_sector_item queue_item = { .x1 = 0, .x2 = W-1, .sector = src_sector };

    queue_push(queue_item);

    int visited = 0;
    int pre_transform_backfacing_walls = 0;
    int post_project_backfacing_walls = 0;
    int walls_frustum_culled = 0;

    while(!queue_empty()) {
        visited++;
        render_sector_item cur_item = queue_pop();

        s16 sector = cur_item.sector;

        // if this sector has been visited 32 times, or is already being currently rendered, skip it
        if(sector_visited_cache[sector] == cur_frame) { //} & 0b101) { //0x21) {
             continue; // Odd = still rendering, 0x20 = give up
        }

        sector_visited_cache[sector] = cur_frame;
        

        u16 window_min = cur_item.x1;
        u16 window_max = cur_item.x2;

        s16 wall_offset = sector_wall_offset(sector, map);
        s16 portal_offset = sector_portal_offset(sector, map);
        s16 num_walls = sector_num_walls(sector, map);

        s16 floor_height = sector_floor_height(sector, map); 
        s16 ceil_height = sector_ceil_height(sector, map);

        u8 floor_color = sector_floor_color(sector, map);
        u8 ceil_color = sector_ceil_color(sector, map);
        
        
        u16 init_v1_idx = map->walls[wall_offset];
        vertex init_v1 = map->vertexes[init_v1_idx];
        Vect2D_s16 prev_transformed_vert = transform_map_vert_16(init_v1.x, init_v1.y);
        
        s16 last_frontfacing_wall = -1;
        
        u16 prev_v2_idx = init_v1_idx;

        s16 intPx = fix32ToInt(cur_player_pos.x);
        s16 intPy = fix32ToInt(cur_player_pos.y);

        for(s16 i = 0; i < num_walls; i++) {
	        u16 v2_idx = map->walls[wall_offset+i+1];

            u16 wall_idx = wall_offset+i;

            vertex v1 = map->vertexes[prev_v2_idx];
	        vertex v2 = map->vertexes[v2_idx];

            u16 portal_idx = portal_offset+i;
            s16 portal_sector = map->portals[portal_idx];
            int is_portal = portal_sector != -1;
            
            //u8 wall_col = map->wall_colors[portal_idx];

            volatile Vect2D_s16 trans_v1;

            if(last_frontfacing_wall == i-1) {
                trans_v1 = prev_transformed_vert;
            } else {
                trans_v1 = transform_map_vert_16(v1.x, v1.y);
            }        

            prev_v2_idx = v2_idx;
            
            u8 wall_color = map->wall_colors[portal_idx].mid_col;
            
            normal_quadrant normal_dir = map->wall_norm_quadrants[portal_idx];

            
            u8 backfacing = 0;

            switch(normal_dir) {
                case QUADRANT_0:
                    backfacing = (intPx < v2.x && intPy < v1.y);
                    break;
                case QUADRANT_1:
                    backfacing = (intPx > v1.x && intPy < v2.y);
                    break;
                case QUADRANT_2:
                    backfacing = (intPx > v2.x && intPy > v1.y);
                    break;
                case QUADRANT_3:
                    backfacing = (intPx < v1.x && intPy > v2.y);
                    break;

                case FACING_UP:
                    backfacing = (intPy < v1.y);
                    break;
                case FACING_DOWN:
                    backfacing = (intPy > v1.y);
                    break;
                case FACING_LEFT:
                    backfacing = (intPx > v1.x);
                    break;
                case FACING_RIGHT:
                    backfacing = (intPx < v1.x);
                    break;
            }
            
            if(backfacing) {
                //pre_transform_backfacing_walls++;
                continue;
            }
            
            

            last_frontfacing_wall = i;
            volatile Vect2D_s16 trans_v2 = transform_map_vert_16(v2.x, v2.y);
            prev_transformed_vert = trans_v2;
            
            clip_result clipped = clip_map_vertex_16(&trans_v1, &trans_v2);    
            s16 neighbor_floor_height;
            s16 neighbor_ceil_height;
            if(clipped == OFFSCREEN) {    
                /*
                if(is_portal) {
                    //if(portal_sector == 6) {
                    //    BMP_drawText("fully clipped   ", 2, 10);
                    //}
                
                    s16 x1 = project_and_adjust_x(trans_v1);
                    s16 x2 = project_and_adjust_x(trans_v2);
                    s16 beginx = max(x1, window_min);
                    s16 endx = min(x2, window_max);

                    if(x1 > window_max) { walls_frustum_culled++; continue; }
                    if(x2 <= window_min) { walls_frustum_culled++; continue; }
                    if(x1 >= x2) { post_project_backfacing_walls++; continue; }
                    neighbor_floor_height = sector_floor_height(portal_sector, cur_portal_map);
                    neighbor_ceil_height = sector_ceil_height(portal_sector, cur_portal_map);
                    if (neighbor_ceil_height > floor_height && neighbor_floor_height < ceil_height && !queue_full()) {

                        queue_item.x1 = window_min;
                        queue_item.x2 = window_max;

                        queue_item.sector = portal_sector;
                        queue_push(queue_item);
                    }
                    
                }
                */
                continue;
            }

            //s16 x1 = project_and_adjust_x(trans_v1);
            //s16 x2 = project_and_adjust_x(trans_v2);
            s16 trans_v1_z = trans_v1.y;
            s16 trans_v2_z = trans_v2.y;
            s16 x1 = project_and_adjust_x(trans_v1.x, trans_v1_z);
            s16 x2 = project_and_adjust_x(trans_v2.x, trans_v2_z);
            s16 beginx = max(x1, window_min);
            s16 endx = min(x2, window_max);

            if(x1 > window_max) { walls_frustum_culled++; continue; }
            if(x2 <= window_min) { walls_frustum_culled++; continue; }
            if(x1 >= x2) { post_project_backfacing_walls++; continue; }


            if(is_portal) {
                
                neighbor_floor_height = sector_floor_height(portal_sector, cur_portal_map);
                neighbor_ceil_height = sector_ceil_height(portal_sector, cur_portal_map);
                if (neighbor_ceil_height > floor_height && neighbor_floor_height < ceil_height && !queue_full()) {

                    //if(portal_sector == 6 && (clipped == LEFT_CLIPPED || clipped == RIGHT_CLIPPED)) {
                    //    BMP_drawText("partially clipped", 2, 10);
                    //} else if (portal_sector == 6) {
                    //    BMP_drawText("not clipped      ", 2, 10);
                    //}
                    queue_item.x1 = (clipped == LEFT_CLIPPED) ? window_min : beginx;
                    queue_item.x2 = (clipped == RIGHT_CLIPPED) ? window_max : endx;

                    queue_item.sector = portal_sector;
                    queue_push(queue_item);
                }
                
            }


            //s16 x1_ytop = project_and_adjust_y_fix(trans_v1, ceil_height);
            //s16 x1_ybot = project_and_adjust_y_fix(trans_v1, floor_height);
            //s16 x2_ytop = project_and_adjust_y_fix(trans_v2, ceil_height);
            //s16 x2_ybot = project_and_adjust_y_fix(trans_v2, floor_height);

            s16 x1_ytop = project_and_adjust_y_fix(ceil_height, trans_v1_z);
            s16 x1_ybot = project_and_adjust_y_fix(floor_height, trans_v1_z);
            s16 x2_ytop = project_and_adjust_y_fix(ceil_height, trans_v2_z);
            s16 x2_ybot = project_and_adjust_y_fix(floor_height, trans_v2_z);
            

            // draw floor and ceiling
            // check if floor and ceiling are on-screen
            


            if (is_portal) {
                // draw step down from ceiling
                draw_fix_line_to_buffer(x1, x1_ytop, x2, x2_ytop, window_min, window_max, raster_buffer_0);

                if(neighbor_ceil_height < ceil_height && neighbor_ceil_height > floor_height) {
                    u8 upper_color = map->wall_colors[portal_idx].upper_col;
                    // draw step from ceiling
                    
                    //s16 nx1_ytop = project_and_adjust_y_fix(trans_v1, neighbor_ceil_height);
                    //s16 nx2_ytop = project_and_adjust_y_fix(trans_v2, neighbor_ceil_height);
                    s16 nx1_ytop = project_and_adjust_y_fix(neighbor_ceil_height, trans_v1_z);
                    s16 nx2_ytop = project_and_adjust_y_fix(neighbor_ceil_height, trans_v2_z);

                    // ceiling
                    draw_from_top_to_raster_span(raster_buffer_0, beginx, endx, ceil_color, 0);
                    draw_fix_line_to_buffer(x1, nx1_ytop, x2, nx2_ytop, window_min, window_max, raster_buffer_1);
                    draw_between_raster_spans(raster_buffer_0, raster_buffer_1, beginx, endx, upper_color, 1, 0);
                } else {
                    draw_from_top_to_raster_span(raster_buffer_0, beginx, endx, ceil_color, 1);
                }

                draw_fix_line_to_buffer(x1, x1_ybot, x2, x2_ybot, window_min, window_max, raster_buffer_0);

                if(neighbor_floor_height > floor_height && neighbor_floor_height < ceil_height) {
                    u8 lower_color = map->wall_colors[portal_idx].lower_col;
                    // draw step from floor
                    //s16 nx1_ybot = project_and_adjust_y_fix(trans_v1, neighbor_floor_height);
                    //s16 nx2_ybot = project_and_adjust_y_fix(trans_v2, neighbor_floor_height);
                    s16 nx1_ybot = project_and_adjust_y_fix(neighbor_floor_height, trans_v1_z);
                    s16 nx2_ybot = project_and_adjust_y_fix(neighbor_floor_height, trans_v2_z);

                    draw_from_raster_span_to_bot(raster_buffer_0, beginx, endx, floor_color, 0);
                    draw_fix_line_to_buffer(x1, nx1_ybot, x2, nx2_ybot, window_min, window_max, raster_buffer_1);
                    draw_between_raster_spans(raster_buffer_1, raster_buffer_0, beginx, endx, lower_color, 0, 1);
                } else {
                    draw_from_raster_span_to_bot(raster_buffer_0, beginx, endx, floor_color, 1);
                }

            } else { 
                draw_wall(x1, x1_ytop, x1_ybot, x2, x2_ytop, x2_ybot, window_min, window_max, ceil_color, wall_color, floor_color);
            }
            
        }
        //sector_visited_cache[sector]++;
    }

    //KLog_U1("sectors visited: ", visited);
    //char buf[32];
    //sprintf(buf, "sectors visited: %i  ", visited);
    //BMP_drawText(buf, 1, 3);
    //sprintf(buf, "walls pre-culled %i  ", pre_transform_backfacing_walls);
    //BMP_drawText(buf, 0, 5);
    //sprintf(buf, "walls post-culled %i  ", post_project_backfacing_walls);
    //BMP_drawText(buf, 0, 6);
    //sprintf(buf, "frustum culled %i  ", walls_frustum_culled);
    //BMP_drawText(buf, 0, 7);


}
