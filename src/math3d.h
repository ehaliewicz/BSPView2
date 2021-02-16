#ifndef MATH3D_H
#define MATH3D_H

#include <genesis.h>

#define SCREEN_WIDTH BMP_PITCH
#define SCREEN_HEIGHT BMP_HEIGHT
#define ASPECT_RATIO (SCREEN_WIDTH /SCREEN_HEIGHT)
#define SCALE 1
#define CONST1 64 // SCREEN_WIDTH/2 (SCREEN_WIDTH / 2)
#define CONST2 80 // SCREEN_WIDTH/2 * SCALE / MIN(1, ASPECT_RATIO)
#define CONST3 80 // SCREEN_HEIGHT/2
#define CONST4 80 // SCREEN_HEIGHT/2 * SCALE / MAX(1, ASPECT_RATIO)

typedef struct {
    s16 x, yfloor, yceil;
} transformed_vert;


typedef enum {
    UNCLIPPED,
    LEFT_CLIPPED,
    RIGHT_CLIPPED,
    OFFSCREEN
} clip_result;


// translate and rotate map vertex according to player position
//Vect2D_f32 transform_map_vert(s16 x, s16 y);
Vect2D_s16 transform_map_vert_16(s16 x, s16 y);

// clip pair of map vertexes against near z plane, modifies input pointers if necessary
//clip_result clip_map_vertex(Vect2D_f32* trans_v1, Vect2D_f32* trans_v2);
clip_result clip_map_vertex_16(Vect2D_s16* trans_v1, Vect2D_s16* trans_v2);

// project map vertex without height attributes
//s16 project_and_adjust_x(Vect2D_f32 trans_map_vert);

s16 project_and_adjust_x(s16 x, s16 z); //Vect2D_s16 trans_map_vert);

//s16 project_and_adjust_y(Vect2D_f32 trans_map_vert, s16 y);

//s16 project_and_adjust_y_fix(Vect2D_f32 trans_map_vert, s16 y);

//s16 project_and_adjust_y_fix(Vect2D_s16 trans_map_vert, s16 y);

s16 project_and_adjust_y_fix(s16 y, s16 z);


#endif