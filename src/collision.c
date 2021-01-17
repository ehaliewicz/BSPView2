#include <genesis.h>
#include "game.h"
#include "collision.h"
#include "level.h"

fix16 vxs16(fix16 x0, fix16 y0, fix16 x1, fix16 y1) {
    return fix16Mul(x0, y1) - fix16Mul(x1, y0);
}

fix32 vxs32(fix32 x0, fix32 y0, fix32 x1, fix32 y1) {
    return fix32Mul(x0, y1) - fix32Mul(x1, y0);
}

#define PointSide16(px,py, x0,y0, x1,y1) vxs16((x1)-(x0), (y1)-(y0), (px)-(x0), (py)-(y0))
#define PointSide32(px,py, x0,y0, x1,y1) vxs32((x1)-(x0), (y1)-(y0), (px)-(x0), (py)-(y0))

#define Overlap(a0,a1,b0,b1) (min(a0,a1) <= max(b0,b1) && min(b0,b1) <= max(a0,a1))
#define IntersectBox(x0,y0, x1,y1, x2,y2, x3,y3) (Overlap(x0,x1,x2,x3) && Overlap(y0,y1,y2,y3))

s8 point_sign(fix16 x, fix16 y, fix16 a_x, fix16 a_y, fix16 b_x, fix16 b_y) {
    fix32 left = (b_x-a_x)*(y-a_y);
    fix32 right = (b_y-a_y)*(x-a_x);
    fix32 res = left - right;
    return (res > 0 ? 1 : (res < 0 ? -1 : 0));
}

u8 point_on_left(fix16 x, fix16 y, fix16 a_x, fix16 a_y, fix16 b_x, fix16 b_y) {
     return point_sign(x, y, a_x, a_y, b_x, b_y) > 0;
}

u8 on_left_of_wall(fix16 x, fix16 y, u16 wall_idx) {
    u16 v1_idx = cur_portal_map->walls[wall_idx];
    u16 v2_idx = cur_portal_map->walls[wall_idx+1];
    vertex v1 = cur_portal_map->vertexes[v1_idx];
    vertex v2 = cur_portal_map->vertexes[v2_idx];
    fix16 v1x = intToFix16(v1.x);
    fix16 v1y = intToFix16(v1.y);
    fix16 v2x = intToFix16(v2.x);
    fix16 v2y = intToFix16(v2.y);
    return PointSide16(x, y, v1x, v1y, v2x, v2y) < 0; 

    //return point_on_left(x, y, v1x, v1y, v2x, v2y);
}

u8 on_backfacing_side_of_wall(fix16 x, fix16 y, u16 wall_idx) {
#ifdef FLIP_VERTICALLY
  return !on_left_of_wall(x,y,wall_idx);
#else
  return on_left_of_wall(x,y,wall_idx);
#endif     
  }

/*
collision_result check_for_collision(player_pos cur_position, player_pos new_position) {

    
    fix32 curx = cur_position.x;
    fix32 cury = cur_position.y;
    u16 cur_sector = cur_position.cur_sector;

    u16 new_sector = cur_sector;


    collision_type coll_type = NO_COLLISION;
    u16 collided_with;

    int num_walls = sector_num_walls(cur_sector, cur_portal_map);
    int wall_offset = sector_wall_offset(cur_sector, cur_portal_map);
    int portal_offset = sector_portal_offset(cur_sector, cur_portal_map);


    fix32 newx = new_position.x;
    fix32 newy = new_position.y;
    fix32 dx = newx-curx;
    fix32 dy = newy-cury;


    collision_result res;
    res.type = coll_type;
    res.new_player_pos.x = curx + dx; 
    res.new_player_pos.y = newy + dy;
    res.new_player_pos.z = cur_position.z;
    res.new_player_pos.ang = new_position.ang;
    res.new_player_pos.cur_sector = new_sector;
    res.collided_with = collided_with;

    if(new_sector != cur_sector) {
        // if we've moved, check for new sector

        //ply.where.z = ply.cur_sector->floor_height + eye_height;
    }
    return res;

}
*/

u8 in_sector(player_pos cur_player_pos, u16 test_sector) {

    int num_walls = sector_num_walls(test_sector, cur_portal_map);
    int wall_offset = sector_wall_offset(test_sector, cur_portal_map);

    fix16 x = fix32ToFix16(cur_player_pos.x);
    fix16 y = fix32ToFix16(cur_player_pos.y);

    
    for(int i = 0; i < num_walls; i++) {
        u16 wall_idx = wall_offset+i;

	if(on_backfacing_side_of_wall(x, y, wall_idx)) {
	  return 0;
        }
    }
    
    return 1;

}

u16 find_sector(player_pos cur_player_pos) {
    // test current sector first
    
    u16 orig_sector = cur_player_pos.cur_sector;
    if(in_sector(cur_player_pos, orig_sector)) {
        return orig_sector;
    }

    // otherwise test connected sectors
    u16 orig_sector_num_walls = sector_num_walls(orig_sector, cur_portal_map);
    u16 portal_offset = sector_portal_offset(orig_sector, cur_portal_map);
    for(int i = 0; i < orig_sector_num_walls; i++) {
        s16 dest_sector = cur_portal_map->portals[portal_offset+i];
        if(dest_sector == -1) {
            continue;
        }
        if(in_sector(cur_player_pos, dest_sector)) {
            return dest_sector;
        }
    }    
    
    for(int i = 0; i < cur_portal_map->num_sectors; i++) {
        if(in_sector(cur_player_pos, i)) {
            return i;
        }
    }

    return cur_player_pos.cur_sector;

}
