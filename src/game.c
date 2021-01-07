#include <genesis.h>
#include "automap.h"
#include "bsp.h"
#include "collision.h"
#include "draw_queues.h"
#include "e1m1.h"
#include "game.h"
#include "game_mode.h"
#include "graphics_res.h"
#include "joy_helper.h"
#include "level.h"
#include "math3d.h"
#include "music.h"
#include "music_res.h"
#include "menu_helper.h"
#include "portal.h"
#include "portal_map.h"
#include "portal_small_map.h"
#include "seg.h"
#include "span_buf.h"
#include "ssector.h"

player_pos cur_player_pos;

fix16 playerXFrac4, playerYFrac4;

fix32 angleCos32, angleSin32;
fix16 angleCos16, angleSin16;
fix16 angleSinFrac12, angleCosFrac12;

u16 threeDPalette[16] = {
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
    RGB24_TO_VDPCOLOR(0xFFFFFF)
};

void init_3d_palette() {
    for(int i = 0; i < 16; i++) {
        //u16 col = RGB24_TO_VDPCOLOR((random() << 8) | random());
        //u16 col = RGB24_TO_VDPCOLOR(((random() & 0xFF)<<16) |( (random()&0xFF)<<8) | (random()&0xFF));
        //threeDPalette[i] = col;
    }
}

u16 mapPalette[16] = {
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0xFF0000),
    RGB24_TO_VDPCOLOR(0xFFFF00),
    RGB24_TO_VDPCOLOR(0xAF0000),
    RGB24_TO_VDPCOLOR(0xAFAF00),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0),
    RGB24_TO_VDPCOLOR(0xFFFFFF),
};




u32* vertex_cache_frames;
u32* cached_vertexes;


void init_vertex_cache() {
    int num_vertexes = cur_level->num_vertexes;
    vertex_cache_frames = MEM_alloc((num_vertexes+4) * sizeof(u32));
    cached_vertexes = MEM_alloc((num_vertexes+4) * sizeof(Vect2D_s16));
    memsetU32(vertex_cache_frames, 0xFFFFFFFF, num_vertexes);
}


typedef enum {
    INSIDE = 0b00000,
    LEFT   = 0b00010,
    RIGHT  = 0b00100,
    BOTTOM = 0b01000,
    TOP    = 0b10000
} outcode;


const s16 int_max_x = BMP_WIDTH-1;
const s16 int_max_y = BMP_HEIGHT-1;
const s16 subpixel_max_x = (BMP_WIDTH-1)<<4;
const s16 subpixel_max_y = (BMP_HEIGHT-1)<<4;

s16 round_subpix(s16 subpix_coord) {
    s16 shift_three = subpix_coord>>3;

    //s16 subpix_bits = subpix_coord & 0b1100;

    //s16 round = (subpix_coord & 0b1100) ? 1 : 0;
    return (shift_three>>1) + (shift_three&0b1);

}




static int pause_game = 0;
static int quit_game = 0;




const fix32 move_speed = 4*ZOOM; //15;


int cur_frame;
draw_mode render_mode;
int debug_draw = 0;

//u8 column_buffer[W];
//u8 columns_remaining;

//void clear_column_buffer() {
//    columns_remaining = 0;
//    memset(column_buffer, 0, sizeof(column_buffer));
//}


/*
void draw_wall(u16 v1_idx, u16 v2_idx, s16 ceil_height, s16 floor_height) {
    vertex v1 = cur_level->vertexes[v1_idx];
    vertex v2 = cur_level->vertexes[v2_idx];
    //draw_wall_from_verts(v1, v2, ceil_height, floor_height);
}
*/


void draw_3d_view(u32 cur_frame) {

    BMP_waitWhileFlipRequestPending();
    BMP_clear();

    clear_portal_cache();
    portal_rend(cur_player_pos.cur_sector, cur_frame);


/*
    clear_draw_ssector_queue();


    //clear_span_buffer();
    //clear_column_buffer();

    u16 root_node_idx = cur_level->num_nodes-1;

    draw_bsp_node(cur_player_pos.x, cur_player_pos.y, root_node_idx);

    //linedef line = cur_level->linedefs[42];
    //draw_wall(line.v1, line.v2);

    for(int i = 0; i < num_draw_ssectors; i++) {
        u16 sect_idx = draw_ssector_queue[i];
        ssector ssect = cur_level->ssectors[sect_idx];
        seg fst_seg = cur_level->segs[ssect.first_seg];
        linedef line = cur_level->linedefs[fst_seg.linedef];
        sidedef side = cur_level->sidedefs[(fst_seg.direction == 0) ? line.right_sidedef : line.left_sidedef];
        int line_is_portal = line.left_sidedef != 0xFFFF && line.right_sidedef != 0xFFFF;
        sector cur_sect = cur_level->sectors[side.sector_ref];

        for(int j = 0; j < ssect.num_segs; j++) {
            seg cur_seg = cur_level->segs[ssect.first_seg+j];
            draw_wall(cur_seg.begin_vert, cur_seg.end_vert, cur_sect.ceil_height, cur_sect.floor_height, line_is_portal);
            if(debug_draw) {
                BMP_flip(0);
            }
        }
        //if(columns_remaining == 0) {
        //    break;
        //}

    }
*/

    //char buf[32];
    //sprintf(buf, "ssectors: %i ", num_draw_ssectors);

    //BMP_drawText(buf, 1, 3);
    BMP_showFPS(1);
    BMP_flip(1);
    return;
}


/*
u16 ssect_sector_idx(ssector* ssect) {    
    u16 seg_idx = ssect->first_seg;
    seg *s = &(cur_level->segs[seg_idx]);
    linedef *l = &(cur_level->linedefs[s->linedef]);
    sidedef *side;
    if(s->direction) {
        side = &(cur_level->sidedefs[l->left_sidedef]);
    } else {
        side = &(cur_level->sidedefs[l->right_sidedef]);
    }
    return side->sector_ref;
}
*/

u16 last_joy = 0;


Vect2D_f32 *sector_jump_positions = NULL;

static int last_pressed_b = 0;

void handle_input() {
    int strafe = joy_button_pressed(BUTTON_C);
    //cur_player_pos.z = sector_floor_height(cur_player_pos.cur_sector, cur_portal_map);

    int pressed_b = joy_button_pressed(BUTTON_B);
    if(!last_pressed_b && pressed_b) {
        last_pressed_b = 1;
        int next_sector = cur_player_pos.cur_sector + 1;
        if(next_sector >= cur_portal_map->num_sectors) {
            next_sector = 0;
        }
        cur_player_pos.x = sector_jump_positions[next_sector].x;
        cur_player_pos.y = sector_jump_positions[next_sector].y;
        cur_player_pos.cur_sector = next_sector;
    }
    last_pressed_b = pressed_b;

    //ssector* cur_ssect = find_subsector_for_position(cur_player_pos.x, cur_player_pos.y, cur_level->num_nodes-1);

    //u16 sector_idx = ssect_sector_idx(cur_ssect);
    //sector* cur_sector = &(cur_level->sectors[sector_idx]);

    //cur_player_pos.z = cur_sector->floor_height;

    if(joy_button_pressed(BUTTON_DOWN)) {   
        cur_player_pos.y -= angleSin32*move_speed;
        cur_player_pos.x -= angleCos32*move_speed;
        
    } else if (joy_button_pressed(BUTTON_UP)) {
        cur_player_pos.y += angleSin32*move_speed;
        cur_player_pos.x += angleCos32*move_speed;
    }
    

    if (joy_button_pressed(BUTTON_LEFT)) {
        if(strafe) {
            u16 leftAngle = (cur_player_pos.ang+ANGLE_90_DEGREES);
            fix32 leftDy = sinFix32(leftAngle);
            fix32 leftDx = cosFix32(leftAngle);
            cur_player_pos.y += leftDy*move_speed;
            cur_player_pos.x += leftDx*move_speed;
        } else {
            cur_player_pos.ang += 10;
            if(cur_player_pos.ang > 1023) {
                cur_player_pos.ang -= 1024;
            }
        }
    } else if (joy_button_pressed(BUTTON_RIGHT)) {
        if(strafe) {
            u16 rightAngle = (cur_player_pos.ang-ANGLE_90_DEGREES);
            fix32 rightDy = sinFix32(rightAngle);
            fix32 rightDx = cosFix32(rightAngle);
            cur_player_pos.y += rightDy*move_speed;
            cur_player_pos.x += rightDx*move_speed;
        } else {
            if(cur_player_pos.ang < 10) {
                cur_player_pos.ang = 1024 - (10-cur_player_pos.ang);
            } else {
                cur_player_pos.ang -= 10;
            }
        }
    }
    //cur_player_pos = new_player_pos;
    /*
    collision_result collision = check_for_collision(cur_player_pos, new_player_pos);
    cur_player_pos = collision.new_player_pos;
    if(collision.type == COLLIDED) {
        BMP_drawText("COLLIDED   ", 1, 4);
    } else if (collision.type == SECTOR_TRANSITION) {
        BMP_drawText("TRANSIT SECTOR   ", 1, 4);
    } else {
        BMP_drawText("NO COLLISION   ", 1, 4);
    }
    */

    
    char buf[32];
    sprintf(buf, "cur sector: %i  ", cur_player_pos.cur_sector);
    BMP_drawText(buf, 1, 4);

    //sprintf(buf, "ang: %i  ", cur_player_pos.ang);
    //BMP_drawText(buf, 1, 5);

    /*
    char buf1[10];
    char buf2[10];
    
    fix32ToStr(cur_player_pos.x, buf1, 1);
    fix32ToStr(cur_player_pos.y, buf2, 1);
    sprintf(buf, "x %s", buf1);
    BMP_drawText(buf, 1, 7);
    sprintf(buf, "y %s", buf2);
    BMP_drawText(buf, 1, 8);

    fix16 dx = cosFix16(cur_player_pos.ang);
    fix16ToStr(dx, buf1, 2);
    fix16 dy = sinFix16(cur_player_pos.ang);
    fix16ToStr(dy, buf2, 2);
    sprintf(buf, "dx %s", buf1);
    BMP_drawText(buf, 1, 9);
    sprintf(buf, "dy %s", buf2);
    BMP_drawText(buf, 1, 10);
    */
    


    //find_

    pause_game = joy_button_pressed(BUTTON_START);

    u16 joy = JOY_readJoypad(JOY_1);
    // state table
    // AUTOMAP_MODE
    // x -> goes back to game mode, y nothing, z nothing
    // WIREFRAME
    // x -> goes to automap mode, y goes to solid mode, z turns on debug
    // SOLID
    // x -> goes to automap mode, y goes to wireframe mode, z turns on debug

    const int render_mode_table[3][3] = {
        // automap
        {GAME_WIREFRAME, 0,              0},
        // wireframe
        {AUTOMAP,        GAME_SOLID,     1},
        // solid
        {AUTOMAP,        GAME_WIREFRAME, 1}
    };


    int* transition_table = render_mode_table[render_mode];

    #define NEW_BTN(btn) ((joy & btn) && (last_joy & btn) == 0)

    if(NEW_BTN(BUTTON_X)) {
        render_mode = transition_table[0];
    } else if (NEW_BTN(BUTTON_Y)) {
        render_mode = transition_table[1];
    } else if (NEW_BTN(BUTTON_Z)) {
        if(transition_table[2]) {
            debug_draw = !debug_draw;
        }
    }


    last_joy = joy;

    /*
    if(joy & BUTTON_Y) {
        if(render_mode == AUTOMAP) {
            render_mode = GAME_WIREFRAME;
        } else {
            render_mode = AUTOMAP;
        }
    } else if (joy & BUTTON_Z) {
        render_mode = (render_mode == GAME_SOLID ? GAME_WIREFRAMEGAME_SOLID;
    } else {
        render_mode = GAME_WIREFRAME;
    }
    if(joy & BUTTON_X) {
        debug_draw = !debug_draw;
    }
    */
}


void return_to_menu() {
    quit_game = 1;
    pause_game = 0;
}

const menu game_menu = {
    .header_text = "Pause",
    .num_items = 2,
    .items = {
        {.text = "Restart level", .submenu = NULL, .select = NULL, .render = NULL, .selectable = 1},
        {.text = "Return to menu", .submenu = NULL, .select = &return_to_menu, .render = NULL, .selectable = 1},
    }
};

void init_pause_menu() {

}

game_mode run_pause_menu() {
    return PAUSE_MENU;
}

void cleanup_pause_menu() {
    
}

u16* cur_palette = NULL;


void init_sector_jump_positions() {
    sector_jump_positions = MEM_alloc(sizeof(Vect2D_f32) * cur_portal_map->num_sectors);
    for(int i = 0; i < 10; i++) {

        int avg_sect_x = 0; //erts[0].x + verts[1].x + 
        int avg_sect_y = 0;
        int num_walls = sector_num_walls(i, cur_portal_map);
        int wall_offset = sector_wall_offset(i, cur_portal_map);

        for(int j = 0; j < num_walls; j++) {
            int vidx = cur_portal_map->walls[wall_offset+j];
            avg_sect_x += cur_portal_map->vertexes[vidx].x;
            avg_sect_y += cur_portal_map->vertexes[vidx].y;
        }
        avg_sect_x /= num_walls;
        avg_sect_y /= num_walls;
        sector_jump_positions[i].x = intToFix32(avg_sect_x);
        sector_jump_positions[i].y = intToFix32(avg_sect_y);
    }
}


void init_game() {
    render_mode = GAME_WIREFRAME;
    cur_frame = 0;
    debug_draw = 0;
    SYS_disableInts();
    //VDP_setScreenHeight224();
    SYS_enableInts();

    set_level(&e1m1);

    set_portal_map(&portal_level_1);



    quit_game = 0;
    if(pause_game) {
        pause_game = 0;
    } else {
        init_sector_jump_positions();
        
        cur_player_pos.x = sector_jump_positions[0].x; //intToFix32(avg_sect0_x);
        cur_player_pos.y = sector_jump_positions[0].y;  //intToFix32(avg_sect0_y);

        //cur_player_pos.x = intToFix32(cur_level->things[0].x);
        //cur_player_pos.y = intToFix32(cur_level->things[0].y);
        cur_player_pos.z = intToFix32(0);
        cur_player_pos.ang = 0;
    }

    init_3d_palette();

    cur_palette = threeDPalette;
    VDP_setPalette(PAL1, threeDPalette);
    

    clear_menu();

    BMP_init(0, BG_B, PAL1, 0);
    BMP_clear();
    BMP_setBufferCopy(0);
    BMP_flip(0);
    init_processed_linedef_bitmap(); 
    init_vertex_cache();
    init_span_buffer();

    init_portal_renderer();

    XGM_stopPlay();
    if(music_on) {
        XGM_startPlay(xgm_e1m4);
    }
}

void maybe_set_palette(u16* new_palette) {
    if(cur_palette != new_palette) {
        VDP_setPalette(PAL1, new_palette);
        cur_palette = new_palette;
    }
}


game_mode run_game() {
    
    angleCos32 = cosFix32(cur_player_pos.ang);
    angleSin32 = sinFix32(cur_player_pos.ang); 
    angleCos16 = cosFix16(cur_player_pos.ang);
    angleSin16 = sinFix16(cur_player_pos.ang); 
    angleSinFrac12 = angleSin16<<6;
    angleCosFrac12 = angleCos16<<6;

    
    playerXFrac4 = ((cur_player_pos.x/ZOOM)>>(FIX32_FRAC_BITS-4)); // scaling factor is now 16 (2^4) instead of 1024 (2^10)
    playerYFrac4 = ((cur_player_pos.y/ZOOM)>>(FIX32_FRAC_BITS-4));

    handle_input();

    //JOY_waitPress
    /*
    if(joy_button_newly_pressed(BUTTON_START)) { ////pause_game) {
        while(1) {}
        return PAUSE_MENU;
    } else if (quit_game) {
        return MAIN_MENU;
    }
    */
   if(debug_draw) {
        BMP_setBufferCopy(1);
   } else {
       BMP_setBufferCopy(0);
   }
   switch(render_mode) {
       case AUTOMAP:
            draw_automap(cur_frame);
            maybe_set_palette(mapPalette);
        break;
        case GAME_WIREFRAME:
        case GAME_SOLID:
            draw_3d_view(cur_frame);
            maybe_set_palette(threeDPalette);
   }
    cur_frame++;

    return SAME_MODE;
}


void cleanup_game() {
    BMP_end();
    cleanup_automap();
    cleanup_span_buffer();
    MEM_free(sector_jump_positions);
    MEM_free(vertex_cache_frames);
    MEM_free(cached_vertexes);
    MEM_pack();
}