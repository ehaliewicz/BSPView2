#include "level.h"

const thing things[143] = {
    {.x = 1056, .y = -3616, .angle = 90, .type = 1, .flags = 7 },
     {.x = 1008, .y = -3600, .angle = 90, .type = 2, .flags = 7 },
     {.x = 1104, .y = -3600, .angle = 90, .type = 3, .flags = 7 },
     {.x = 960, .y = -3600, .angle = 90, .type = 4, .flags = 7 },
     {.x = 288, .y = -3104, .angle = 90, .type = 48, .flags = 7 },
     {.x = 288, .y = -3360, .angle = 90, .type = 48, .flags = 7 },
     {.x = 528, .y = -3312, .angle = 90, .type = 2028, .flags = 7 },
     {.x = 528, .y = -3152, .angle = 90, .type = 2028, .flags = 7 },
     {.x = 3440, .y = -3472, .angle = 135, .type = 3001, .flags = 15 },
     {.x = 3360, .y = -3504, .angle = 135, .type = 3001, .flags = 12 },
     {.x = 2912, .y = -2816, .angle = 90, .type = 3004, .flags = 15 },
     {.x = 3056, .y = -3584, .angle = 90, .type = 3004, .flags = 14 },
     {.x = 3136, .y = -3408, .angle = 90, .type = 3004, .flags = 12 },
     {.x = 1824, .y = -3280, .angle = 180, .type = 2019, .flags = 7 },
     {.x = 2736, .y = -4256, .angle = 0, .type = 3004, .flags = 12 },
     {.x = 3280, .y = -4256, .angle = 180, .type = 3004, .flags = 12 },
     {.x = 3008, .y = -4416, .angle = 90, .type = 3001, .flags = 15 },
     {.x = 3280, .y = -4304, .angle = 180, .type = 3004, .flags = 12 },
     {.x = 2736, .y = -4304, .angle = 0, .type = 3004, .flags = 12 },
     {.x = 2880, .y = -4416, .angle = 0, .type = 2012, .flags = 15 },
     {.x = 2736, .y = -4160, .angle = 0, .type = 2007, .flags = 15 },
     {.x = 3280, .y = -4160, .angle = 0, .type = 2007, .flags = 15 },
     {.x = 2784, .y = -2944, .angle = 90, .type = 2008, .flags = 23 },
     {.x = 144, .y = -3136, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 144, .y = -3328, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 96, .y = -3392, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 96, .y = -3072, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 432, .y = -3040, .angle = 90, .type = 2015, .flags = 7 },
     {.x = 432, .y = -3424, .angle = 90, .type = 2015, .flags = 7 },
     {.x = 32, .y = -3232, .angle = 90, .type = 2015, .flags = 7 },
     {.x = -32, .y = -3232, .angle = 90, .type = 2015, .flags = 7 },
     {.x = 1312, .y = -3520, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 736, .y = -3520, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 752, .y = -2992, .angle = 90, .type = 2015, .flags = 7 },
     {.x = 976, .y = -2912, .angle = 90, .type = 2015, .flags = 7 },
     {.x = 1312, .y = -3264, .angle = 90, .type = 2035, .flags = 7 },
     {.x = 1152, .y = -2912, .angle = 90, .type = 2035, .flags = 7 },
     {.x = 864, .y = -3328, .angle = 90, .type = 2035, .flags = 7 },
     {.x = 2672, .y = -2752, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 2752, .y = -2640, .angle = 90, .type = 2014, .flags = 7 },
     {.x = 3232, .y = -3040, .angle = 90, .type = 2028, .flags = 7 },
     {.x = 2800, .y = -3040, .angle = 90, .type = 2028, .flags = 7 },
     {.x = 2848, .y = -3584, .angle = 90, .type = 2008, .flags = 7 },
     {.x = 3008, .y = -3968, .angle = 90, .type = 2008, .flags = 7 },
     {.x = 2912, .y = -4176, .angle = 180, .type = 2028, .flags = 15 },
     {.x = 3104, .y = -4176, .angle = 180, .type = 2028, .flags = 15 },
     {.x = 2720, .y = -4352, .angle = 180, .type = 2028, .flags = 15 },
     {.x = 3296, .y = -4352, .angle = 180, .type = 2028, .flags = 15 },
     {.x = 2944, .y = -4320, .angle = 180, .type = 2035, .flags = 15 },
     {.x = 3184, .y = -4224, .angle = 180, .type = 2035, .flags = 15 },
     {.x = 2832, .y = -4240, .angle = 180, .type = 2035, .flags = 15 },
     {.x = 3184, .y = -4176, .angle = 180, .type = 2014, .flags = 15 },
     {.x = 2832, .y = -4176, .angle = 180, .type = 2014, .flags = 15 },
     {.x = 2736, .y = -4192, .angle = 180, .type = 2014, .flags = 15 },
     {.x = 3280, .y = -4192, .angle = 180, .type = 2014, .flags = 12 },
     {.x = 3280, .y = -4448, .angle = 180, .type = 2014, .flags = 15 },
     {.x = 2736, .y = -4448, .angle = 180, .type = 2015, .flags = 15 },
     {.x = 3072, .y = -4832, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 2944, .y = -4832, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 3072, .y = -4704, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 2944, .y = -4704, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 3088, .y = -4528, .angle = 180, .type = 35, .flags = 7 },
     {.x = 2928, .y = -4528, .angle = 180, .type = 35, .flags = 7 },
     {.x = 3008, .y = -4816, .angle = 90, .type = 3001, .flags = 12 },
     {.x = 3072, .y = -4768, .angle = 90, .type = 2011, .flags = 15 },
     {.x = 2304, .y = -4032, .angle = 90, .type = 2012, .flags = 15 },
     {.x = 2176, .y = -4000, .angle = 90, .type = 2049, .flags = 15 },
     {.x = 2432, .y = -4000, .angle = 90, .type = 2048, .flags = 15 },
     {.x = -224, .y = -3232, .angle = 90, .type = 2018, .flags = 7 },
     {.x = -288, .y = -3232, .angle = 0, .type = 11, .flags = 7 },
     {.x = 1056, .y = -3552, .angle = 90, .type = 11, .flags = 7 },
     {.x = 1792, .y = -2944, .angle = 270, .type = 11, .flags = 7 },
     {.x = 3408, .y = -3504, .angle = 135, .type = 11, .flags = 7 },
     {.x = 2784, .y = -4160, .angle = 270, .type = 11, .flags = 7 },
     {.x = 1712, .y = -3264, .angle = 270, .type = 2003, .flags = 23 },
     {.x = 1936, .y = -3264, .angle = 270, .type = 2046, .flags = 23 },
     {.x = 1920, .y = -3712, .angle = 270, .type = 2046, .flags = 23 },
     {.x = 2304, .y = -3712, .angle = 270, .type = 2046, .flags = 23 },
     {.x = 3232, .y = -4160, .angle = 270, .type = 2002, .flags = 23 },
     {.x = 3232, .y = -4192, .angle = 270, .type = 2048, .flags = 23 },
     {.x = 2784, .y = -4192, .angle = 270, .type = 2048, .flags = 23 },
     {.x = 2560, .y = -3904, .angle = 270, .type = 2048, .flags = 23 },
     {.x = 3360, .y = -3536, .angle = 270, .type = 2048, .flags = 23 },
     {.x = 3008, .y = -4768, .angle = 270, .type = 2048, .flags = 23 },
     {.x = 1408, .y = -3584, .angle = 270, .type = 2049, .flags = 23 },
     {.x = 1408, .y = -3456, .angle = 270, .type = 2049, .flags = 23 },
     {.x = 1408, .y = -3328, .angle = 270, .type = 2049, .flags = 23 },
     {.x = 2272, .y = -2432, .angle = 180, .type = 3004, .flags = 15 },
     {.x = 2272, .y = -2352, .angle = 180, .type = 3004, .flags = 14 },
     {.x = 2272, .y = -2512, .angle = 180, .type = 9, .flags = 12 },
     {.x = 2464, .y = -2432, .angle = 180, .type = 9, .flags = 12 },
     {.x = 2224, .y = -2320, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 2224, .y = -2544, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 2288, .y = -2544, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 2288, .y = -2320, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 1712, .y = -2144, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 2240, .y = -2256, .angle = 180, .type = 2015, .flags = 7 },
     {.x = 3264, .y = -3856, .angle = 270, .type = 2049, .flags = 7 },
     {.x = 3264, .y = -3936, .angle = 270, .type = 2001, .flags = 7 },
     {.x = 3232, .y = -3808, .angle = 270, .type = 2012, .flags = 7 },
     {.x = 3216, .y = -3888, .angle = 0, .type = 9, .flags = 12 },
     {.x = -160, .y = -3232, .angle = 0, .type = 9, .flags = 12 },
     {.x = 240, .y = -3376, .angle = 135, .type = 9, .flags = 12 },
     {.x = 240, .y = -3088, .angle = 225, .type = 9, .flags = 12 },
     {.x = 1696, .y = -2688, .angle = 90, .type = 9, .flags = 12 },
     {.x = 1920, .y = -2176, .angle = 270, .type = 9, .flags = 12 },
     {.x = 2976, .y = -3264, .angle = 90, .type = 9, .flags = 12 },
     {.x = 3008, .y = -3520, .angle = 90, .type = 9, .flags = 12 },
     {.x = 3008, .y = -3072, .angle = 90, .type = 9, .flags = 12 },
     {.x = 2816, .y = -2688, .angle = 0, .type = 9, .flags = 12 },
     {.x = 2496, .y = -3968, .angle = 0, .type = 9, .flags = 12 },
     {.x = 2256, .y = -4064, .angle = 0, .type = 9, .flags = 4 },
     {.x = 3072, .y = -4256, .angle = 90, .type = 9, .flags = 12 },
     {.x = -192, .y = -3296, .angle = 0, .type = 9, .flags = 12 },
     {.x = 1024, .y = -3264, .angle = 270, .type = 10, .flags = 7 },
     {.x = 1088, .y = -2944, .angle = 270, .type = 15, .flags = 7 },
     {.x = 448, .y = -3328, .angle = 270, .type = 24, .flags = 7 },
     {.x = -96, .y = -3296, .angle = 270, .type = 10, .flags = 7 },
     {.x = 1504, .y = -2496, .angle = 270, .type = 15, .flags = 7 },
     {.x = 2240, .y = -2480, .angle = 270, .type = 15, .flags = 7 },
     {.x = 2112, .y = -2688, .angle = 270, .type = 24, .flags = 7 },
     {.x = 1792, .y = -2144, .angle = 270, .type = 24, .flags = 7 },
     {.x = 2368, .y = -2336, .angle = 270, .type = 24, .flags = 7 },
     {.x = 2800, .y = -2992, .angle = 270, .type = 15, .flags = 7 },
     {.x = 3072, .y = -3488, .angle = 270, .type = 12, .flags = 7 },
     {.x = 2944, .y = -4256, .angle = 270, .type = 12, .flags = 7 },
     {.x = 2976, .y = -3840, .angle = 270, .type = 24, .flags = 7 },
     {.x = 3264, .y = -4512, .angle = 270, .type = 24, .flags = 7 },
     {.x = 2272, .y = -4000, .angle = 270, .type = 24, .flags = 7 },
     {.x = 3648, .y = -3648, .angle = 0, .type = 2049, .flags = 7 },
     {.x = 3616, .y = -3392, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3712, .y = -3264, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3472, .y = -2960, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3376, .y = -3024, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3568, .y = -2992, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3616, .y = -3088, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3664, .y = -3168, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 3648, .y = -3840, .angle = 0, .type = 2015, .flags = 7 },
     {.x = 256, .y = -3424, .angle = 0, .type = 2023, .flags = 19 },
     {.x = 800, .y = -2960, .angle = 90, .type = 2035, .flags = 23 },
     {.x = 768, .y = -3008, .angle = 90, .type = 2035, .flags = 23 },
     {.x = 720, .y = -3040, .angle = 90, .type = 2035, .flags = 23 },
     {.x = 736, .y = -2976, .angle = 90, .type = 2001, .flags = 23 },
 };

const linedef linedefs[486] = {
    {
                .v1 = 0, .v2 = 1, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 0, .left_sidedef = -1},
     {
                .v1 = 1, .v2 = 2, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 1, .left_sidedef = -1},
     {
                .v1 = 3, .v2 = 0, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 2, .left_sidedef = -1},
     {
                .v1 = 4, .v2 = 3, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 3, .left_sidedef = -1},
     {
                .v1 = 2, .v2 = 5, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 4, .left_sidedef = -1},
     {
                .v1 = 6, .v2 = 4, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 5, .left_sidedef = -1},
     {
                .v1 = 5, .v2 = 7, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 6, .left_sidedef = -1},
     {
                .v1 = 8, .v2 = 6, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 7, .left_sidedef = -1},
     {
                .v1 = 7, .v2 = 9, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 8, .left_sidedef = -1},
     {
                .v1 = 10, .v2 = 11, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 9, .left_sidedef = -1},
     {
                .v1 = 11, .v2 = 12, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 10, .left_sidedef = -1},
     {
                .v1 = 12, .v2 = 13, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 11, .left_sidedef = -1},
     {
                .v1 = 13, .v2 = 10, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 12, .left_sidedef = -1},
     {
                .v1 = 14, .v2 = 15, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 13, .left_sidedef = -1},
     {
                .v1 = 15, .v2 = 16, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 14, .left_sidedef = -1},
     {
                .v1 = 16, .v2 = 17, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 15, .left_sidedef = -1},
     {
                .v1 = 17, .v2 = 14, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 16, .left_sidedef = -1},
     {
                .v1 = 18, .v2 = 19, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 17, .left_sidedef = -1},
     {
                .v1 = 19, .v2 = 20, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 18, .left_sidedef = -1},
     {
                .v1 = 20, .v2 = 21, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 19, .left_sidedef = -1},
     {
                .v1 = 21, .v2 = 18, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 20, .left_sidedef = -1},
     {
                .v1 = 22, .v2 = 23, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 21, .left_sidedef = -1},
     {
                .v1 = 23, .v2 = 24, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 22, .left_sidedef = -1},
     {
                .v1 = 24, .v2 = 25, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 23, .left_sidedef = -1},
     {
                .v1 = 25, .v2 = 22, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 24, .left_sidedef = -1},
     {
                .v1 = 26, .v2 = 27, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 25, .left_sidedef = 26},
     {
                .v1 = 28, .v2 = 26, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 27, .left_sidedef = -1},
     {
                .v1 = 29, .v2 = 30, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 28, .left_sidedef = -1},
     {
                .v1 = 30, .v2 = 28, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 29, .left_sidedef = 30},
     {
                .v1 = 31, .v2 = 32, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 31, .left_sidedef = 32},
     {
                .v1 = 33, .v2 = 34, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 33, .left_sidedef = 34},
     {
                .v1 = 26, .v2 = 34, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 35, .left_sidedef = -1},
     {
                .v1 = 33, .v2 = 27, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 36, .left_sidedef = -1},
     {
                .v1 = 31, .v2 = 28, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 37, .left_sidedef = -1},
     {
                .v1 = 30, .v2 = 32, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 38, .left_sidedef = -1},
     {
                .v1 = 34, .v2 = 31, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 39, .left_sidedef = -1},
     {
                .v1 = 32, .v2 = 35, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 40, .left_sidedef = -1},
     {
                .v1 = 14, .v2 = 11, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 41, .left_sidedef = 42},
     {
                .v1 = 27, .v2 = 15, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 43, .left_sidedef = 44},
     {
                .v1 = 22, .v2 = 30, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 45, .left_sidedef = 46},
     {
                .v1 = 36, .v2 = 37, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 47, .left_sidedef = -1},
     {
                .v1 = 37, .v2 = 38, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 48, .left_sidedef = -1},
     {
                .v1 = 38, .v2 = 39, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 49, .left_sidedef = -1},
     {
                .v1 = 35, .v2 = 40, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 50, .left_sidedef = -1},
     {
                .v1 = 41, .v2 = 42, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 51, .left_sidedef = -1},
     {
                .v1 = 43, .v2 = 41, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 52, .left_sidedef = -1},
     {
                .v1 = 3, .v2 = 2, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 53, .left_sidedef = 54},
     {
                .v1 = 20, .v2 = 24, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 55, .left_sidedef = 56},
     {
                .v1 = 17, .v2 = 12, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 57, .left_sidedef = 58},
     {
                .v1 = 12, .v2 = 20, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 59, .left_sidedef = 60},
     {
                .v1 = 13, .v2 = 19, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 61, .left_sidedef = 62},
     {
                .v1 = 21, .v2 = 23, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 63, .left_sidedef = 64},
     {
                .v1 = 9, .v2 = 44, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 65, .left_sidedef = -1},
     {
                .v1 = 45, .v2 = 36, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 66, .left_sidedef = -1},
     {
                .v1 = 45, .v2 = 44, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 67, .left_sidedef = 68},
     {
                .v1 = 46, .v2 = 47, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 69, .left_sidedef = -1},
     {
                .v1 = 48, .v2 = 49, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 70, .left_sidedef = -1},
     {
                .v1 = 49, .v2 = 50, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 71, .left_sidedef = -1},
     {
                .v1 = 50, .v2 = 45, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 72, .left_sidedef = -1},
     {
                .v1 = 44, .v2 = 51, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 73, .left_sidedef = -1},
     {
                .v1 = 51, .v2 = 46, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 74, .left_sidedef = -1},
     {
                .v1 = 52, .v2 = 53, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 75, .left_sidedef = 76},
     {
                .v1 = 47, .v2 = 53, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 77, .left_sidedef = -1},
     {
                .v1 = 52, .v2 = 48, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 78, .left_sidedef = -1},
     {
                .v1 = 53, .v2 = 54, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 79, .left_sidedef = -1},
     {
                .v1 = 54, .v2 = 55, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 80, .left_sidedef = -1},
     {
                .v1 = 55, .v2 = 56, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 81, .left_sidedef = -1},
     {
                .v1 = 57, .v2 = 58, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 82, .left_sidedef = -1},
     {
                .v1 = 59, .v2 = 52, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 83, .left_sidedef = -1},
     {
                .v1 = 58, .v2 = 59, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 84, .left_sidedef = -1},
     {
                .v1 = 60, .v2 = 61, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 85, .left_sidedef = 86},
     {
                .v1 = 61, .v2 = 62, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 87, .left_sidedef = 88},
     {
                .v1 = 62, .v2 = 63, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 89, .left_sidedef = 90},
     {
                .v1 = 63, .v2 = 64, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 91, .left_sidedef = 92},
     {
                .v1 = 64, .v2 = 65, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 93, .left_sidedef = 94},
     {
                .v1 = 65, .v2 = 66, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 95, .left_sidedef = 96},
     {
                .v1 = 66, .v2 = 67, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 97, .left_sidedef = 98},
     {
                .v1 = 67, .v2 = 68, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 99, .left_sidedef = 100},
     {
                .v1 = 68, .v2 = 69, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 101, .left_sidedef = 102},
     {
                .v1 = 69, .v2 = 70, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 103, .left_sidedef = 104},
     {
                .v1 = 70, .v2 = 71, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 105, .left_sidedef = 106},
     {
                .v1 = 71, .v2 = 72, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 107, .left_sidedef = 108},
     {
                .v1 = 72, .v2 = 73, 
                .flags = 20, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 109, .left_sidedef = 110},
     {
                .v1 = 61, .v2 = 72, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 111, .left_sidedef = 112},
     {
                .v1 = 62, .v2 = 71, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 113, .left_sidedef = 114},
     {
                .v1 = 63, .v2 = 70, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 115, .left_sidedef = 116},
     {
                .v1 = 64, .v2 = 69, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 117, .left_sidedef = 118},
     {
                .v1 = 65, .v2 = 68, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 119, .left_sidedef = 120},
     {
                .v1 = 60, .v2 = 73, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 121, .left_sidedef = 122},
     {
                .v1 = 73, .v2 = 74, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 123, .left_sidedef = 124},
     {
                .v1 = 74, .v2 = 57, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 125, .left_sidedef = -1},
     {
                .v1 = 56, .v2 = 75, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 126, .left_sidedef = -1},
     {
                .v1 = 75, .v2 = 60, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 127, .left_sidedef = 128},
     {
                .v1 = 75, .v2 = 76, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 129, .left_sidedef = -1},
     {
                .v1 = 76, .v2 = 77, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 130, .left_sidedef = -1},
     {
                .v1 = 78, .v2 = 79, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 131, .left_sidedef = -1},
     {
                .v1 = 79, .v2 = 74, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 132, .left_sidedef = -1},
     {
                .v1 = 80, .v2 = 81, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 133, .left_sidedef = -1},
     {
                .v1 = 82, .v2 = 83, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 134, .left_sidedef = -1},
     {
                .v1 = 84, .v2 = 85, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 135, .left_sidedef = -1},
     {
                .v1 = 83, .v2 = 86, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 136, .left_sidedef = -1},
     {
                .v1 = 87, .v2 = 80, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 137, .left_sidedef = -1},
     {
                .v1 = 88, .v2 = 89, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 138, .left_sidedef = -1},
     {
                .v1 = 81, .v2 = 90, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 139, .left_sidedef = -1},
     {
                .v1 = 91, .v2 = 82, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 140, .left_sidedef = -1},
     {
                .v1 = 86, .v2 = 92, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 141, .left_sidedef = -1},
     {
                .v1 = 92, .v2 = 91, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 142, .left_sidedef = -1},
     {
                .v1 = 90, .v2 = 93, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 143, .left_sidedef = -1},
     {
                .v1 = 93, .v2 = 87, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 144, .left_sidedef = -1},
     {
                .v1 = 89, .v2 = 94, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 145, .left_sidedef = -1},
     {
                .v1 = 94, .v2 = 95, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 146, .left_sidedef = -1},
     {
                .v1 = 96, .v2 = 84, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 147, .left_sidedef = -1},
     {
                .v1 = 97, .v2 = 96, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 148, .left_sidedef = -1},
     {
                .v1 = 78, .v2 = 77, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 149, .left_sidedef = 150},
     {
                .v1 = 88, .v2 = 80, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 151, .left_sidedef = 152},
     {
                .v1 = 87, .v2 = 89, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 153, .left_sidedef = 154},
     {
                .v1 = 83, .v2 = 85, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 155, .left_sidedef = 156},
     {
                .v1 = 84, .v2 = 86, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 157, .left_sidedef = 158},
     {
                .v1 = 81, .v2 = 82, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 159, .left_sidedef = 160},
     {
                .v1 = 91, .v2 = 90, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 161, .left_sidedef = 162},
     {
                .v1 = 98, .v2 = 97, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 163, .left_sidedef = -1},
     {
                .v1 = 95, .v2 = 99, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 164, .left_sidedef = -1},
     {
                .v1 = 99, .v2 = 100, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 165, .left_sidedef = -1},
     {
                .v1 = 100, .v2 = 101, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 166, .left_sidedef = -1},
     {
                .v1 = 101, .v2 = 102, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 167, .left_sidedef = -1},
     {
                .v1 = 102, .v2 = 103, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 168, .left_sidedef = -1},
     {
                .v1 = 103, .v2 = 98, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 169, .left_sidedef = -1},
     {
                .v1 = 99, .v2 = 104, 
                .flags = 156, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 170, .left_sidedef = 171},
     {
                .v1 = 104, .v2 = 105, 
                .flags = 156, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 172, .left_sidedef = 173},
     {
                .v1 = 105, .v2 = 98, 
                .flags = 156, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 174, .left_sidedef = 175},
     {
                .v1 = 85, .v2 = 106, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 176, .left_sidedef = -1},
     {
                .v1 = 106, .v2 = 78, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 177, .left_sidedef = -1},
     {
                .v1 = 77, .v2 = 107, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 178, .left_sidedef = -1},
     {
                .v1 = 107, .v2 = 88, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 179, .left_sidedef = -1},
     {
                .v1 = 108, .v2 = 109, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 180, .left_sidedef = 181},
     {
                .v1 = 109, .v2 = 110, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 182, .left_sidedef = 183},
     {
                .v1 = 110, .v2 = 111, 
                .flags = 28, .line_type = 63, .sector_tag = 3, 
                .right_sidedef = 184, .left_sidedef = 185},
     {
                .v1 = 111, .v2 = 108, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 186, .left_sidedef = 187},
     {
                .v1 = 112, .v2 = 113, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 188, .left_sidedef = 189},
     {
                .v1 = 113, .v2 = 114, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 190, .left_sidedef = 191},
     {
                .v1 = 114, .v2 = 115, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 192, .left_sidedef = 193},
     {
                .v1 = 115, .v2 = 112, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 194, .left_sidedef = 195},
     {
                .v1 = 39, .v2 = 116, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 196, .left_sidedef = -1},
     {
                .v1 = 117, .v2 = 29, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 197, .left_sidedef = -1},
     {
                .v1 = 118, .v2 = 117, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 198, .left_sidedef = -1},
     {
                .v1 = 116, .v2 = 119, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 199, .left_sidedef = -1},
     {
                .v1 = 29, .v2 = 39, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 200, .left_sidedef = 201},
     {
                .v1 = 119, .v2 = 118, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 202, .left_sidedef = 203},
     {
                .v1 = 120, .v2 = 121, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 204, .left_sidedef = 205},
     {
                .v1 = 122, .v2 = 123, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 206, .left_sidedef = 207},
     {
                .v1 = 121, .v2 = 118, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 208, .left_sidedef = -1},
     {
                .v1 = 119, .v2 = 120, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 209, .left_sidedef = -1},
     {
                .v1 = 120, .v2 = 123, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 210, .left_sidedef = -1},
     {
                .v1 = 122, .v2 = 121, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 211, .left_sidedef = -1},
     {
                .v1 = 124, .v2 = 122, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 212, .left_sidedef = -1},
     {
                .v1 = 123, .v2 = 125, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 213, .left_sidedef = -1},
     {
                .v1 = 126, .v2 = 127, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 214, .left_sidedef = -1},
     {
                .v1 = 127, .v2 = 128, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 215, .left_sidedef = -1},
     {
                .v1 = 129, .v2 = 43, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 216, .left_sidedef = -1},
     {
                .v1 = 130, .v2 = 131, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 217, .left_sidedef = 218},
     {
                .v1 = 132, .v2 = 133, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 219, .left_sidedef = 220},
     {
                .v1 = 133, .v2 = 134, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 221, .left_sidedef = 222},
     {
                .v1 = 134, .v2 = 135, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 223, .left_sidedef = 224},
     {
                .v1 = 135, .v2 = 136, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 225, .left_sidedef = 226},
     {
                .v1 = 136, .v2 = 137, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 227, .left_sidedef = 228},
     {
                .v1 = 137, .v2 = 138, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 229, .left_sidedef = 230},
     {
                .v1 = 138, .v2 = 139, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 231, .left_sidedef = 232},
     {
                .v1 = 139, .v2 = 132, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 233, .left_sidedef = 234},
     {
                .v1 = 140, .v2 = 141, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 235, .left_sidedef = -1},
     {
                .v1 = 142, .v2 = 143, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 236, .left_sidedef = -1},
     {
                .v1 = 143, .v2 = 144, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 237, .left_sidedef = -1},
     {
                .v1 = 145, .v2 = 146, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 238, .left_sidedef = -1},
     {
                .v1 = 147, .v2 = 148, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 239, .left_sidedef = -1},
     {
                .v1 = 149, .v2 = 150, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 240, .left_sidedef = -1},
     {
                .v1 = 151, .v2 = 152, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 241, .left_sidedef = -1},
     {
                .v1 = 153, .v2 = 126, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 242, .left_sidedef = -1},
     {
                .v1 = 152, .v2 = 153, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 243, .left_sidedef = -1},
     {
                .v1 = 148, .v2 = 154, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 244, .left_sidedef = -1},
     {
                .v1 = 155, .v2 = 154, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 245, .left_sidedef = 246},
     {
                .v1 = 156, .v2 = 157, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 247, .left_sidedef = 248},
     {
                .v1 = 158, .v2 = 156, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 249, .left_sidedef = 250},
     {
                .v1 = 159, .v2 = 160, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 251, .left_sidedef = 252},
     {
                .v1 = 161, .v2 = 158, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 253, .left_sidedef = 254},
     {
                .v1 = 160, .v2 = 155, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 255, .left_sidedef = 256},
     {
                .v1 = 162, .v2 = 163, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 257, .left_sidedef = -1},
     {
                .v1 = 164, .v2 = 151, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 258, .left_sidedef = -1},
     {
                .v1 = 163, .v2 = 165, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 259, .left_sidedef = -1},
     {
                .v1 = 166, .v2 = 164, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 260, .left_sidedef = -1},
     {
                .v1 = 140, .v2 = 144, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 261, .left_sidedef = 262},
     {
                .v1 = 152, .v2 = 157, 
                .flags = 132, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 263, .left_sidedef = 264},
     {
                .v1 = 157, .v2 = 163, 
                .flags = 132, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 265, .left_sidedef = 266},
     {
                .v1 = 149, .v2 = 147, 
                .flags = 132, .line_type = 88, .sector_tag = 2, 
                .right_sidedef = 267, .left_sidedef = 268},
     {
                .v1 = 157, .v2 = 151, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 269, .left_sidedef = 270},
     {
                .v1 = 167, .v2 = 159, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 271, .left_sidedef = 272},
     {
                .v1 = 162, .v2 = 167, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 273, .left_sidedef = 274},
     {
                .v1 = 168, .v2 = 162, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 275, .left_sidedef = -1},
     {
                .v1 = 169, .v2 = 170, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 276, .left_sidedef = 277},
     {
                .v1 = 170, .v2 = 171, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 278, .left_sidedef = 279},
     {
                .v1 = 171, .v2 = 168, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 280, .left_sidedef = 281},
     {
                .v1 = 128, .v2 = 172, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 282, .left_sidedef = -1},
     {
                .v1 = 172, .v2 = 173, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 283, .left_sidedef = -1},
     {
                .v1 = 174, .v2 = 129, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 284, .left_sidedef = -1},
     {
                .v1 = 175, .v2 = 174, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 285, .left_sidedef = -1},
     {
                .v1 = 176, .v2 = 177, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 286, .left_sidedef = -1},
     {
                .v1 = 177, .v2 = 178, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 287, .left_sidedef = -1},
     {
                .v1 = 179, .v2 = 180, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 288, .left_sidedef = -1},
     {
                .v1 = 181, .v2 = 179, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 289, .left_sidedef = -1},
     {
                .v1 = 182, .v2 = 181, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 290, .left_sidedef = -1},
     {
                .v1 = 183, .v2 = 182, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 291, .left_sidedef = -1},
     {
                .v1 = 178, .v2 = 184, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 292, .left_sidedef = -1},
     {
                .v1 = 184, .v2 = 185, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 293, .left_sidedef = -1},
     {
                .v1 = 186, .v2 = 187, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 294, .left_sidedef = -1},
     {
                .v1 = 173, .v2 = 175, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 295, .left_sidedef = 296},
     {
                .v1 = 180, .v2 = 176, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 297, .left_sidedef = 298},
     {
                .v1 = 179, .v2 = 177, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 299, .left_sidedef = 300},
     {
                .v1 = 181, .v2 = 178, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 301, .left_sidedef = 302},
     {
                .v1 = 182, .v2 = 184, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 303, .left_sidedef = 304},
     {
                .v1 = 183, .v2 = 185, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 305, .left_sidedef = 306},
     {
                .v1 = 186, .v2 = 188, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 307, .left_sidedef = 308},
     {
                .v1 = 189, .v2 = 190, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 309, .left_sidedef = 310},
     {
                .v1 = 191, .v2 = 192, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 311, .left_sidedef = 312},
     {
                .v1 = 193, .v2 = 194, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 313, .left_sidedef = 314},
     {
                .v1 = 195, .v2 = 196, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 315, .left_sidedef = 316},
     {
                .v1 = 197, .v2 = 198, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 317, .left_sidedef = 318},
     {
                .v1 = 199, .v2 = 200, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 319, .left_sidedef = 320},
     {
                .v1 = 201, .v2 = 202, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 321, .left_sidedef = 322},
     {
                .v1 = 203, .v2 = 204, 
                .flags = 14, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 323, .left_sidedef = 324},
     {
                .v1 = 203, .v2 = 201, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 325, .left_sidedef = -1},
     {
                .v1 = 202, .v2 = 204, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 326, .left_sidedef = -1},
     {
                .v1 = 201, .v2 = 199, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 327, .left_sidedef = -1},
     {
                .v1 = 199, .v2 = 197, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 328, .left_sidedef = -1},
     {
                .v1 = 197, .v2 = 195, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 329, .left_sidedef = -1},
     {
                .v1 = 195, .v2 = 193, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 330, .left_sidedef = -1},
     {
                .v1 = 193, .v2 = 191, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 331, .left_sidedef = -1},
     {
                .v1 = 192, .v2 = 194, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 332, .left_sidedef = -1},
     {
                .v1 = 194, .v2 = 196, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 333, .left_sidedef = -1},
     {
                .v1 = 196, .v2 = 198, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 334, .left_sidedef = -1},
     {
                .v1 = 198, .v2 = 200, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 335, .left_sidedef = -1},
     {
                .v1 = 200, .v2 = 202, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 336, .left_sidedef = -1},
     {
                .v1 = 191, .v2 = 205, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 337, .left_sidedef = -1},
     {
                .v1 = 206, .v2 = 192, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 338, .left_sidedef = -1},
     {
                .v1 = 207, .v2 = 206, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 339, .left_sidedef = -1},
     {
                .v1 = 205, .v2 = 166, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 340, .left_sidedef = -1},
     {
                .v1 = 207, .v2 = 166, 
                .flags = 36, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 341, .left_sidedef = 342},
     {
                .v1 = 205, .v2 = 206, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 343, .left_sidedef = 344},
     {
                .v1 = 208, .v2 = 207, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 345, .left_sidedef = -1},
     {
                .v1 = 126, .v2 = 209, 
                .flags = 156, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 346, .left_sidedef = 347},
     {
                .v1 = 209, .v2 = 210, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 348, .left_sidedef = 349},
     {
                .v1 = 210, .v2 = 42, 
                .flags = 156, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 350, .left_sidedef = 351},
     {
                .v1 = 210, .v2 = 129, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 352, .left_sidedef = 353},
     {
                .v1 = 128, .v2 = 209, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 354, .left_sidedef = 355},
     {
                .v1 = 204, .v2 = 211, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 356, .left_sidedef = -1},
     {
                .v1 = 211, .v2 = 190, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 357, .left_sidedef = -1},
     {
                .v1 = 189, .v2 = 212, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 358, .left_sidedef = -1},
     {
                .v1 = 212, .v2 = 203, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 359, .left_sidedef = -1},
     {
                .v1 = 185, .v2 = 213, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 360, .left_sidedef = -1},
     {
                .v1 = 213, .v2 = 188, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 361, .left_sidedef = -1},
     {
                .v1 = 187, .v2 = 214, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 362, .left_sidedef = -1},
     {
                .v1 = 214, .v2 = 183, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 363, .left_sidedef = -1},
     {
                .v1 = 149, .v2 = 161, 
                .flags = 6, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 364, .left_sidedef = 365},
     {
                .v1 = 146, .v2 = 215, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 366, .left_sidedef = -1},
     {
                .v1 = 215, .v2 = 140, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 367, .left_sidedef = -1},
     {
                .v1 = 144, .v2 = 216, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 368, .left_sidedef = -1},
     {
                .v1 = 216, .v2 = 147, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 369, .left_sidedef = -1},
     {
                .v1 = 217, .v2 = 169, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 370, .left_sidedef = -1},
     {
                .v1 = 169, .v2 = 218, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 371, .left_sidedef = -1},
     {
                .v1 = 218, .v2 = 168, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 372, .left_sidedef = 373},
     {
                .v1 = 219, .v2 = 220, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 374, .left_sidedef = -1},
     {
                .v1 = 220, .v2 = 221, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 375, .left_sidedef = -1},
     {
                .v1 = 221, .v2 = 222, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 376, .left_sidedef = -1},
     {
                .v1 = 222, .v2 = 223, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 377, .left_sidedef = -1},
     {
                .v1 = 152, .v2 = 223, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 378, .left_sidedef = 379},
     {
                .v1 = 222, .v2 = 153, 
                .flags = 29, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 380, .left_sidedef = 381},
     {
                .v1 = 223, .v2 = 149, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 382, .left_sidedef = -1},
     {
                .v1 = 224, .v2 = 225, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 383, .left_sidedef = -1},
     {
                .v1 = 226, .v2 = 227, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 384, .left_sidedef = -1},
     {
                .v1 = 227, .v2 = 228, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 385, .left_sidedef = -1},
     {
                .v1 = 229, .v2 = 230, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 386, .left_sidedef = -1},
     {
                .v1 = 231, .v2 = 232, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 387, .left_sidedef = -1},
     {
                .v1 = 233, .v2 = 224, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 388, .left_sidedef = -1},
     {
                .v1 = 234, .v2 = 235, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 389, .left_sidedef = -1},
     {
                .v1 = 235, .v2 = 236, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 390, .left_sidedef = -1},
     {
                .v1 = 236, .v2 = 237, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 391, .left_sidedef = -1},
     {
                .v1 = 238, .v2 = 239, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 392, .left_sidedef = -1},
     {
                .v1 = 239, .v2 = 240, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 393, .left_sidedef = -1},
     {
                .v1 = 240, .v2 = 241, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 394, .left_sidedef = -1},
     {
                .v1 = 228, .v2 = 242, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 395, .left_sidedef = -1},
     {
                .v1 = 242, .v2 = 229, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 396, .left_sidedef = -1},
     {
                .v1 = 237, .v2 = 243, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 397, .left_sidedef = -1},
     {
                .v1 = 243, .v2 = 234, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 398, .left_sidedef = -1},
     {
                .v1 = 232, .v2 = 244, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 399, .left_sidedef = -1},
     {
                .v1 = 244, .v2 = 233, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 400, .left_sidedef = -1},
     {
                .v1 = 241, .v2 = 245, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 401, .left_sidedef = -1},
     {
                .v1 = 245, .v2 = 238, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 402, .left_sidedef = -1},
     {
                .v1 = 245, .v2 = 246, 
                .flags = 5, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 403, .left_sidedef = 404},
     {
                .v1 = 246, .v2 = 247, 
                .flags = 5, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 405, .left_sidedef = 406},
     {
                .v1 = 247, .v2 = 242, 
                .flags = 5, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 407, .left_sidedef = 408},
     {
                .v1 = 248, .v2 = 243, 
                .flags = 5, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 409, .left_sidedef = 410},
     {
                .v1 = 244, .v2 = 249, 
                .flags = 5, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 411, .left_sidedef = 412},
     {
                .v1 = 249, .v2 = 248, 
                .flags = 5, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 413, .left_sidedef = 414},
     {
                .v1 = 250, .v2 = 251, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 415, .left_sidedef = -1},
     {
                .v1 = 252, .v2 = 253, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 416, .left_sidedef = -1},
     {
                .v1 = 251, .v2 = 254, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 417, .left_sidedef = -1},
     {
                .v1 = 255, .v2 = 252, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 418, .left_sidedef = -1},
     {
                .v1 = 229, .v2 = 232, 
                .flags = 12, .line_type = 36, .sector_tag = 1, 
                .right_sidedef = 419, .left_sidedef = 420},
     {
                .v1 = 234, .v2 = 241, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 421, .left_sidedef = 422},
     {
                .v1 = 165, .v2 = 208, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 423, .left_sidedef = 424},
     {
                .v1 = 253, .v2 = 226, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 425, .left_sidedef = -1},
     {
                .v1 = 225, .v2 = 250, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 426, .left_sidedef = -1},
     {
                .v1 = 238, .v2 = 228, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 427, .left_sidedef = 428},
     {
                .v1 = 233, .v2 = 237, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 429, .left_sidedef = 430},
     {
                .v1 = 252, .v2 = 251, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 431, .left_sidedef = 432},
     {
                .v1 = 254, .v2 = 256, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 433, .left_sidedef = -1},
     {
                .v1 = 257, .v2 = 255, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 434, .left_sidedef = -1},
     {
                .v1 = 258, .v2 = 257, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 435, .left_sidedef = -1},
     {
                .v1 = 256, .v2 = 259, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 436, .left_sidedef = -1},
     {
                .v1 = 259, .v2 = 260, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 437, .left_sidedef = -1},
     {
                .v1 = 260, .v2 = 261, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 438, .left_sidedef = -1},
     {
                .v1 = 262, .v2 = 263, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 439, .left_sidedef = -1},
     {
                .v1 = 263, .v2 = 258, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 440, .left_sidedef = -1},
     {
                .v1 = 263, .v2 = 260, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 441, .left_sidedef = 442},
     {
                .v1 = 259, .v2 = 258, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 443, .left_sidedef = 444},
     {
                .v1 = 261, .v2 = 264, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 445, .left_sidedef = -1},
     {
                .v1 = 265, .v2 = 262, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 446, .left_sidedef = -1},
     {
                .v1 = 264, .v2 = 266, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 447, .left_sidedef = -1},
     {
                .v1 = 267, .v2 = 268, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 448, .left_sidedef = -1},
     {
                .v1 = 268, .v2 = 269, 
                .flags = 17, .line_type = 11, .sector_tag = 0, 
                .right_sidedef = 449, .left_sidedef = -1},
     {
                .v1 = 269, .v2 = 265, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 450, .left_sidedef = -1},
     {
                .v1 = 266, .v2 = 267, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 451, .left_sidedef = -1},
     {
                .v1 = 262, .v2 = 261, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 452, .left_sidedef = 453},
     {
                .v1 = 270, .v2 = 208, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 454, .left_sidedef = -1},
     {
                .v1 = 165, .v2 = 271, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 455, .left_sidedef = -1},
     {
                .v1 = 230, .v2 = 272, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 456, .left_sidedef = -1},
     {
                .v1 = 272, .v2 = 270, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 457, .left_sidedef = -1},
     {
                .v1 = 271, .v2 = 273, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 458, .left_sidedef = -1},
     {
                .v1 = 273, .v2 = 231, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 459, .left_sidedef = -1},
     {
                .v1 = 271, .v2 = 270, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 460, .left_sidedef = 461},
     {
                .v1 = 272, .v2 = 273, 
                .flags = 4, .line_type = 1, .sector_tag = 0, 
                .right_sidedef = 462, .left_sidedef = 463},
     {
                .v1 = 274, .v2 = 275, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 464, .left_sidedef = 465},
     {
                .v1 = 276, .v2 = 277, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 466, .left_sidedef = 467},
     {
                .v1 = 277, .v2 = 274, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 468, .left_sidedef = 469},
     {
                .v1 = 275, .v2 = 276, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 470, .left_sidedef = 471},
     {
                .v1 = 256, .v2 = 257, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 472, .left_sidedef = 473},
     {
                .v1 = 278, .v2 = 279, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 474, .left_sidedef = 475},
     {
                .v1 = 280, .v2 = 281, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 476, .left_sidedef = 477},
     {
                .v1 = 281, .v2 = 278, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 478, .left_sidedef = 479},
     {
                .v1 = 279, .v2 = 280, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 480, .left_sidedef = 481},
     {
                .v1 = 150, .v2 = 145, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 482, .left_sidedef = -1},
     {
                .v1 = 282, .v2 = 283, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 483, .left_sidedef = 484},
     {
                .v1 = 283, .v2 = 284, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 485, .left_sidedef = 486},
     {
                .v1 = 284, .v2 = 285, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 487, .left_sidedef = 488},
     {
                .v1 = 285, .v2 = 286, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 489, .left_sidedef = 490},
     {
                .v1 = 286, .v2 = 287, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 491, .left_sidedef = 492},
     {
                .v1 = 287, .v2 = 288, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 493, .left_sidedef = 494},
     {
                .v1 = 288, .v2 = 289, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 495, .left_sidedef = 496},
     {
                .v1 = 289, .v2 = 282, 
                .flags = 28, .line_type = 48, .sector_tag = 0, 
                .right_sidedef = 497, .left_sidedef = 498},
     {
                .v1 = 290, .v2 = 291, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 499, .left_sidedef = -1},
     {
                .v1 = 291, .v2 = 292, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 500, .left_sidedef = -1},
     {
                .v1 = 293, .v2 = 294, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 501, .left_sidedef = -1},
     {
                .v1 = 295, .v2 = 296, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 502, .left_sidedef = -1},
     {
                .v1 = 296, .v2 = 297, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 503, .left_sidedef = -1},
     {
                .v1 = 298, .v2 = 299, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 504, .left_sidedef = -1},
     {
                .v1 = 300, .v2 = 301, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 505, .left_sidedef = -1},
     {
                .v1 = 301, .v2 = 302, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 506, .left_sidedef = -1},
     {
                .v1 = 302, .v2 = 303, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 507, .left_sidedef = -1},
     {
                .v1 = 303, .v2 = 295, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 508, .left_sidedef = -1},
     {
                .v1 = 292, .v2 = 300, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 509, .left_sidedef = -1},
     {
                .v1 = 290, .v2 = 304, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 510, .left_sidedef = 511},
     {
                .v1 = 304, .v2 = 305, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 512, .left_sidedef = 513},
     {
                .v1 = 305, .v2 = 297, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 514, .left_sidedef = 515},
     {
                .v1 = 306, .v2 = 307, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 516, .left_sidedef = -1},
     {
                .v1 = 307, .v2 = 308, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 517, .left_sidedef = -1},
     {
                .v1 = 308, .v2 = 293, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 518, .left_sidedef = -1},
     {
                .v1 = 298, .v2 = 309, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 519, .left_sidedef = 520},
     {
                .v1 = 310, .v2 = 311, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 521, .left_sidedef = -1},
     {
                .v1 = 141, .v2 = 312, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 522, .left_sidedef = -1},
     {
                .v1 = 313, .v2 = 142, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 523, .left_sidedef = -1},
     {
                .v1 = 312, .v2 = 310, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 524, .left_sidedef = -1},
     {
                .v1 = 124, .v2 = 125, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 525, .left_sidedef = 526},
     {
                .v1 = 313, .v2 = 310, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 527, .left_sidedef = 528},
     {
                .v1 = 314, .v2 = 315, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 529, .left_sidedef = 530},
     {
                .v1 = 315, .v2 = 316, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 531, .left_sidedef = 532},
     {
                .v1 = 316, .v2 = 317, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 533, .left_sidedef = 534},
     {
                .v1 = 317, .v2 = 314, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 535, .left_sidedef = 536},
     {
                .v1 = 294, .v2 = 318, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 537, .left_sidedef = -1},
     {
                .v1 = 318, .v2 = 124, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 538, .left_sidedef = -1},
     {
                .v1 = 125, .v2 = 319, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 539, .left_sidedef = -1},
     {
                .v1 = 319, .v2 = 290, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 540, .left_sidedef = -1},
     {
                .v1 = 297, .v2 = 320, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 541, .left_sidedef = -1},
     {
                .v1 = 320, .v2 = 313, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 542, .left_sidedef = -1},
     {
                .v1 = 311, .v2 = 321, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 543, .left_sidedef = -1},
     {
                .v1 = 321, .v2 = 298, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 544, .left_sidedef = -1},
     {
                .v1 = 322, .v2 = 323, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 545, .left_sidedef = -1},
     {
                .v1 = 323, .v2 = 324, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 546, .left_sidedef = -1},
     {
                .v1 = 324, .v2 = 325, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 547, .left_sidedef = -1},
     {
                .v1 = 325, .v2 = 326, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 548, .left_sidedef = -1},
     {
                .v1 = 326, .v2 = 327, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 549, .left_sidedef = -1},
     {
                .v1 = 327, .v2 = 328, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 550, .left_sidedef = -1},
     {
                .v1 = 328, .v2 = 329, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 551, .left_sidedef = -1},
     {
                .v1 = 329, .v2 = 330, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 552, .left_sidedef = -1},
     {
                .v1 = 330, .v2 = 331, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 553, .left_sidedef = -1},
     {
                .v1 = 331, .v2 = 332, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 554, .left_sidedef = -1},
     {
                .v1 = 332, .v2 = 333, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 555, .left_sidedef = -1},
     {
                .v1 = 333, .v2 = 334, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 556, .left_sidedef = -1},
     {
                .v1 = 334, .v2 = 335, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 557, .left_sidedef = -1},
     {
                .v1 = 335, .v2 = 322, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 558, .left_sidedef = -1},
     {
                .v1 = 327, .v2 = 334, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 559, .left_sidedef = 560},
     {
                .v1 = 328, .v2 = 333, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 561, .left_sidedef = 562},
     {
                .v1 = 329, .v2 = 332, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 563, .left_sidedef = 564},
     {
                .v1 = 336, .v2 = 337, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 565, .left_sidedef = 566},
     {
                .v1 = 337, .v2 = 338, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 567, .left_sidedef = 568},
     {
                .v1 = 338, .v2 = 339, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 569, .left_sidedef = 570},
     {
                .v1 = 339, .v2 = 336, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 571, .left_sidedef = 572},
     {
                .v1 = 340, .v2 = 341, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 573, .left_sidedef = 574},
     {
                .v1 = 341, .v2 = 342, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 575, .left_sidedef = 576},
     {
                .v1 = 342, .v2 = 343, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 577, .left_sidedef = 578},
     {
                .v1 = 343, .v2 = 340, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 579, .left_sidedef = 580},
     {
                .v1 = 344, .v2 = 345, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 581, .left_sidedef = 582},
     {
                .v1 = 345, .v2 = 346, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 583, .left_sidedef = 584},
     {
                .v1 = 346, .v2 = 347, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 585, .left_sidedef = 586},
     {
                .v1 = 347, .v2 = 344, 
                .flags = 28, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 587, .left_sidedef = 588},
     {
                .v1 = 141, .v2 = 143, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 589, .left_sidedef = 590},
     {
                .v1 = 348, .v2 = 349, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 591, .left_sidedef = -1},
     {
                .v1 = 350, .v2 = 351, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 592, .left_sidedef = -1},
     {
                .v1 = 352, .v2 = 353, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 593, .left_sidedef = -1},
     {
                .v1 = 349, .v2 = 352, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 594, .left_sidedef = 595},
     {
                .v1 = 218, .v2 = 354, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 596, .left_sidedef = -1},
     {
                .v1 = 354, .v2 = 355, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 597, .left_sidedef = -1},
     {
                .v1 = 353, .v2 = 356, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 598, .left_sidedef = -1},
     {
                .v1 = 356, .v2 = 168, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 599, .left_sidedef = -1},
     {
                .v1 = 349, .v2 = 357, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 600, .left_sidedef = -1},
     {
                .v1 = 357, .v2 = 350, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 601, .left_sidedef = -1},
     {
                .v1 = 351, .v2 = 358, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 602, .left_sidedef = -1},
     {
                .v1 = 358, .v2 = 352, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 603, .left_sidedef = -1},
     {
                .v1 = 190, .v2 = 359, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 604, .left_sidedef = -1},
     {
                .v1 = 359, .v2 = 360, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 605, .left_sidedef = -1},
     {
                .v1 = 360, .v2 = 186, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 606, .left_sidedef = -1},
     {
                .v1 = 188, .v2 = 361, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 607, .left_sidedef = -1},
     {
                .v1 = 361, .v2 = 362, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 608, .left_sidedef = -1},
     {
                .v1 = 362, .v2 = 189, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 609, .left_sidedef = -1},
     {
                .v1 = 173, .v2 = 363, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 610, .left_sidedef = -1},
     {
                .v1 = 363, .v2 = 176, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 611, .left_sidedef = -1},
     {
                .v1 = 180, .v2 = 364, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 612, .left_sidedef = -1},
     {
                .v1 = 364, .v2 = 175, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 613, .left_sidedef = -1},
     {
                .v1 = 355, .v2 = 365, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 614, .left_sidedef = -1},
     {
                .v1 = 366, .v2 = 367, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 615, .left_sidedef = -1},
     {
                .v1 = 368, .v2 = 366, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 616, .left_sidedef = -1},
     {
                .v1 = 369, .v2 = 370, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 617, .left_sidedef = -1},
     {
                .v1 = 370, .v2 = 371, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 618, .left_sidedef = -1},
     {
                .v1 = 371, .v2 = 372, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 619, .left_sidedef = -1},
     {
                .v1 = 372, .v2 = 373, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 620, .left_sidedef = -1},
     {
                .v1 = 374, .v2 = 368, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 621, .left_sidedef = -1},
     {
                .v1 = 375, .v2 = 374, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 622, .left_sidedef = -1},
     {
                .v1 = 376, .v2 = 375, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 623, .left_sidedef = -1},
     {
                .v1 = 373, .v2 = 377, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 624, .left_sidedef = -1},
     {
                .v1 = 378, .v2 = 376, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 625, .left_sidedef = -1},
     {
                .v1 = 377, .v2 = 379, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 626, .left_sidedef = -1},
     {
                .v1 = 380, .v2 = 378, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 627, .left_sidedef = -1},
     {
                .v1 = 154, .v2 = 217, 
                .flags = 30, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 628, .left_sidedef = 629},
     {
                .v1 = 365, .v2 = 348, 
                .flags = 14, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 630, .left_sidedef = 631},
     {
                .v1 = 369, .v2 = 367, 
                .flags = 30, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 632, .left_sidedef = 633},
     {
                .v1 = 154, .v2 = 381, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 634, .left_sidedef = -1},
     {
                .v1 = 381, .v2 = 380, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 635, .left_sidedef = -1},
     {
                .v1 = 379, .v2 = 382, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 636, .left_sidedef = -1},
     {
                .v1 = 382, .v2 = 217, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 637, .left_sidedef = -1},
     {
                .v1 = 365, .v2 = 383, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 638, .left_sidedef = -1},
     {
                .v1 = 383, .v2 = 369, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 639, .left_sidedef = -1},
     {
                .v1 = 367, .v2 = 384, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 640, .left_sidedef = -1},
     {
                .v1 = 384, .v2 = 348, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 641, .left_sidedef = -1},
     {
                .v1 = 27, .v2 = 385, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 642, .left_sidedef = -1},
     {
                .v1 = 386, .v2 = 8, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 643, .left_sidedef = -1},
     {
                .v1 = 385, .v2 = 386, 
                .flags = 4, .line_type = 38, .sector_tag = 5, 
                .right_sidedef = 644, .left_sidedef = 645},
     {
                .v1 = 385, .v2 = 387, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 646, .left_sidedef = -1},
     {
                .v1 = 388, .v2 = 386, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 647, .left_sidedef = -1},
     {
                .v1 = 42, .v2 = 388, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 648, .left_sidedef = -1},
     {
                .v1 = 387, .v2 = 33, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 649, .left_sidedef = -1},
     {
                .v1 = 388, .v2 = 387, 
                .flags = 4, .line_type = 109, .sector_tag = 4, 
                .right_sidedef = 650, .left_sidedef = 651},
     {
                .v1 = 299, .v2 = 306, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 652, .left_sidedef = 653},
     {
                .v1 = 40, .v2 = 389, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 654, .left_sidedef = -1},
     {
                .v1 = 389, .v2 = 130, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 655, .left_sidedef = 656},
     {
                .v1 = 131, .v2 = 390, 
                .flags = 4, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 657, .left_sidedef = 658},
     {
                .v1 = 390, .v2 = 219, 
                .flags = 1, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 659, .left_sidedef = -1},
     {
                .v1 = 299, .v2 = 390, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 660, .left_sidedef = -1},
     {
                .v1 = 389, .v2 = 306, 
                .flags = 17, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 661, .left_sidedef = -1},
     {
                .v1 = 306, .v2 = 309, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 662, .left_sidedef = 663},
     {
                .v1 = 309, .v2 = 294, 
                .flags = 12, .line_type = 0, .sector_tag = 0, 
                .right_sidedef = 664, .left_sidedef = 665},
 };

const sidedef sidedefs[666] = {
    {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOOR3",
                .sector_ref = 30},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 30},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 30},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 48, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 48, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 80, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 48, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 48, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 80, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 3},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 5},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 5},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 3},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 3},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 3},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 5},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 5},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPUTE2", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 11},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 11},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 30},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 27},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPUTE2", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPUTE2", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 28},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 104, 
                .upper_texture = "STARG3", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 31},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 48},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 39},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 38},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 37},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 34},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 33},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 33},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 33},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 34},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 37},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 38},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 39},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "SLADWALL", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 48},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 39},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 48},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 38},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 39},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 37},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 38},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 34},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 37},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 33},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 34},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 48},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 47},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 47},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 47},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 47},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 47},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARG3",
                .sector_ref = 47},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 47},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 43},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 43},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 46},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 46},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 45},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 45},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 47},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 46},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 46},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 43},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 43},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 45},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 45},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARG3", .lower_texture = "STARG3", .middle_texture = "-",
                .sector_ref = 42},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 40},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 36},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 36},
     {
                .x_off = 0, .y_off = 8, 
                .upper_texture = "TEKWALL4", .lower_texture = "SW1COMP", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 36},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 36},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 35},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 35},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 35},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "TEKWALL4", .lower_texture = "TEKWALL4", .middle_texture = "-",
                .sector_ref = 32},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 35},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 24},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 24},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 24},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 24},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 24},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STEP6", .middle_texture = "-",
                .sector_ref = 24},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 25},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BIGDOOR2", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 25},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 26},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BIGDOOR2", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 22},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 26},
     {
                .x_off = 0, .y_off = 56, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 25},
     {
                .x_off = 0, .y_off = 56, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 25},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 26},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 26},
     {
                .x_off = 0, .y_off = 56, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 22},
     {
                .x_off = 0, .y_off = 56, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 22},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 63},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 63},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN144",
                .sector_ref = 11},
     {
                .x_off = 0, .y_off = 88, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 2},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN144", .middle_texture = "-",
                .sector_ref = 0},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 50},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 61},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 50},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 49},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 49},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 51},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 62},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 49},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 50},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 51},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 49},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 51},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 55},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 55},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 55},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 10},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 9},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 10},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 9},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 8},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 7},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 8},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 7},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 6},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 13},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 10},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 13},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 9},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 10},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 8},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 9},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 7},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 8},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 6},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 7},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 6},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 80},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 77},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 78},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 76},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 77},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 75},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 76},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 74},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 75},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 73},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 74},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 81},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 73},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 80},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 81},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 81},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 81},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 73},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 74},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 75},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 76},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 77},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 77},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 76},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 75},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 74},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 73},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 78},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 78},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 83},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 83},
     {
                .x_off = 0, .y_off = 72, 
                .upper_texture = "BROWN96", .lower_texture = "BROWN96", .middle_texture = "-",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 83},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN96", .lower_texture = "BROWN96", .middle_texture = "-",
                .sector_ref = 78},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 83},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 63},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 11},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 11},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 12},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 63},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 12},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 80},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 80},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 80},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 80},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 6},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 6},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 6},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 6},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "NUKE24", .middle_texture = "-",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 56},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 49},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 49},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 49},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 49},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 55},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 55},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 62},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 62},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 62},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 57},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 84},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 84},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGL",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGR",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGC",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGC",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGR",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGL",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGR",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGL",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGL",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGR",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGC",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BRNBIGC",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 84},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 52},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 82},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 64},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 65},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 66},
     {
                .x_off = 88, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "EXITDOOR",
                .sector_ref = 68},
     {
                .x_off = 64, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "EXITDOOR",
                .sector_ref = 68},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 69},
     {
                .x_off = 88, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "EXITDOOR",
                .sector_ref = 72},
     {
                .x_off = 64, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "EXITDOOR",
                .sector_ref = 72},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 69},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "EXITDOOR", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 72},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 69},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "EXITDOOR", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 68},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 69},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SW1STRTN",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN1",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "STARTAN1", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 72},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 82},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 82},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 84},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 85},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORTRAK",
                .sector_ref = 85},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 84},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BIGDOOR4", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 82},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 85},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BIGDOOR4", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 84},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 85},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 67},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 67},
     {
                .x_off = 32, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 67},
     {
                .x_off = 32, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 67},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "STARTAN1", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 66},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 68},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 71},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 71},
     {
                .x_off = 32, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 71},
     {
                .x_off = 32, .y_off = 0, 
                .upper_texture = "EXITSIGN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 70},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 71},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 49},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 8, .y_off = 0, 
                .upper_texture = "TEKWALL1", .lower_texture = "TEKWALL1", .middle_texture = "-",
                .sector_ref = 41},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 44},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPUTE2",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 23},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPUTE2",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 14},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPUTE2",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTALL", .lower_texture = "COMPSPAN", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTALL", .lower_texture = "COMPSPAN", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTALL", .lower_texture = "COMPSPAN", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 21},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 23},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "LITE3",
                .sector_ref = 23},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPUTE2",
                .sector_ref = 23},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTALL", .lower_texture = "COMPSPAN", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 14},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 61},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 61},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 61},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "STARGR1", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 22},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "STARGR1", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 61},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 17},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 17},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 17},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 17},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 32, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARGR1",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 15},
     {
                .x_off = 6, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 20},
     {
                .x_off = 96, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 59},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 60},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 60},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 60},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 59},
     {
                .x_off = 96, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 20},
     {
                .x_off = 6, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "COMPTILE",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTILE", .lower_texture = "STEP1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 20},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "STEP1", .middle_texture = "-",
                .sector_ref = 20},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 59},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "STEP1", .middle_texture = "-",
                .sector_ref = 59},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 60},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 19},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 19},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 19},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 19},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 18},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "PLANET1", .lower_texture = "STARGR1", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 16},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWN1", .lower_texture = "BROWN1", .middle_texture = "-",
                .sector_ref = 50},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 61},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 86},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 86},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 86},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 86},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 86},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 86},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 16, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 79},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 13},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 13},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWN1",
                .sector_ref = 13},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 13},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "BROWNGRN",
                .sector_ref = 53},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 54},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 87},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "BROWNGRN", .lower_texture = "BROWNGRN", .middle_texture = "-",
                .sector_ref = 87},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 58},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 58},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 58},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 87},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 87},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "BROWNGRN",
                .sector_ref = 87},
     {
                .x_off = 4, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "SUPPORT2",
                .sector_ref = 87},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 72, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 29},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 4},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 4},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 4},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 88, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 4},
     {
                .x_off = 0, .y_off = 88, 
                .upper_texture = "COMPUTE3", .lower_texture = "COMPUTE3", .middle_texture = "-",
                .sector_ref = 14},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPUTE3", .lower_texture = "COMPUTE3", .middle_texture = "-",
                .sector_ref = 2},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 88, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 2},
     {
                .x_off = 0, .y_off = 88, 
                .upper_texture = "STARTAN3", .lower_texture = "STARTAN3", .middle_texture = "-",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 2},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "STARTAN3",
                .sector_ref = 1},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 2},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "DOORSTOP",
                .sector_ref = 2},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTALL", .lower_texture = "COMPSPAN", .middle_texture = "-",
                .sector_ref = 14},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 23},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "COMPTALL", .lower_texture = "COMPSPAN", .middle_texture = "-",
                .sector_ref = 15},
     {
                .x_off = 0, .y_off = 0, 
                .upper_texture = "-", .lower_texture = "-", .middle_texture = "-",
                .sector_ref = 23},
 };

const vertex vertexes[470] = {
    {.x = 1088, .y = -3680},
     {.x = 1024, .y = -3680},
     {.x = 1024, .y = -3648},
     {.x = 1088, .y = -3648},
     {.x = 1152, .y = -3648},
     {.x = 960, .y = -3648},
     {.x = 1280, .y = -3552},
     {.x = 832, .y = -3552},
     {.x = 1344, .y = -3552},
     {.x = 704, .y = -3552},
     {.x = 896, .y = -3392},
     {.x = 928, .y = -3392},
     {.x = 928, .y = -3360},
     {.x = 896, .y = -3360},
     {.x = 1184, .y = -3392},
     {.x = 1216, .y = -3392},
     {.x = 1216, .y = -3360},
     {.x = 1184, .y = -3360},
     {.x = 896, .y = -3072},
     {.x = 896, .y = -3104},
     {.x = 928, .y = -3104},
     {.x = 928, .y = -3072},
     {.x = 1216, .y = -3072},
     {.x = 1184, .y = -3072},
     {.x = 1184, .y = -3104},
     {.x = 1216, .y = -3104},
     {.x = 1344, .y = -3264},
     {.x = 1344, .y = -3360},
     {.x = 1344, .y = -3200},
     {.x = 1344, .y = -2880},
     {.x = 1344, .y = -3104},
     {.x = 1376, .y = -3200},
     {.x = 1376, .y = -3104},
     {.x = 1376, .y = -3360},
     {.x = 1376, .y = -3264},
     {.x = 1376, .y = -2944},
     {.x = 704, .y = -2944},
     {.x = 832, .y = -2944},
     {.x = 968, .y = -2880},
     {.x = 1216, .y = -2880},
     {.x = 1472, .y = -2880},
     {.x = 1528, .y = -3680},
     {.x = 1376, .y = -3648},
     {.x = 1672, .y = -3744},
     {.x = 704, .y = -3360},
     {.x = 704, .y = -3104},
     {.x = 512, .y = -3328},
     {.x = 512, .y = -3304},
     {.x = 512, .y = -3160},
     {.x = 512, .y = -3136},
     {.x = 680, .y = -3104},
     {.x = 680, .y = -3360},
     {.x = 496, .y = -3160},
     {.x = 496, .y = -3304},
     {.x = 496, .y = -3328},
     {.x = 448, .y = -3456},
     {.x = 128, .y = -3456},
     {.x = 128, .y = -3008},
     {.x = 448, .y = -3008},
     {.x = 496, .y = -3136},
     {.x = 128, .y = -3264},
     {.x = 160, .y = -3264},
     {.x = 192, .y = -3264},
     {.x = 224, .y = -3264},
     {.x = 256, .y = -3264},
     {.x = 288, .y = -3264},
     {.x = 320, .y = -3264},
     {.x = 320, .y = -3200},
     {.x = 288, .y = -3200},
     {.x = 256, .y = -3200},
     {.x = 224, .y = -3200},
     {.x = 192, .y = -3200},
     {.x = 160, .y = -3200},
     {.x = 128, .y = -3200},
     {.x = 64, .y = -3072},
     {.x = 64, .y = -3392},
     {.x = 48, .y = -3392},
     {.x = -64, .y = -3328},
     {.x = -64, .y = -3136},
     {.x = 48, .y = -3072},
     {.x = -256, .y = -3328},
     {.x = -320, .y = -3296},
     {.x = -320, .y = -3168},
     {.x = -256, .y = -3136},
     {.x = -128, .y = -3120},
     {.x = -128, .y = -3136},
     {.x = -256, .y = -3120},
     {.x = -256, .y = -3344},
     {.x = -128, .y = -3328},
     {.x = -128, .y = -3344},
     {.x = -336, .y = -3296},
     {.x = -336, .y = -3168},
     {.x = -336, .y = -3120},
     {.x = -336, .y = -3344},
     {.x = -96, .y = -3344},
     {.x = 64, .y = -3520},
     {.x = -96, .y = -3120},
     {.x = 64, .y = -2944},
     {.x = 64, .y = -2816},
     {.x = 64, .y = -3648},
     {.x = -640, .y = -3648},
     {.x = -768, .y = -3520},
     {.x = -768, .y = -2944},
     {.x = -640, .y = -2816},
     {.x = -640, .y = -3520},
     {.x = -640, .y = -2944},
     {.x = -88, .y = -3136},
     {.x = -88, .y = -3328},
     {.x = 256, .y = -3136},
     {.x = 320, .y = -3136},
     {.x = 320, .y = -3072},
     {.x = 256, .y = -3072},
     {.x = 256, .y = -3392},
     {.x = 320, .y = -3392},
     {.x = 320, .y = -3328},
     {.x = 256, .y = -3328},
     {.x = 1248, .y = -2528},
     {.x = 1384, .y = -2592},
     {.x = 1472, .y = -2560},
     {.x = 1472, .y = -2432},
     {.x = 1536, .y = -2432},
     {.x = 1536, .y = -2560},
     {.x = 1552, .y = -2560},
     {.x = 1552, .y = -2432},
     {.x = 1664, .y = -2560},
     {.x = 1664, .y = -2432},
     {.x = 2736, .y = -3648},
     {.x = 2488, .y = -3744},
     {.x = 2240, .y = -3776},
     {.x = 1984, .y = -3776},
     {.x = 1856, .y = -2880},
     {.x = 1920, .y = -2920},
     {.x = 1520, .y = -3168},
     {.x = 1672, .y = -3104},
     {.x = 1896, .y = -3104},
     {.x = 2040, .y = -3144},
     {.x = 2128, .y = -3272},
     {.x = 2064, .y = -3408},
     {.x = 1784, .y = -3448},
     {.x = 1544, .y = -3384},
     {.x = 2752, .y = -2784},
     {.x = 2624, .y = -2784},
     {.x = 2520, .y = -2560},
     {.x = 2752, .y = -2560},
     {.x = 2944, .y = -2656},
     {.x = 2880, .y = -2912},
     {.x = 2880, .y = -2880},
     {.x = 3048, .y = -2880},
     {.x = 3048, .y = -2944},
     {.x = 2752, .y = -3048},
     {.x = 2752, .y = -2912},
     {.x = 2752, .y = -3584},
     {.x = 2752, .y = -3360},
     {.x = 2736, .y = -3360},
     {.x = 3304, .y = -3040},
     {.x = 3136, .y = -3072},
     {.x = 3112, .y = -3360},
     {.x = 2944, .y = -3536},
     {.x = 2816, .y = -3232},
     {.x = 3280, .y = -3320},
     {.x = 2984, .y = -3200},
     {.x = 2976, .y = -3072},
     {.x = 3264, .y = -3616},
     {.x = 3072, .y = -3648},
     {.x = 2944, .y = -3648},
     {.x = 3072, .y = -4000},
     {.x = 2944, .y = -3776},
     {.x = 3104, .y = -3552},
     {.x = 3352, .y = -3568},
     {.x = 3472, .y = -3432},
     {.x = 3408, .y = -3432},
     {.x = 3312, .y = -3496},
     {.x = 2208, .y = -3680},
     {.x = 2176, .y = -3680},
     {.x = 2016, .y = -3680},
     {.x = 2048, .y = -3680},
     {.x = 2176, .y = -3776},
     {.x = 2176, .y = -3808},
     {.x = 2176, .y = -3840},
     {.x = 2048, .y = -3808},
     {.x = 2048, .y = -3776},
     {.x = 2048, .y = -3840},
     {.x = 2048, .y = -3872},
     {.x = 2048, .y = -3904},
     {.x = 2176, .y = -3872},
     {.x = 2176, .y = -3904},
     {.x = 2240, .y = -4096},
     {.x = 2112, .y = -4032},
     {.x = 2240, .y = -3968},
     {.x = 2368, .y = -3968},
     {.x = 2368, .y = -4096},
     {.x = 2880, .y = -3776},
     {.x = 2880, .y = -3904},
     {.x = 2848, .y = -3776},
     {.x = 2848, .y = -3904},
     {.x = 2816, .y = -3776},
     {.x = 2816, .y = -3904},
     {.x = 2784, .y = -3776},
     {.x = 2784, .y = -3904},
     {.x = 2752, .y = -3776},
     {.x = 2752, .y = -3904},
     {.x = 2688, .y = -3776},
     {.x = 2720, .y = -3904},
     {.x = 2632, .y = -3792},
     {.x = 2688, .y = -3920},
     {.x = 2912, .y = -3776},
     {.x = 2912, .y = -3904},
     {.x = 2944, .y = -3904},
     {.x = 2944, .y = -4000},
     {.x = 2240, .y = -3648},
     {.x = 1984, .y = -3648},
     {.x = 2672, .y = -3920},
     {.x = 2616, .y = -3792},
     {.x = 2176, .y = -3920},
     {.x = 2048, .y = -3920},
     {.x = 2752, .y = -2800},
     {.x = 2960, .y = -2656},
     {.x = 3400, .y = -3152},
     {.x = 3448, .y = -3520},
     {.x = 2240, .y = -2920},
     {.x = 2272, .y = -3008},
     {.x = 2432, .y = -3112},
     {.x = 2736, .y = -3112},
     {.x = 2752, .y = -3112},
     {.x = 3200, .y = -4128},
     {.x = 3328, .y = -4128},
     {.x = 2688, .y = -4128},
     {.x = 2816, .y = -4128},
     {.x = 2856, .y = -4160},
     {.x = 2912, .y = -4160},
     {.x = 2912, .y = -4128},
     {.x = 3104, .y = -4128},
     {.x = 3104, .y = -4160},
     {.x = 3160, .y = -4160},
     {.x = 3104, .y = -4352},
     {.x = 3104, .y = -4384},
     {.x = 3160, .y = -4384},
     {.x = 3160, .y = -4352},
     {.x = 2856, .y = -4352},
     {.x = 2856, .y = -4384},
     {.x = 2912, .y = -4384},
     {.x = 2912, .y = -4352},
     {.x = 2888, .y = -4160},
     {.x = 3128, .y = -4352},
     {.x = 3128, .y = -4160},
     {.x = 2888, .y = -4352},
     {.x = 2888, .y = -4320},
     {.x = 2888, .y = -4192},
     {.x = 3128, .y = -4320},
     {.x = 3128, .y = -4192},
     {.x = 3328, .y = -4544},
     {.x = 3072, .y = -4544},
     {.x = 2944, .y = -4544},
     {.x = 2688, .y = -4544},
     {.x = 3072, .y = -4608},
     {.x = 2944, .y = -4608},
     {.x = 3040, .y = -4608},
     {.x = 2976, .y = -4608},
     {.x = 2976, .y = -4632},
     {.x = 3040, .y = -4632},
     {.x = 3040, .y = -4648},
     {.x = 3040, .y = -4672},
     {.x = 2976, .y = -4672},
     {.x = 2976, .y = -4648},
     {.x = 3104, .y = -4672},
     {.x = 2912, .y = -4672},
     {.x = 3104, .y = -4864},
     {.x = 2912, .y = -4864},
     {.x = 2912, .y = -4800},
     {.x = 2912, .y = -4736},
     {.x = 2944, .y = -4016},
     {.x = 3072, .y = -4016},
     {.x = 2944, .y = -4032},
     {.x = 3072, .y = -4032},
     {.x = 3024, .y = -4592},
     {.x = 2992, .y = -4592},
     {.x = 2992, .y = -4600},
     {.x = 3024, .y = -4600},
     {.x = 3024, .y = -4840},
     {.x = 2992, .y = -4840},
     {.x = 2992, .y = -4848},
     {.x = 3024, .y = -4848},
     {.x = -240, .y = -3264},
     {.x = -208, .y = -3264},
     {.x = -192, .y = -3248},
     {.x = -192, .y = -3216},
     {.x = -208, .y = -3200},
     {.x = -240, .y = -3200},
     {.x = -256, .y = -3216},
     {.x = -256, .y = -3248},
     {.x = 1664, .y = -2368},
     {.x = 1600, .y = -2368},
     {.x = 1600, .y = -2112},
     {.x = 1600, .y = -2624},
     {.x = 1664, .y = -2624},
     {.x = 2560, .y = -2112},
     {.x = 2560, .y = -2496},
     {.x = 2496, .y = -2496},
     {.x = 2176, .y = -2752},
     {.x = 2176, .y = -2816},
     {.x = 1600, .y = -2048},
     {.x = 1664, .y = -2048},
     {.x = 2496, .y = -2048},
     {.x = 2560, .y = -2048},
     {.x = 1664, .y = -2112},
     {.x = 2496, .y = -2112},
     {.x = 1664, .y = -2816},
     {.x = 1600, .y = -2816},
     {.x = 1600, .y = -2752},
     {.x = 1664, .y = -2752},
     {.x = 2496, .y = -2688},
     {.x = 2496, .y = -2752},
     {.x = 2520, .y = -2688},
     {.x = 2496, .y = -2560},
     {.x = 1984, .y = -2304},
     {.x = 1984, .y = -2240},
     {.x = 1792, .y = -2240},
     {.x = 1792, .y = -2304},
     {.x = 1664, .y = -2600},
     {.x = 1664, .y = -2392},
     {.x = 2496, .y = -2520},
     {.x = 2200, .y = -2752},
     {.x = 2112, .y = -2592},
     {.x = 2336, .y = -2592},
     {.x = 2336, .y = -2272},
     {.x = 2112, .y = -2272},
     {.x = 2112, .y = -2304},
     {.x = 2144, .y = -2304},
     {.x = 2176, .y = -2304},
     {.x = 2208, .y = -2304},
     {.x = 2304, .y = -2304},
     {.x = 2304, .y = -2560},
     {.x = 2208, .y = -2560},
     {.x = 2176, .y = -2560},
     {.x = 2144, .y = -2560},
     {.x = 2112, .y = -2560},
     {.x = 1984, .y = -2624},
     {.x = 1984, .y = -2560},
     {.x = 1792, .y = -2560},
     {.x = 1792, .y = -2624},
     {.x = 1992, .y = -2552},
     {.x = 1784, .y = -2552},
     {.x = 1784, .y = -2632},
     {.x = 1992, .y = -2632},
     {.x = 1784, .y = -2312},
     {.x = 1992, .y = -2312},
     {.x = 1992, .y = -2232},
     {.x = 1784, .y = -2232},
     {.x = 3520, .y = -3904},
     {.x = 3328, .y = -3968},
     {.x = 3200, .y = -3968},
     {.x = 3200, .y = -3744},
     {.x = 3328, .y = -3744},
     {.x = 3360, .y = -3648},
     {.x = 3472, .y = -3520},
     {.x = 3520, .y = -3584},
     {.x = 3352, .y = -3592},
     {.x = 3304, .y = -3968},
     {.x = 3304, .y = -3744},
     {.x = 2344, .y = -4096},
     {.x = 2264, .y = -4096},
     {.x = 2264, .y = -3968},
     {.x = 2344, .y = -3968},
     {.x = 2176, .y = -3704},
     {.x = 2048, .y = -3704},
     {.x = 3520, .y = -3840},
     {.x = 3680, .y = -3904},
     {.x = 3584, .y = -3904},
     {.x = 3744, .y = -3808},
     {.x = 3584, .y = -3840},
     {.x = 3616, .y = -3776},
     {.x = 3552, .y = -3552},
     {.x = 3552, .y = -3392},
     {.x = 3648, .y = -3264},
     {.x = 3680, .y = -3552},
     {.x = 3680, .y = -3392},
     {.x = 3808, .y = -3264},
     {.x = 3496, .y = -3032},
     {.x = 3584, .y = -2880},
     {.x = 3456, .y = -3032},
     {.x = 3360, .y = -2880},
     {.x = 3320, .y = -3040},
     {.x = 3416, .y = -3152},
     {.x = 3536, .y = -3840},
     {.x = 3536, .y = -3904},
     {.x = 1344, .y = -3392},
     {.x = 1344, .y = -3520},
     {.x = 1376, .y = -3392},
     {.x = 1376, .y = -3520},
     {.x = 1664, .y = -2880},
     {.x = 2176, .y = -2920},
     {.x = 2176, .y = -2880},
     {.x = 2176, .y = -4064},
     {.x = 2176, .y = -3648},
     {.x = 1984, .y = -3680},
     {.x = 1664, .y = -2312},
     {.x = 1664, .y = -2552},
     {.x = 1664, .y = -2232},
     {.x = 1992, .y = -2112},
     {.x = 1984, .y = -2312},
     {.x = 1984, .y = -2232},
     {.x = 1784, .y = -2240},
     {.x = 1792, .y = -2312},
     {.x = 1784, .y = -2752},
     {.x = 1992, .y = -2752},
     {.x = 1984, .y = -2552},
     {.x = 1984, .y = -2632},
     {.x = 1784, .y = -2560},
     {.x = 1792, .y = -2632},
     {.x = 1992, .y = -2560},
     {.x = 1992, .y = -2304},
     {.x = 2176, .y = -2592},
     {.x = 1992, .y = -2592},
     {.x = 2176, .y = -2112},
     {.x = 2176, .y = -2272},
     {.x = 1992, .y = -2272},
     {.x = 2176, .y = -2048},
     {.x = 1344, .y = -2486},
     {.x = 472, .y = -3392},
     {.x = 256, .y = -3456},
     {.x = 320, .y = -3008},
     {.x = 256, .y = -3008},
     {.x = 160, .y = -3456},
     {.x = 160, .y = -3008},
     {.x = -768, .y = -3496},
     {.x = -256, .y = -2874},
     {.x = -128, .y = -2851},
     {.x = -640, .y = -3296},
     {.x = -640, .y = -3168},
     {.x = -640, .y = -3120},
     {.x = -128, .y = -3613},
     {.x = -256, .y = -3589},
     {.x = -336, .y = -3575},
     {.x = 2960, .y = -2930},
     {.x = 2944, .y = -3669},
     {.x = 3242, .y = -3370},
     {.x = 3353, .y = -3601},
     {.x = 3454, .y = -3496},
     {.x = 3512, .y = -3574},
     {.x = 3047, .y = -3626},
     {.x = 2752, .y = -3296},
     {.x = 3008, .y = -2902},
     {.x = 3215, .y = -3404},
     {.x = 2887, .y = -3160},
     {.x = 3345, .y = -2939},
     {.x = 3556, .y = -3567},
     {.x = 3680, .y = -3546},
     {.x = 3738, .y = -3144},
     {.x = 3672, .y = -3032},
     {.x = 2336, .y = -2112},
     {.x = 2336, .y = -2560},
     {.x = 2336, .y = -2752},
     {.x = 2496, .y = -2665},
     {.x = 2197, .y = -3648},
     {.x = 2688, .y = -4352},
     {.x = 2688, .y = -4160},
     {.x = 3104, .y = -4544},
     {.x = 2688, .y = -4384},
     {.x = 3160, .y = -4544},
     {.x = 3328, .y = -4160},
     {.x = 3072, .y = -4600},
     {.x = 2944, .y = -4600},
     {.x = 3024, .y = -4544},
     {.x = 2944, .y = -4592},
     {.x = 3104, .y = -4840},
     {.x = 2912, .y = -4840},
     {.x = 3024, .y = -4864},
     {.x = 2912, .y = -4848},
     {.x = 2776, .y = -4128},
     {.x = 2435, .y = -3920},
 };

const seg segs[747] = {
    {
                .begin_vert = 132, .end_vert = 133,
                .angle = 4156, .linedef = 160,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 133, .end_vert = 134,
                .angle = 0, .linedef = 161,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 134, .end_vert = 135,
                .angle = -2826, .linedef = 162,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 135, .end_vert = 136,
                .angle = -10101, .linedef = 163,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 136, .end_vert = 137,
                .angle = -20971, .linedef = 164,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 137, .end_vert = 138,
                .angle = -31287, .linedef = 165,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 138, .end_vert = 139,
                .angle = 30049, .linedef = 166,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 139, .end_vert = 132,
                .angle = 17538, .linedef = 167,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 139, .end_vert = 138,
                .angle = -2718, .linedef = 166,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 138, .end_vert = 137,
                .angle = 1480, .linedef = 165,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 137, .end_vert = 136,
                .angle = 11796, .linedef = 164,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 136, .end_vert = 135,
                .angle = 22666, .linedef = 163,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 135, .end_vert = 134,
                .angle = 29941, .linedef = 162,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 133, .end_vert = 132,
                .angle = -28611, .linedef = 160,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 31, .end_vert = 32,
                .angle = 16384, .linedef = 29,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 33, .end_vert = 34,
                .angle = 16384, .linedef = 30,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 34, .end_vert = 31,
                .angle = 16384, .linedef = 35,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 132, .end_vert = 139,
                .angle = -15229, .linedef = 167,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 387, .end_vert = 33,
                .angle = 16384, .linedef = 475,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 388, .end_vert = 387,
                .angle = 16384, .linedef = 476,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 32, .end_vert = 35,
                .angle = 16384, .linedef = 36,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 35, .end_vert = 40,
                .angle = 6133, .linedef = 43,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 130, .end_vert = 131,
                .angle = -5826, .linedef = 159,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 134, .end_vert = 133,
                .angle = -32768, .linedef = 161,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 40, .end_vert = 389,
                .angle = 0, .linedef = 478,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 389, .end_vert = 130,
                .angle = 0, .linedef = 479,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 131, .end_vert = 390,
                .angle = 0, .linedef = 480,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 131, .end_vert = 130,
                .angle = 26941, .linedef = 159,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 390, .end_vert = 131,
                .angle = -32768, .linedef = 480,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 391, .end_vert = 390,
                .angle = -16384, .linedef = 482,
                .direction = 0, .offset = 64
                },
     {
                .begin_vert = 27, .end_vert = 26,
                .angle = 16384, .linedef = 25,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 34, .end_vert = 33,
                .angle = -16384, .linedef = 30,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 26, .end_vert = 34,
                .angle = 0, .linedef = 31,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 33, .end_vert = 27,
                .angle = -32768, .linedef = 32,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 386, .end_vert = 385,
                .angle = 16384, .linedef = 471,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 385, .end_vert = 387,
                .angle = 0, .linedef = 472,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 388, .end_vert = 386,
                .angle = -32768, .linedef = 473,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 387, .end_vert = 388,
                .angle = -16384, .linedef = 476,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 28, .end_vert = 30,
                .angle = 16384, .linedef = 28,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 32, .end_vert = 31,
                .angle = -16384, .linedef = 29,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 31, .end_vert = 28,
                .angle = -32768, .linedef = 33,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 30, .end_vert = 32,
                .angle = 0, .linedef = 34,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 392, .end_vert = 187,
                .angle = 27931, .linedef = 211,
                .direction = 0, .offset = 71
                },
     {
                .begin_vert = 183, .end_vert = 185,
                .angle = 0, .linedef = 217,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 185, .end_vert = 213,
                .angle = -16384, .linedef = 255,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 187, .end_vert = 214,
                .angle = 21798, .linedef = 257,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 214, .end_vert = 183,
                .angle = 16384, .linedef = 258,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 183, .end_vert = 182,
                .angle = 16384, .linedef = 208,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 184, .end_vert = 185,
                .angle = -16384, .linedef = 210,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 182, .end_vert = 184,
                .angle = 0, .linedef = 216,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 185, .end_vert = 183,
                .angle = -32768, .linedef = 217,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 182, .end_vert = 181,
                .angle = 16384, .linedef = 207,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 178, .end_vert = 184,
                .angle = -16384, .linedef = 209,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 181, .end_vert = 178,
                .angle = 0, .linedef = 215,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 184, .end_vert = 182,
                .angle = -32768, .linedef = 216,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 177, .end_vert = 178,
                .angle = -16384, .linedef = 204,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 181, .end_vert = 179,
                .angle = 16384, .linedef = 206,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 179, .end_vert = 177,
                .angle = 0, .linedef = 214,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 178, .end_vert = 181,
                .angle = -32768, .linedef = 215,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 176, .end_vert = 177,
                .angle = -16384, .linedef = 203,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 179, .end_vert = 180,
                .angle = 16384, .linedef = 205,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 180, .end_vert = 176,
                .angle = 0, .linedef = 213,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 177, .end_vert = 179,
                .angle = -32768, .linedef = 214,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 210, .end_vert = 42,
                .angle = -32768, .linedef = 248,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 42, .end_vert = 388,
                .angle = 16384, .linedef = 474,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 41, .end_vert = 42,
                .angle = 30603, .linedef = 44,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 42, .end_vert = 210,
                .angle = 0, .linedef = 248,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 210, .end_vert = 129,
                .angle = -16384, .linedef = 249,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 43, .end_vert = 41,
                .angle = 28405, .linedef = 45,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 129, .end_vert = 43,
                .angle = 31701, .linedef = 158,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 393, .end_vert = 210,
                .angle = -32768, .linedef = 247,
                .direction = 0, .offset = 64
                },
     {
                .begin_vert = 175, .end_vert = 174,
                .angle = -32768, .linedef = 202,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 173, .end_vert = 175,
                .angle = -32768, .linedef = 212,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 210, .end_vert = 393,
                .angle = 0, .linedef = 247,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 394, .end_vert = 210,
                .angle = 16384, .linedef = 249,
                .direction = 1, .offset = 96
                },
     {
                .begin_vert = 174, .end_vert = 129,
                .angle = -19739, .linedef = 201,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 129, .end_vert = 394,
                .angle = 16384, .linedef = 249,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 175, .end_vert = 173,
                .angle = 0, .linedef = 212,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 176, .end_vert = 180,
                .angle = -32768, .linedef = 213,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 173, .end_vert = 363,
                .angle = -16384, .linedef = 440,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 363, .end_vert = 176,
                .angle = -16384, .linedef = 441,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 180, .end_vert = 364,
                .angle = 16384, .linedef = 442,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 364, .end_vert = 175,
                .angle = 16384, .linedef = 443,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 298, .end_vert = 299,
                .angle = -16384, .linedef = 361,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 309, .end_vert = 298,
                .angle = 0, .linedef = 373,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 299, .end_vert = 306,
                .angle = -32768, .linedef = 477,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 306, .end_vert = 309,
                .angle = 16384, .linedef = 484,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 306, .end_vert = 299,
                .angle = 0, .linedef = 477,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 130, .end_vert = 389,
                .angle = -32768, .linedef = 479,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 299, .end_vert = 391,
                .angle = -16384, .linedef = 482,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 389, .end_vert = 306,
                .angle = 16384, .linedef = 483,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 290, .end_vert = 395,
                .angle = 16384, .linedef = 367,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 396, .end_vert = 125,
                .angle = 16384, .linedef = 378,
                .direction = 0, .offset = 8
                },
     {
                .begin_vert = 125, .end_vert = 319,
                .angle = 16384, .linedef = 386,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 319, .end_vert = 290,
                .angle = 16384, .linedef = 387,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 340, .end_vert = 341,
                .angle = -32768, .linedef = 413,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 344, .end_vert = 345,
                .angle = 0, .linedef = 417,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 397, .end_vert = 304,
                .angle = 16384, .linedef = 367,
                .direction = 0, .offset = 136
                },
     {
                .begin_vert = 304, .end_vert = 398,
                .angle = 0, .linedef = 368,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 346, .end_vert = 347,
                .angle = -32768, .linedef = 419,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 395, .end_vert = 397,
                .angle = 16384, .linedef = 367,
                .direction = 0, .offset = 56
                },
     {
                .begin_vert = 347, .end_vert = 344,
                .angle = -16384, .linedef = 420,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 314, .end_vert = 315,
                .angle = 16384, .linedef = 380,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 345, .end_vert = 399,
                .angle = -32768, .linedef = 417,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 346, .end_vert = 345,
                .angle = -16384, .linedef = 418,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 400, .end_vert = 346,
                .angle = 0, .linedef = 419,
                .direction = 1, .offset = 200
                },
     {
                .begin_vert = 315, .end_vert = 316,
                .angle = -32768, .linedef = 381,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 347, .end_vert = 400,
                .angle = 0, .linedef = 419,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 401, .end_vert = 347,
                .angle = 16384, .linedef = 420,
                .direction = 1, .offset = 72
                },
     {
                .begin_vert = 316, .end_vert = 317,
                .angle = -16384, .linedef = 382,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 402, .end_vert = 344,
                .angle = -32768, .linedef = 417,
                .direction = 1, .offset = 200
                },
     {
                .begin_vert = 344, .end_vert = 401,
                .angle = 16384, .linedef = 420,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 317, .end_vert = 314,
                .angle = 0, .linedef = 383,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 399, .end_vert = 402,
                .angle = -32768, .linedef = 417,
                .direction = 1, .offset = 8
                },
     {
                .begin_vert = 315, .end_vert = 314,
                .angle = -16384, .linedef = 380,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 316, .end_vert = 315,
                .angle = 0, .linedef = 381,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 317, .end_vert = 316,
                .angle = 16384, .linedef = 382,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 314, .end_vert = 317,
                .angle = -32768, .linedef = 383,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 403, .end_vert = 309,
                .angle = -32768, .linedef = 373,
                .direction = 0, .offset = 392
                },
     {
                .begin_vert = 124, .end_vert = 396,
                .angle = 16384, .linedef = 378,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 294, .end_vert = 318,
                .angle = 16384, .linedef = 384,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 318, .end_vert = 124,
                .angle = 16384, .linedef = 385,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 341, .end_vert = 342,
                .angle = -16384, .linedef = 414,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 309, .end_vert = 294,
                .angle = 16384, .linedef = 485,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 404, .end_vert = 403,
                .angle = -32768, .linedef = 373,
                .direction = 0, .offset = 184
                },
     {
                .begin_vert = 342, .end_vert = 343,
                .angle = 0, .linedef = 415,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 336, .end_vert = 337,
                .angle = 16384, .linedef = 409,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 405, .end_vert = 340,
                .angle = 0, .linedef = 413,
                .direction = 1, .offset = 200
                },
     {
                .begin_vert = 343, .end_vert = 406,
                .angle = -32768, .linedef = 415,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 340, .end_vert = 343,
                .angle = -16384, .linedef = 416,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 337, .end_vert = 338,
                .angle = -32768, .linedef = 410,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 341, .end_vert = 405,
                .angle = 0, .linedef = 413,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 407, .end_vert = 341,
                .angle = 16384, .linedef = 414,
                .direction = 1, .offset = 72
                },
     {
                .begin_vert = 338, .end_vert = 339,
                .angle = -16384, .linedef = 411,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 342, .end_vert = 407,
                .angle = 16384, .linedef = 414,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 408, .end_vert = 342,
                .angle = -32768, .linedef = 415,
                .direction = 1, .offset = 200
                },
     {
                .begin_vert = 339, .end_vert = 336,
                .angle = 0, .linedef = 412,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 406, .end_vert = 408,
                .angle = -32768, .linedef = 415,
                .direction = 1, .offset = 8
                },
     {
                .begin_vert = 337, .end_vert = 336,
                .angle = -16384, .linedef = 409,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 338, .end_vert = 337,
                .angle = 0, .linedef = 410,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 339, .end_vert = 338,
                .angle = 16384, .linedef = 411,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 336, .end_vert = 339,
                .angle = -32768, .linedef = 412,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 326, .end_vert = 327,
                .angle = 0, .linedef = 396,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 334, .end_vert = 335,
                .angle = -32768, .linedef = 404,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 327, .end_vert = 334,
                .angle = -16384, .linedef = 406,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 409, .end_vert = 340,
                .angle = 16384, .linedef = 416,
                .direction = 0, .offset = 72
                },
     {
                .begin_vert = 345, .end_vert = 410,
                .angle = 16384, .linedef = 418,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 327, .end_vert = 328,
                .angle = 0, .linedef = 397,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 333, .end_vert = 334,
                .angle = -32768, .linedef = 403,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 334, .end_vert = 327,
                .angle = 16384, .linedef = 406,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 328, .end_vert = 333,
                .angle = -16384, .linedef = 407,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 298, .end_vert = 404,
                .angle = -32768, .linedef = 373,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 322, .end_vert = 411,
                .angle = 0, .linedef = 392,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 343, .end_vert = 412,
                .angle = 16384, .linedef = 416,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 335, .end_vert = 322,
                .angle = -16384, .linedef = 405,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 412, .end_vert = 409,
                .angle = 16384, .linedef = 416,
                .direction = 0, .offset = 40
                },
     {
                .begin_vert = 398, .end_vert = 413,
                .angle = 0, .linedef = 368,
                .direction = 0, .offset = 328
                },
     {
                .begin_vert = 414, .end_vert = 325,
                .angle = -32768, .linedef = 394,
                .direction = 0, .offset = 160
                },
     {
                .begin_vert = 415, .end_vert = 346,
                .angle = 16384, .linedef = 418,
                .direction = 0, .offset = 40
                },
     {
                .begin_vert = 325, .end_vert = 326,
                .angle = -16384, .linedef = 395,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 410, .end_vert = 415,
                .angle = 16384, .linedef = 418,
                .direction = 0, .offset = 8
                },
     {
                .begin_vert = 301, .end_vert = 416,
                .angle = 0, .linedef = 363,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 413, .end_vert = 304,
                .angle = -32768, .linedef = 368,
                .direction = 1, .offset = 320
                },
     {
                .begin_vert = 122, .end_vert = 123,
                .angle = 16384, .linedef = 149,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 124, .end_vert = 122,
                .angle = -32768, .linedef = 154,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 123, .end_vert = 125,
                .angle = 0, .linedef = 155,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 125, .end_vert = 124,
                .angle = -16384, .linedef = 378,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 290, .end_vert = 291,
                .angle = -32768, .linedef = 356,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 291, .end_vert = 292,
                .angle = 16384, .linedef = 357,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 300, .end_vert = 301,
                .angle = 0, .linedef = 362,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 292, .end_vert = 300,
                .angle = 16384, .linedef = 366,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 304, .end_vert = 290,
                .angle = -16384, .linedef = 367,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 293, .end_vert = 294,
                .angle = 0, .linedef = 358,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 306, .end_vert = 307,
                .angle = -32768, .linedef = 370,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 307, .end_vert = 308,
                .angle = 16384, .linedef = 371,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 308, .end_vert = 293,
                .angle = 16384, .linedef = 372,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 309, .end_vert = 306,
                .angle = -16384, .linedef = 484,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 294, .end_vert = 309,
                .angle = -16384, .linedef = 485,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 118, .end_vert = 117,
                .angle = -29130, .linedef = 144,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 417, .end_vert = 119,
                .angle = 4223, .linedef = 145,
                .direction = 0, .offset = 104
                },
     {
                .begin_vert = 119, .end_vert = 118,
                .angle = -16384, .linedef = 147,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 117, .end_vert = 29,
                .angle = -17823, .linedef = 143,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 118, .end_vert = 119,
                .angle = 16384, .linedef = 147,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 120, .end_vert = 121,
                .angle = -16384, .linedef = 148,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 121, .end_vert = 118,
                .angle = -32768, .linedef = 150,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 119, .end_vert = 120,
                .angle = 0, .linedef = 151,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 121, .end_vert = 120,
                .angle = 16384, .linedef = 148,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 123, .end_vert = 122,
                .angle = -16384, .linedef = 149,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 120, .end_vert = 123,
                .angle = 0, .linedef = 152,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 122, .end_vert = 121,
                .angle = -32768, .linedef = 153,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 16, .end_vert = 17,
                .angle = -32768, .linedef = 15,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 24, .end_vert = 25,
                .angle = 0, .linedef = 23,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 26, .end_vert = 27,
                .angle = -16384, .linedef = 25,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 28, .end_vert = 26,
                .angle = -16384, .linedef = 26,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 30, .end_vert = 28,
                .angle = -16384, .linedef = 28,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 20, .end_vert = 24,
                .angle = 0, .linedef = 47,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 17, .end_vert = 12,
                .angle = -32768, .linedef = 48,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 12, .end_vert = 20,
                .angle = 16384, .linedef = 49,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 12, .end_vert = 13,
                .angle = -32768, .linedef = 11,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 19, .end_vert = 20,
                .angle = 0, .linedef = 18,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 20, .end_vert = 12,
                .angle = -16384, .linedef = 49,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 13, .end_vert = 19,
                .angle = 16384, .linedef = 50,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 19, .end_vert = 13,
                .angle = -16384, .linedef = 50,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 44, .end_vert = 45,
                .angle = 16384, .linedef = 54,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 20, .end_vert = 21,
                .angle = 16384, .linedef = 19,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 23, .end_vert = 24,
                .angle = -16384, .linedef = 22,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 24, .end_vert = 20,
                .angle = -32768, .linedef = 47,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 21, .end_vert = 23,
                .angle = 0, .linedef = 51,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 23, .end_vert = 21,
                .angle = -32768, .linedef = 51,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 22, .end_vert = 23,
                .angle = -32768, .linedef = 21,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 25, .end_vert = 22,
                .angle = 16384, .linedef = 24,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 22, .end_vert = 30,
                .angle = -2555, .linedef = 39,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 18, .end_vert = 19,
                .angle = -16384, .linedef = 17,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 45, .end_vert = 36,
                .angle = 16384, .linedef = 53,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 21, .end_vert = 18,
                .angle = -32768, .linedef = 20,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 29, .end_vert = 30,
                .angle = -16384, .linedef = 27,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 30, .end_vert = 22,
                .angle = 30212, .linedef = 39,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 37, .end_vert = 38,
                .angle = 4587, .linedef = 41,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 38, .end_vert = 39,
                .angle = 0, .linedef = 42,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 39, .end_vert = 29,
                .angle = 0, .linedef = 146,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 36, .end_vert = 37,
                .angle = 0, .linedef = 40,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 39, .end_vert = 116,
                .angle = 15438, .linedef = 142,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 116, .end_vert = 417,
                .angle = 4223, .linedef = 145,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 29, .end_vert = 39,
                .angle = -32768, .linedef = 146,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 11, .end_vert = 12,
                .angle = 16384, .linedef = 10,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 17, .end_vert = 14,
                .angle = -16384, .linedef = 16,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 14, .end_vert = 11,
                .angle = -32768, .linedef = 37,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 12, .end_vert = 17,
                .angle = 0, .linedef = 48,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 11, .end_vert = 14,
                .angle = 0, .linedef = 37,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 7, .end_vert = 9,
                .angle = -32768, .linedef = 8,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 13, .end_vert = 10,
                .angle = -16384, .linedef = 12,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 9, .end_vert = 44,
                .angle = 16384, .linedef = 52,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 10, .end_vert = 11,
                .angle = 0, .linedef = 9,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 8, .end_vert = 6,
                .angle = -32768, .linedef = 7,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 14, .end_vert = 15,
                .angle = 0, .linedef = 13,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 386, .end_vert = 8,
                .angle = -16384, .linedef = 470,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 385, .end_vert = 386,
                .angle = -16384, .linedef = 471,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 15, .end_vert = 16,
                .angle = 16384, .linedef = 14,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 27, .end_vert = 15,
                .angle = -30212, .linedef = 38,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 15, .end_vert = 27,
                .angle = 2555, .linedef = 38,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 27, .end_vert = 385,
                .angle = -16384, .linedef = 469,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 4, .end_vert = 3,
                .angle = -32768, .linedef = 3,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 2, .end_vert = 5,
                .angle = -32768, .linedef = 4,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 6, .end_vert = 4,
                .angle = -26056, .linedef = 5,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 5, .end_vert = 7,
                .angle = 26056, .linedef = 6,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 3, .end_vert = 2,
                .angle = -32768, .linedef = 46,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 0, .end_vert = 1,
                .angle = -32768, .linedef = 0,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 1, .end_vert = 2,
                .angle = 16384, .linedef = 1,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 3, .end_vert = 0,
                .angle = -16384, .linedef = 2,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 2, .end_vert = 3,
                .angle = 0, .linedef = 46,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 45, .end_vert = 44,
                .angle = -16384, .linedef = 54,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 46, .end_vert = 47,
                .angle = 16384, .linedef = 55,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 48, .end_vert = 49,
                .angle = 16384, .linedef = 56,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 49, .end_vert = 50,
                .angle = 1963, .linedef = 57,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 50, .end_vert = 45,
                .angle = 0, .linedef = 58,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 44, .end_vert = 51,
                .angle = -32768, .linedef = 59,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 51, .end_vert = 46,
                .angle = 30804, .linedef = 60,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 53, .end_vert = 52,
                .angle = 16384, .linedef = 61,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 47, .end_vert = 53,
                .angle = -32768, .linedef = 62,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 52, .end_vert = 48,
                .angle = 0, .linedef = 63,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 52, .end_vert = 53,
                .angle = -16384, .linedef = 61,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 53, .end_vert = 54,
                .angle = -16384, .linedef = 64,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 59, .end_vert = 52,
                .angle = -16384, .linedef = 68,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 66, .end_vert = 67,
                .angle = 16384, .linedef = 76,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 64, .end_vert = 65,
                .angle = 0, .linedef = 74,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 65, .end_vert = 66,
                .angle = 0, .linedef = 75,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 114, .end_vert = 115,
                .angle = -32768, .linedef = 140,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 67, .end_vert = 68,
                .angle = -32768, .linedef = 77,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 68, .end_vert = 69,
                .angle = -32768, .linedef = 78,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 108, .end_vert = 109,
                .angle = 0, .linedef = 134,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 66, .end_vert = 65,
                .angle = -32768, .linedef = 75,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 67, .end_vert = 66,
                .angle = -16384, .linedef = 76,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 68, .end_vert = 67,
                .angle = 0, .linedef = 77,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 65, .end_vert = 68,
                .angle = 16384, .linedef = 87,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 65, .end_vert = 64,
                .angle = -32768, .linedef = 74,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 69, .end_vert = 68,
                .angle = 0, .linedef = 78,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 64, .end_vert = 69,
                .angle = 16384, .linedef = 86,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 68, .end_vert = 65,
                .angle = -16384, .linedef = 87,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 418, .end_vert = 55,
                .angle = -20126, .linedef = 65,
                .direction = 0, .offset = 68
                },
     {
                .begin_vert = 55, .end_vert = 419,
                .angle = -32768, .linedef = 66,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 112, .end_vert = 113,
                .angle = 0, .linedef = 138,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 54, .end_vert = 418,
                .angle = -20126, .linedef = 65,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 113, .end_vert = 114,
                .angle = 16384, .linedef = 139,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 113, .end_vert = 112,
                .angle = -32768, .linedef = 138,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 114, .end_vert = 113,
                .angle = -16384, .linedef = 139,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 115, .end_vert = 114,
                .angle = 0, .linedef = 140,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 112, .end_vert = 115,
                .angle = 16384, .linedef = 141,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 420, .end_vert = 58,
                .angle = 0, .linedef = 67,
                .direction = 0, .offset = 192
                },
     {
                .begin_vert = 58, .end_vert = 59,
                .angle = -12641, .linedef = 69,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 109, .end_vert = 110,
                .angle = 16384, .linedef = 135,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 421, .end_vert = 420,
                .angle = 0, .linedef = 67,
                .direction = 0, .offset = 128
                },
     {
                .begin_vert = 110, .end_vert = 111,
                .angle = -32768, .linedef = 136,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 109, .end_vert = 108,
                .angle = -32768, .linedef = 134,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 110, .end_vert = 109,
                .angle = -16384, .linedef = 135,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 111, .end_vert = 110,
                .angle = 0, .linedef = 136,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 108, .end_vert = 111,
                .angle = 16384, .linedef = 137,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 419, .end_vert = 422,
                .angle = -32768, .linedef = 66,
                .direction = 0, .offset = 192
                },
     {
                .begin_vert = 61, .end_vert = 62,
                .angle = 0, .linedef = 71,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 62, .end_vert = 63,
                .angle = 0, .linedef = 72,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 63, .end_vert = 64,
                .angle = 0, .linedef = 73,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 115, .end_vert = 112,
                .angle = -16384, .linedef = 141,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 423, .end_vert = 421,
                .angle = 0, .linedef = 67,
                .direction = 0, .offset = 32
                },
     {
                .begin_vert = 69, .end_vert = 70,
                .angle = -32768, .linedef = 79,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 70, .end_vert = 71,
                .angle = -32768, .linedef = 80,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 71, .end_vert = 72,
                .angle = -32768, .linedef = 81,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 111, .end_vert = 108,
                .angle = -16384, .linedef = 137,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 64, .end_vert = 63,
                .angle = -32768, .linedef = 73,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 70, .end_vert = 69,
                .angle = 0, .linedef = 79,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 63, .end_vert = 70,
                .angle = 16384, .linedef = 85,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 69, .end_vert = 64,
                .angle = -16384, .linedef = 86,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 63, .end_vert = 62,
                .angle = -32768, .linedef = 72,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 71, .end_vert = 70,
                .angle = 0, .linedef = 80,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 62, .end_vert = 71,
                .angle = 16384, .linedef = 84,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 70, .end_vert = 63,
                .angle = -16384, .linedef = 85,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 62, .end_vert = 61,
                .angle = -32768, .linedef = 71,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 72, .end_vert = 71,
                .angle = 0, .linedef = 81,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 61, .end_vert = 72,
                .angle = 16384, .linedef = 83,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 71, .end_vert = 62,
                .angle = -16384, .linedef = 84,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 99, .end_vert = 100,
                .angle = -32768, .linedef = 122,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 100, .end_vert = 101,
                .angle = 24576, .linedef = 123,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 101, .end_vert = 424,
                .angle = 16384, .linedef = 124,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 104, .end_vert = 99,
                .angle = -1875, .linedef = 127,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 103, .end_vert = 98,
                .angle = 0, .linedef = 126,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 98, .end_vert = 105,
                .angle = -30892, .linedef = 129,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 83, .end_vert = 85,
                .angle = 0, .linedef = 116,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 285, .end_vert = 286,
                .angle = 24576, .linedef = 351,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 84, .end_vert = 86,
                .angle = -32768, .linedef = 117,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 425, .end_vert = 426,
                .angle = 1874, .linedef = 129,
                .direction = 0, .offset = 390
                },
     {
                .begin_vert = 84, .end_vert = 85,
                .angle = -16384, .linedef = 99,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 83, .end_vert = 86,
                .angle = 16384, .linedef = 100,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 85, .end_vert = 83,
                .angle = -32768, .linedef = 116,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 86, .end_vert = 84,
                .angle = 0, .linedef = 117,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 282, .end_vert = 283,
                .angle = 0, .linedef = 348,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 283, .end_vert = 284,
                .angle = 8192, .linedef = 349,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 284, .end_vert = 285,
                .angle = 16384, .linedef = 350,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 286, .end_vert = 287,
                .angle = -32768, .linedef = 352,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 287, .end_vert = 288,
                .angle = -24576, .linedef = 353,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 289, .end_vert = 282,
                .angle = -8192, .linedef = 355,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 283, .end_vert = 282,
                .angle = -32768, .linedef = 348,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 284, .end_vert = 283,
                .angle = -24576, .linedef = 349,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 285, .end_vert = 284,
                .angle = -16384, .linedef = 350,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 286, .end_vert = 285,
                .angle = -8192, .linedef = 351,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 287, .end_vert = 286,
                .angle = 0, .linedef = 352,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 288, .end_vert = 287,
                .angle = 8192, .linedef = 353,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 289, .end_vert = 288,
                .angle = 16384, .linedef = 354,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 282, .end_vert = 289,
                .angle = 24576, .linedef = 355,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 81, .end_vert = 82,
                .angle = 16384, .linedef = 118,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 288, .end_vert = 289,
                .angle = -16384, .linedef = 354,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 91, .end_vert = 90,
                .angle = -16384, .linedef = 119,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 427, .end_vert = 428,
                .angle = 16384, .linedef = 128,
                .direction = 0, .offset = 224
                },
     {
                .begin_vert = 81, .end_vert = 90,
                .angle = -32768, .linedef = 103,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 91, .end_vert = 82,
                .angle = 0, .linedef = 104,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 82, .end_vert = 81,
                .angle = -16384, .linedef = 118,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 90, .end_vert = 91,
                .angle = 16384, .linedef = 119,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 82, .end_vert = 83,
                .angle = 4836, .linedef = 98,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 86, .end_vert = 92,
                .angle = -32768, .linedef = 105,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 429, .end_vert = 105,
                .angle = 16384, .linedef = 128,
                .direction = 0, .offset = 400
                },
     {
                .begin_vert = 105, .end_vert = 425,
                .angle = 1874, .linedef = 129,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 92, .end_vert = 91,
                .angle = -16384, .linedef = 106,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 428, .end_vert = 429,
                .angle = 16384, .linedef = 128,
                .direction = 0, .offset = 352
                },
     {
                .begin_vert = 87, .end_vert = 89,
                .angle = 0, .linedef = 115,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 430, .end_vert = 431,
                .angle = 30893, .linedef = 127,
                .direction = 0, .offset = 195
                },
     {
                .begin_vert = 88, .end_vert = 80,
                .angle = -32768, .linedef = 114,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 87, .end_vert = 80,
                .angle = 16384, .linedef = 101,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 88, .end_vert = 89,
                .angle = -16384, .linedef = 102,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 80, .end_vert = 88,
                .angle = 0, .linedef = 114,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 89, .end_vert = 87,
                .angle = -32768, .linedef = 115,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 80, .end_vert = 81,
                .angle = 27931, .linedef = 97,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 90, .end_vert = 93,
                .angle = -16384, .linedef = 107,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 432, .end_vert = 104,
                .angle = 30893, .linedef = 127,
                .direction = 0, .offset = 406
                },
     {
                .begin_vert = 104, .end_vert = 427,
                .angle = 16384, .linedef = 128,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 93, .end_vert = 87,
                .angle = 0, .linedef = 108,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 431, .end_vert = 432,
                .angle = 30893, .linedef = 127,
                .direction = 0, .offset = 325
                },
     {
                .begin_vert = 78, .end_vert = 77,
                .angle = -16384, .linedef = 113,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 75, .end_vert = 76,
                .angle = -32768, .linedef = 93,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 76, .end_vert = 77,
                .angle = 27353, .linedef = 94,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 78, .end_vert = 79,
                .angle = 5414, .linedef = 95,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 79, .end_vert = 74,
                .angle = 0, .linedef = 96,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 77, .end_vert = 78,
                .angle = 16384, .linedef = 113,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 96, .end_vert = 84,
                .angle = -32768, .linedef = 111,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 97, .end_vert = 96,
                .angle = -24079, .linedef = 112,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 98, .end_vert = 97,
                .angle = -16384, .linedef = 120,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 426, .end_vert = 98,
                .angle = 1880, .linedef = 129,
                .direction = 0, .offset = 520
                },
     {
                .begin_vert = 85, .end_vert = 106,
                .angle = 0, .linedef = 130,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 106, .end_vert = 78,
                .angle = 0, .linedef = 131,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 89, .end_vert = 94,
                .angle = 0, .linedef = 109,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 94, .end_vert = 95,
                .angle = -8688, .linedef = 110,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 95, .end_vert = 99,
                .angle = -16384, .linedef = 121,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 99, .end_vert = 430,
                .angle = 30887, .linedef = 127,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 77, .end_vert = 107,
                .angle = -32768, .linedef = 132,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 107, .end_vert = 88,
                .angle = -32768, .linedef = 133,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 424, .end_vert = 102,
                .angle = 16384, .linedef = 124,
                .direction = 0, .offset = 23
                },
     {
                .begin_vert = 102, .end_vert = 103,
                .angle = 8192, .linedef = 125,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 105, .end_vert = 104,
                .angle = -16384, .linedef = 128,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 422, .end_vert = 56,
                .angle = -32768, .linedef = 66,
                .direction = 0, .offset = 288
                },
     {
                .begin_vert = 60, .end_vert = 61,
                .angle = 0, .linedef = 70,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 57, .end_vert = 423,
                .angle = 0, .linedef = 67,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 72, .end_vert = 73,
                .angle = -32768, .linedef = 82,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 61, .end_vert = 60,
                .angle = -32768, .linedef = 70,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 73, .end_vert = 72,
                .angle = 0, .linedef = 82,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 72, .end_vert = 61,
                .angle = -16384, .linedef = 83,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 60, .end_vert = 73,
                .angle = 16384, .linedef = 88,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 73, .end_vert = 74,
                .angle = 21220, .linedef = 89,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 74, .end_vert = 57,
                .angle = 8192, .linedef = 90,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 56, .end_vert = 75,
                .angle = 24576, .linedef = 91,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 75, .end_vert = 60,
                .angle = 11547, .linedef = 92,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 73, .end_vert = 60,
                .angle = -16384, .linedef = 88,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 74, .end_vert = 73,
                .angle = -11547, .linedef = 89,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 60, .end_vert = 75,
                .angle = -21220, .linedef = 92,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 140, .end_vert = 144,
                .angle = 6133, .linedef = 188,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 147, .end_vert = 433,
                .angle = -27378, .linedef = 191,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 146, .end_vert = 215,
                .angle = 26941, .linedef = 260,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 215, .end_vert = 140,
                .angle = 16384, .linedef = 261,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 144, .end_vert = 216,
                .angle = 0, .linedef = 262,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 216, .end_vert = 147,
                .angle = -12479, .linedef = 263,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 149, .end_vert = 150,
                .angle = 16384, .linedef = 173,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 433, .end_vert = 149,
                .angle = -27385, .linedef = 191,
                .direction = 1, .offset = 101
                },
     {
                .begin_vert = 150, .end_vert = 145,
                .angle = 0, .linedef = 347,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 145, .end_vert = 146,
                .angle = 16384, .linedef = 171,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 143, .end_vert = 144,
                .angle = -4836, .linedef = 170,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 144, .end_vert = 140,
                .angle = -26634, .linedef = 188,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 151, .end_vert = 152,
                .angle = 16384, .linedef = 174,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 152, .end_vert = 157,
                .angle = -7738, .linedef = 189,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 157, .end_vert = 151,
                .angle = -30212, .linedef = 192,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 164, .end_vert = 151,
                .angle = 29412, .linedef = 185,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 151, .end_vert = 157,
                .angle = 2555, .linedef = 192,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 434, .end_vert = 164,
                .angle = 16384, .linedef = 187,
                .direction = 0, .offset = 106
                },
     {
                .begin_vert = 157, .end_vert = 163,
                .angle = -7497, .linedef = 190,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 167, .end_vert = 435,
                .angle = 9617, .linedef = 193,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 162, .end_vert = 167,
                .angle = 28799, .linedef = 194,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 168, .end_vert = 162,
                .angle = -27559, .linedef = 195,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 171, .end_vert = 168,
                .angle = -11094, .linedef = 198,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 356, .end_vert = 168,
                .angle = 16384, .linedef = 429,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 436, .end_vert = 356,
                .angle = 17863, .linedef = 428,
                .direction = 0, .offset = 47
                },
     {
                .begin_vert = 435, .end_vert = 159,
                .angle = 9605, .linedef = 193,
                .direction = 0, .offset = 228
                },
     {
                .begin_vert = 170, .end_vert = 171,
                .angle = -26634, .linedef = 197,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 171, .end_vert = 170,
                .angle = 6133, .linedef = 197,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 168, .end_vert = 171,
                .angle = 21673, .linedef = 198,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 437, .end_vert = 218,
                .angle = -19161, .linedef = 265,
                .direction = 0, .offset = 66
                },
     {
                .begin_vert = 218, .end_vert = 168,
                .angle = -27931, .linedef = 266,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 168, .end_vert = 218,
                .angle = 4836, .linedef = 266,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 218, .end_vert = 354,
                .angle = 0, .linedef = 426,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 354, .end_vert = 438,
                .angle = -9672, .linedef = 427,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 162, .end_vert = 163,
                .angle = -31045, .linedef = 184,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 163, .end_vert = 439,
                .angle = 25270, .linedef = 190,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 167, .end_vert = 162,
                .angle = -3968, .linedef = 194,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 161, .end_vert = 158,
                .angle = -24576, .linedef = 182,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 149, .end_vert = 161,
                .angle = -1113, .linedef = 259,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 440, .end_vert = 223,
                .angle = 16384, .linedef = 271,
                .direction = 0, .offset = 64
                },
     {
                .begin_vert = 223, .end_vert = 149,
                .angle = 16384, .linedef = 273,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 149, .end_vert = 441,
                .angle = 5384, .linedef = 191,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 161, .end_vert = 149,
                .angle = 31654, .linedef = 259,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 156, .end_vert = 157,
                .angle = -24333, .linedef = 179,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 158, .end_vert = 156,
                .angle = -4257, .linedef = 180,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 157, .end_vert = 152,
                .angle = 25029, .linedef = 189,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 152, .end_vert = 440,
                .angle = 16384, .linedef = 271,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 157, .end_vert = 156,
                .angle = 8434, .linedef = 179,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 439, .end_vert = 157,
                .angle = 25270, .linedef = 190,
                .direction = 1, .offset = 32
                },
     {
                .begin_vert = 442, .end_vert = 167,
                .angle = -23153, .linedef = 193,
                .direction = 1, .offset = 106
                },
     {
                .begin_vert = 159, .end_vert = 160,
                .angle = 28750, .linedef = 181,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 160, .end_vert = 155,
                .angle = 7300, .linedef = 183,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 443, .end_vert = 161,
                .angle = 8192, .linedef = 182,
                .direction = 1, .offset = 100
                },
     {
                .begin_vert = 155, .end_vert = 160,
                .angle = -25467, .linedef = 183,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 156, .end_vert = 158,
                .angle = 28510, .linedef = 180,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 160, .end_vert = 159,
                .angle = -4017, .linedef = 181,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 158, .end_vert = 443,
                .angle = 8192, .linedef = 182,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 159, .end_vert = 442,
                .angle = -23153, .linedef = 193,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 155, .end_vert = 154,
                .angle = 1963, .linedef = 178,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 169, .end_vert = 170,
                .angle = -32768, .linedef = 196,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 217, .end_vert = 169,
                .angle = -13758, .linedef = 264,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 154, .end_vert = 217,
                .angle = -8992, .linedef = 458,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 217, .end_vert = 154,
                .angle = 23775, .linedef = 458,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 170, .end_vert = 169,
                .angle = 0, .linedef = 196,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 169, .end_vert = 437,
                .angle = -19161, .linedef = 265,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 148, .end_vert = 154,
                .angle = -3742, .linedef = 177,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 154, .end_vert = 155,
                .angle = -30804, .linedef = 178,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 147, .end_vert = 148,
                .angle = -16384, .linedef = 172,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 441, .end_vert = 147,
                .angle = 5384, .linedef = 191,
                .direction = 0, .offset = 295
                },
     {
                .begin_vert = 154, .end_vert = 381,
                .angle = 0, .linedef = 461,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 381, .end_vert = 444,
                .angle = 13829, .linedef = 462,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 445, .end_vert = 371,
                .angle = 19286, .linedef = 448,
                .direction = 0, .offset = 217
                },
     {
                .begin_vert = 371, .end_vert = 372,
                .angle = 16384, .linedef = 449,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 372, .end_vert = 373,
                .angle = 9672, .linedef = 450,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 375, .end_vert = 446,
                .angle = -16384, .linedef = 452,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 376, .end_vert = 375,
                .angle = -24576, .linedef = 453,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 447, .end_vert = 376,
                .angle = -10875, .linedef = 455,
                .direction = 0, .offset = 305
                },
     {
                .begin_vert = 378, .end_vert = 448,
                .angle = -10875, .linedef = 455,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 377, .end_vert = 379,
                .angle = -32768, .linedef = 456,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 380, .end_vert = 378,
                .angle = 0, .linedef = 457,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 444, .end_vert = 380,
                .angle = 13827, .linedef = 462,
                .direction = 0, .offset = 104
                },
     {
                .begin_vert = 373, .end_vert = 377,
                .angle = 22433, .linedef = 454,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 448, .end_vert = 447,
                .angle = -10875, .linedef = 455,
                .direction = 0, .offset = 176
                },
     {
                .begin_vert = 379, .end_vert = 382,
                .angle = -19739, .linedef = 463,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 382, .end_vert = 217,
                .angle = -32768, .linedef = 464,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 449, .end_vert = 305,
                .angle = 0, .linedef = 368,
                .direction = 0, .offset = 672
                },
     {
                .begin_vert = 305, .end_vert = 297,
                .angle = -16384, .linedef = 369,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 297, .end_vert = 320,
                .angle = -16384, .linedef = 388,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 320, .end_vert = 313,
                .angle = -16384, .linedef = 389,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 450, .end_vert = 324,
                .angle = 16384, .linedef = 393,
                .direction = 0, .offset = 32
                },
     {
                .begin_vert = 413, .end_vert = 449,
                .angle = 0, .linedef = 368,
                .direction = 0, .offset = 512
                },
     {
                .begin_vert = 324, .end_vert = 414,
                .angle = -32768, .linedef = 394,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 328, .end_vert = 329,
                .angle = 0, .linedef = 398,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 332, .end_vert = 333,
                .angle = -32768, .linedef = 402,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 333, .end_vert = 328,
                .angle = 16384, .linedef = 407,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 329, .end_vert = 332,
                .angle = -16384, .linedef = 408,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 329, .end_vert = 330,
                .angle = 0, .linedef = 399,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 330, .end_vert = 331,
                .angle = -16384, .linedef = 400,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 331, .end_vert = 332,
                .angle = -32768, .linedef = 401,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 332, .end_vert = 329,
                .angle = 16384, .linedef = 408,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 310, .end_vert = 311,
                .angle = -16384, .linedef = 374,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 313, .end_vert = 310,
                .angle = -16384, .linedef = 379,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 311, .end_vert = 451,
                .angle = -32768, .linedef = 390,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 323, .end_vert = 450,
                .angle = 16384, .linedef = 393,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 451, .end_vert = 321,
                .angle = -32768, .linedef = 390,
                .direction = 0, .offset = 160
                },
     {
                .begin_vert = 321, .end_vert = 298,
                .angle = -32768, .linedef = 391,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 411, .end_vert = 323,
                .angle = 0, .linedef = 392,
                .direction = 0, .offset = 64
                },
     {
                .begin_vert = 416, .end_vert = 302,
                .angle = 0, .linedef = 363,
                .direction = 0, .offset = 512
                },
     {
                .begin_vert = 305, .end_vert = 413,
                .angle = -32768, .linedef = 368,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 140, .end_vert = 141,
                .angle = -32768, .linedef = 168,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 141, .end_vert = 143,
                .angle = 10969, .linedef = 421,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 142, .end_vert = 143,
                .angle = 0, .linedef = 169,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 141, .end_vert = 312,
                .angle = 24992, .linedef = 375,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 313, .end_vert = 142,
                .angle = 0, .linedef = 376,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 452, .end_vert = 313,
                .angle = 16384, .linedef = 379,
                .direction = 1, .offset = 22
                },
     {
                .begin_vert = 143, .end_vert = 141,
                .angle = -21798, .linedef = 421,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 312, .end_vert = 310,
                .angle = -32768, .linedef = 377,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 310, .end_vert = 452,
                .angle = 16384, .linedef = 379,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 295, .end_vert = 296,
                .angle = -16384, .linedef = 359,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 296, .end_vert = 297,
                .angle = -32768, .linedef = 360,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 302, .end_vert = 303,
                .angle = 0, .linedef = 364,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 303, .end_vert = 295,
                .angle = -16384, .linedef = 365,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 297, .end_vert = 305,
                .angle = 16384, .linedef = 369,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 219, .end_vert = 220,
                .angle = -12746, .linedef = 267,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 390, .end_vert = 219,
                .angle = 0, .linedef = 481,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 221, .end_vert = 222,
                .angle = 0, .linedef = 269,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 222, .end_vert = 153,
                .angle = -16384, .linedef = 272,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 220, .end_vert = 221,
                .angle = -6011, .linedef = 268,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 152, .end_vert = 153,
                .angle = -32768, .linedef = 176,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 222, .end_vert = 223,
                .angle = 0, .linedef = 270,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 223, .end_vert = 152,
                .angle = -16384, .linedef = 271,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 153, .end_vert = 222,
                .angle = 16384, .linedef = 272,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 153, .end_vert = 126,
                .angle = -16384, .linedef = 175,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 126, .end_vert = 209,
                .angle = -32768, .linedef = 246,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 126, .end_vert = 127,
                .angle = -28915, .linedef = 156,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 127, .end_vert = 128,
                .angle = -31429, .linedef = 157,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 209, .end_vert = 126,
                .angle = 0, .linedef = 246,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 128, .end_vert = 209,
                .angle = 16384, .linedef = 250,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 209, .end_vert = 393,
                .angle = -32768, .linedef = 247,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 128, .end_vert = 172,
                .angle = 19739, .linedef = 199,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 453, .end_vert = 209,
                .angle = 0, .linedef = 247,
                .direction = 1, .offset = 213
                },
     {
                .begin_vert = 209, .end_vert = 128,
                .angle = -16384, .linedef = 250,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 172, .end_vert = 173,
                .angle = -32768, .linedef = 200,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 393, .end_vert = 453,
                .angle = 0, .linedef = 247,
                .direction = 1, .offset = 192
                },
     {
                .begin_vert = 242, .end_vert = 229,
                .angle = 0, .linedef = 287,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 241, .end_vert = 245,
                .angle = -32768, .linedef = 292,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 245, .end_vert = 246,
                .angle = 16384, .linedef = 294,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 246, .end_vert = 247,
                .angle = 16384, .linedef = 295,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 247, .end_vert = 242,
                .angle = 16384, .linedef = 296,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 229, .end_vert = 232,
                .angle = 0, .linedef = 304,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 234, .end_vert = 241,
                .angle = -32768, .linedef = 305,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 228, .end_vert = 242,
                .angle = 0, .linedef = 286,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 245, .end_vert = 238,
                .angle = -32768, .linedef = 293,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 246, .end_vert = 245,
                .angle = -16384, .linedef = 294,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 247, .end_vert = 246,
                .angle = -16384, .linedef = 295,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 242, .end_vert = 247,
                .angle = -16384, .linedef = 296,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 238, .end_vert = 228,
                .angle = 16384, .linedef = 309,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 454, .end_vert = 455,
                .angle = 16384, .linedef = 307,
                .direction = 0, .offset = 192
                },
     {
                .begin_vert = 228, .end_vert = 238,
                .angle = -16384, .linedef = 309,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 239, .end_vert = 240,
                .angle = 0, .linedef = 284,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 456, .end_vert = 251,
                .angle = -32768, .linedef = 300,
                .direction = 0, .offset = 224
                },
     {
                .begin_vert = 252, .end_vert = 253,
                .angle = -32768, .linedef = 301,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 253, .end_vert = 457,
                .angle = 16384, .linedef = 307,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 251, .end_vert = 252,
                .angle = -32768, .linedef = 311,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 238, .end_vert = 239,
                .angle = -16384, .linedef = 283,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 457, .end_vert = 454,
                .angle = 16384, .linedef = 307,
                .direction = 0, .offset = 160
                },
     {
                .begin_vert = 234, .end_vert = 235,
                .angle = -16384, .linedef = 280,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 240, .end_vert = 241,
                .angle = 16384, .linedef = 285,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 241, .end_vert = 234,
                .angle = 0, .linedef = 305,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 236, .end_vert = 237,
                .angle = 16384, .linedef = 282,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 250, .end_vert = 458,
                .angle = -32768, .linedef = 300,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 459, .end_vert = 250,
                .angle = -16384, .linedef = 308,
                .direction = 0, .offset = 32
                },
     {
                .begin_vert = 237, .end_vert = 233,
                .angle = 16384, .linedef = 310,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 235, .end_vert = 236,
                .angle = 0, .linedef = 281,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 458, .end_vert = 456,
                .angle = -32768, .linedef = 300,
                .direction = 0, .offset = 168
                },
     {
                .begin_vert = 243, .end_vert = 234,
                .angle = -32768, .linedef = 289,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 232, .end_vert = 244,
                .angle = 0, .linedef = 290,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 248, .end_vert = 243,
                .angle = -16384, .linedef = 297,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 244, .end_vert = 249,
                .angle = -16384, .linedef = 298,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 249, .end_vert = 248,
                .angle = -16384, .linedef = 299,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 237, .end_vert = 243,
                .angle = -32768, .linedef = 288,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 244, .end_vert = 233,
                .angle = 0, .linedef = 291,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 243, .end_vert = 248,
                .angle = 16384, .linedef = 297,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 249, .end_vert = 244,
                .angle = 16384, .linedef = 298,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 248, .end_vert = 249,
                .angle = 16384, .linedef = 299,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 233, .end_vert = 237,
                .angle = -16384, .linedef = 310,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 460, .end_vert = 254,
                .angle = -16384, .linedef = 302,
                .direction = 0, .offset = 56
                },
     {
                .begin_vert = 255, .end_vert = 461,
                .angle = 16384, .linedef = 303,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 254, .end_vert = 256,
                .angle = -32768, .linedef = 312,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 257, .end_vert = 255,
                .angle = -32768, .linedef = 313,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 276, .end_vert = 277,
                .angle = 0, .linedef = 339,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 256, .end_vert = 257,
                .angle = -32768, .linedef = 342,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 251, .end_vert = 460,
                .angle = -16384, .linedef = 302,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 462, .end_vert = 251,
                .angle = 0, .linedef = 311,
                .direction = 0, .offset = 80
                },
     {
                .begin_vert = 277, .end_vert = 274,
                .angle = 16384, .linedef = 340,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 463, .end_vert = 252,
                .angle = 16384, .linedef = 303,
                .direction = 0, .offset = 16
                },
     {
                .begin_vert = 252, .end_vert = 462,
                .angle = 0, .linedef = 311,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 274, .end_vert = 275,
                .angle = -32768, .linedef = 338,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 461, .end_vert = 463,
                .angle = 16384, .linedef = 303,
                .direction = 0, .offset = 8
                },
     {
                .begin_vert = 275, .end_vert = 276,
                .angle = -16384, .linedef = 341,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 275, .end_vert = 274,
                .angle = 0, .linedef = 338,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 277, .end_vert = 276,
                .angle = -32768, .linedef = 339,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 274, .end_vert = 277,
                .angle = -16384, .linedef = 340,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 276, .end_vert = 275,
                .angle = 16384, .linedef = 341,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 258, .end_vert = 257,
                .angle = 16384, .linedef = 314,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 256, .end_vert = 259,
                .angle = -16384, .linedef = 315,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 259, .end_vert = 258,
                .angle = -32768, .linedef = 321,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 257, .end_vert = 256,
                .angle = 0, .linedef = 342,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 259, .end_vert = 260,
                .angle = -16384, .linedef = 316,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 263, .end_vert = 258,
                .angle = 16384, .linedef = 319,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 260, .end_vert = 263,
                .angle = -32768, .linedef = 320,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 258, .end_vert = 259,
                .angle = 0, .linedef = 321,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 261, .end_vert = 264,
                .angle = 0, .linedef = 322,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 265, .end_vert = 262,
                .angle = 0, .linedef = 323,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 264, .end_vert = 464,
                .angle = -16384, .linedef = 324,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 465, .end_vert = 268,
                .angle = 16384, .linedef = 325,
                .direction = 0, .offset = 24
                },
     {
                .begin_vert = 268, .end_vert = 269,
                .angle = 16384, .linedef = 326,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 269, .end_vert = 265,
                .angle = 16384, .linedef = 327,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 262, .end_vert = 261,
                .angle = 0, .linedef = 329,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 278, .end_vert = 279,
                .angle = -32768, .linedef = 343,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 464, .end_vert = 266,
                .angle = -16384, .linedef = 324,
                .direction = 0, .offset = 168
                },
     {
                .begin_vert = 266, .end_vert = 466,
                .angle = -32768, .linedef = 328,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 281, .end_vert = 278,
                .angle = 16384, .linedef = 345,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 267, .end_vert = 467,
                .angle = 16384, .linedef = 325,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 466, .end_vert = 267,
                .angle = -32768, .linedef = 328,
                .direction = 0, .offset = 80
                },
     {
                .begin_vert = 280, .end_vert = 281,
                .angle = 0, .linedef = 344,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 467, .end_vert = 465,
                .angle = 16384, .linedef = 325,
                .direction = 0, .offset = 16
                },
     {
                .begin_vert = 279, .end_vert = 280,
                .angle = -16384, .linedef = 346,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 279, .end_vert = 278,
                .angle = 0, .linedef = 343,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 281, .end_vert = 280,
                .angle = -32768, .linedef = 344,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 278, .end_vert = 281,
                .angle = -16384, .linedef = 345,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 280, .end_vert = 279,
                .angle = 16384, .linedef = 346,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 260, .end_vert = 261,
                .angle = -16384, .linedef = 317,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 262, .end_vert = 263,
                .angle = 16384, .linedef = 318,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 263, .end_vert = 260,
                .angle = 0, .linedef = 320,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 261, .end_vert = 262,
                .angle = -32768, .linedef = 329,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 199, .end_vert = 200,
                .angle = -16384, .linedef = 224,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 202, .end_vert = 201,
                .angle = 18939, .linedef = 225,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 201, .end_vert = 199,
                .angle = 0, .linedef = 229,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 200, .end_vert = 202,
                .angle = -32768, .linedef = 238,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 197, .end_vert = 198,
                .angle = -16384, .linedef = 223,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 200, .end_vert = 199,
                .angle = 16384, .linedef = 224,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 199, .end_vert = 197,
                .angle = 0, .linedef = 230,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 198, .end_vert = 200,
                .angle = -32768, .linedef = 237,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 195, .end_vert = 196,
                .angle = -16384, .linedef = 222,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 198, .end_vert = 197,
                .angle = 16384, .linedef = 223,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 197, .end_vert = 195,
                .angle = 0, .linedef = 231,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 196, .end_vert = 198,
                .angle = -32768, .linedef = 236,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 468, .end_vert = 227,
                .angle = 0, .linedef = 275,
                .direction = 0, .offset = 88
                },
     {
                .begin_vert = 193, .end_vert = 194,
                .angle = -16384, .linedef = 221,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 196, .end_vert = 195,
                .angle = 16384, .linedef = 222,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 195, .end_vert = 193,
                .angle = 0, .linedef = 232,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 194, .end_vert = 196,
                .angle = -32768, .linedef = 235,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 191, .end_vert = 192,
                .angle = -16384, .linedef = 220,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 194, .end_vert = 193,
                .angle = 16384, .linedef = 221,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 193, .end_vert = 191,
                .angle = 0, .linedef = 233,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 192, .end_vert = 194,
                .angle = -32768, .linedef = 234,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 227, .end_vert = 228,
                .angle = -7037, .linedef = 276,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 192, .end_vert = 191,
                .angle = 16384, .linedef = 220,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 191, .end_vert = 205,
                .angle = 0, .linedef = 239,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 206, .end_vert = 192,
                .angle = -32768, .linedef = 240,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 205, .end_vert = 206,
                .angle = -16384, .linedef = 244,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 186, .end_vert = 188,
                .angle = 16384, .linedef = 218,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 189, .end_vert = 190,
                .angle = -16384, .linedef = 219,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 190, .end_vert = 359,
                .angle = -32768, .linedef = 434,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 359, .end_vert = 360,
                .angle = -32768, .linedef = 435,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 360, .end_vert = 186,
                .angle = -32768, .linedef = 436,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 188, .end_vert = 361,
                .angle = 0, .linedef = 437,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 361, .end_vert = 362,
                .angle = 0, .linedef = 438,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 362, .end_vert = 189,
                .angle = 0, .linedef = 439,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 186, .end_vert = 392,
                .angle = 27931, .linedef = 211,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 188, .end_vert = 186,
                .angle = -16384, .linedef = 218,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 213, .end_vert = 188,
                .angle = -6711, .linedef = 256,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 226, .end_vert = 468,
                .angle = 0, .linedef = 275,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 455, .end_vert = 226,
                .angle = 16384, .linedef = 307,
                .direction = 0, .offset = 384
                },
     {
                .begin_vert = 203, .end_vert = 204,
                .angle = -12082, .linedef = 226,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 204, .end_vert = 211,
                .angle = -32768, .linedef = 251,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 469, .end_vert = 212,
                .angle = 6437, .linedef = 253,
                .direction = 0, .offset = 83
                },
     {
                .begin_vert = 212, .end_vert = 203,
                .angle = 0, .linedef = 254,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 190, .end_vert = 189,
                .angle = 16384, .linedef = 219,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 211, .end_vert = 190,
                .angle = -27294, .linedef = 252,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 189, .end_vert = 469,
                .angle = 6437, .linedef = 253,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 201, .end_vert = 202,
                .angle = -13828, .linedef = 225,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 204, .end_vert = 203,
                .angle = 20685, .linedef = 226,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 203, .end_vert = 201,
                .angle = 2902, .linedef = 227,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 202, .end_vert = 204,
                .angle = -27931, .linedef = 228,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 163, .end_vert = 165,
                .angle = -16384, .linedef = 186,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 166, .end_vert = 434,
                .angle = 16384, .linedef = 187,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 207, .end_vert = 166,
                .angle = 16384, .linedef = 243,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 208, .end_vert = 207,
                .angle = 16384, .linedef = 245,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 165, .end_vert = 208,
                .angle = -32768, .linedef = 306,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 208, .end_vert = 165,
                .angle = 0, .linedef = 306,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 270, .end_vert = 208,
                .angle = 16384, .linedef = 330,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 165, .end_vert = 271,
                .angle = -16384, .linedef = 331,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 271, .end_vert = 270,
                .angle = -32768, .linedef = 336,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 207, .end_vert = 206,
                .angle = -32768, .linedef = 241,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 205, .end_vert = 166,
                .angle = 0, .linedef = 242,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 166, .end_vert = 207,
                .angle = -16384, .linedef = 243,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 206, .end_vert = 205,
                .angle = 16384, .linedef = 244,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 229, .end_vert = 230,
                .angle = 16384, .linedef = 277,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 231, .end_vert = 232,
                .angle = -16384, .linedef = 278,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 232, .end_vert = 229,
                .angle = -32768, .linedef = 304,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 230, .end_vert = 272,
                .angle = 13028, .linedef = 332,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 273, .end_vert = 231,
                .angle = -13028, .linedef = 335,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 272, .end_vert = 273,
                .angle = 0, .linedef = 337,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 272, .end_vert = 270,
                .angle = 16384, .linedef = 333,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 271, .end_vert = 273,
                .angle = -16384, .linedef = 334,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 270, .end_vert = 271,
                .angle = 0, .linedef = 336,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 273, .end_vert = 272,
                .angle = -32768, .linedef = 337,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 224, .end_vert = 225,
                .angle = 0, .linedef = 274,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 233, .end_vert = 224,
                .angle = 7037, .linedef = 279,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 225, .end_vert = 459,
                .angle = -16384, .linedef = 308,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 350, .end_vert = 351,
                .angle = 16384, .linedef = 423,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 352, .end_vert = 349,
                .angle = -16384, .linedef = 425,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 349, .end_vert = 357,
                .angle = -32768, .linedef = 430,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 357, .end_vert = 350,
                .angle = -32768, .linedef = 431,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 351, .end_vert = 358,
                .angle = 0, .linedef = 432,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 358, .end_vert = 352,
                .angle = 0, .linedef = 433,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 348, .end_vert = 349,
                .angle = -29412, .linedef = 422,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 352, .end_vert = 353,
                .angle = 13028, .linedef = 424,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 349, .end_vert = 352,
                .angle = 16384, .linedef = 425,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 438, .end_vert = 355,
                .angle = -9672, .linedef = 427,
                .direction = 0, .offset = 68
                },
     {
                .begin_vert = 355, .end_vert = 365,
                .angle = -16384, .linedef = 444,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 365, .end_vert = 348,
                .angle = -16384, .linedef = 459,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 353, .end_vert = 436,
                .angle = 17864, .linedef = 428,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 348, .end_vert = 365,
                .angle = 16384, .linedef = 459,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 369, .end_vert = 367,
                .angle = -16384, .linedef = 460,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 365, .end_vert = 383,
                .angle = 0, .linedef = 465,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 383, .end_vert = 369,
                .angle = 0, .linedef = 466,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 367, .end_vert = 384,
                .angle = -32768, .linedef = 467,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 384, .end_vert = 348,
                .angle = -32768, .linedef = 468,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 366, .end_vert = 367,
                .angle = -32768, .linedef = 445,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 367, .end_vert = 369,
                .angle = 16384, .linedef = 460,
                .direction = 1, .offset = 0
                },
     {
                .begin_vert = 369, .end_vert = 370,
                .angle = 11547, .linedef = 447,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 370, .end_vert = 445,
                .angle = 19286, .linedef = 448,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 446, .end_vert = 374,
                .angle = -16384, .linedef = 452,
                .direction = 0, .offset = 154
                },
     {
                .begin_vert = 368, .end_vert = 366,
                .angle = -22517, .linedef = 446,
                .direction = 0, .offset = 0
                },
     {
                .begin_vert = 374, .end_vert = 368,
                .angle = -13828, .linedef = 451,
                .direction = 0, .offset = 0
                },
 };

const ssector ssectors[239] = {
    {.num_segs = 8, .first_seg = 0},
     {.num_segs = 1, .first_seg = 8},
     {.num_segs = 1, .first_seg = 9},
     {.num_segs = 1, .first_seg = 10},
     {.num_segs = 1, .first_seg = 11},
     {.num_segs = 1, .first_seg = 12},
     {.num_segs = 1, .first_seg = 13},
     {.num_segs = 6, .first_seg = 14},
     {.num_segs = 6, .first_seg = 20},
     {.num_segs = 1, .first_seg = 26},
     {.num_segs = 3, .first_seg = 27},
     {.num_segs = 4, .first_seg = 30},
     {.num_segs = 4, .first_seg = 34},
     {.num_segs = 4, .first_seg = 38},
     {.num_segs = 5, .first_seg = 42},
     {.num_segs = 4, .first_seg = 47},
     {.num_segs = 4, .first_seg = 51},
     {.num_segs = 4, .first_seg = 55},
     {.num_segs = 4, .first_seg = 59},
     {.num_segs = 2, .first_seg = 63},
     {.num_segs = 3, .first_seg = 65},
     {.num_segs = 2, .first_seg = 68},
     {.num_segs = 1, .first_seg = 70},
     {.num_segs = 4, .first_seg = 71},
     {.num_segs = 2, .first_seg = 75},
     {.num_segs = 6, .first_seg = 77},
     {.num_segs = 4, .first_seg = 83},
     {.num_segs = 4, .first_seg = 87},
     {.num_segs = 6, .first_seg = 91},
     {.num_segs = 3, .first_seg = 97},
     {.num_segs = 2, .first_seg = 100},
     {.num_segs = 4, .first_seg = 102},
     {.num_segs = 3, .first_seg = 106},
     {.num_segs = 3, .first_seg = 109},
     {.num_segs = 2, .first_seg = 112},
     {.num_segs = 4, .first_seg = 114},
     {.num_segs = 6, .first_seg = 118},
     {.num_segs = 2, .first_seg = 124},
     {.num_segs = 4, .first_seg = 126},
     {.num_segs = 3, .first_seg = 130},
     {.num_segs = 3, .first_seg = 133},
     {.num_segs = 2, .first_seg = 136},
     {.num_segs = 4, .first_seg = 138},
     {.num_segs = 5, .first_seg = 142},
     {.num_segs = 4, .first_seg = 147},
     {.num_segs = 3, .first_seg = 151},
     {.num_segs = 2, .first_seg = 154},
     {.num_segs = 3, .first_seg = 156},
     {.num_segs = 2, .first_seg = 159},
     {.num_segs = 2, .first_seg = 161},
     {.num_segs = 4, .first_seg = 163},
     {.num_segs = 5, .first_seg = 167},
     {.num_segs = 6, .first_seg = 172},
     {.num_segs = 3, .first_seg = 178},
     {.num_segs = 1, .first_seg = 181},
     {.num_segs = 4, .first_seg = 182},
     {.num_segs = 4, .first_seg = 186},
     {.num_segs = 8, .first_seg = 190},
     {.num_segs = 4, .first_seg = 198},
     {.num_segs = 2, .first_seg = 202},
     {.num_segs = 4, .first_seg = 204},
     {.num_segs = 1, .first_seg = 208},
     {.num_segs = 1, .first_seg = 209},
     {.num_segs = 2, .first_seg = 210},
     {.num_segs = 2, .first_seg = 212},
     {.num_segs = 1, .first_seg = 214},
     {.num_segs = 5, .first_seg = 215},
     {.num_segs = 1, .first_seg = 220},
     {.num_segs = 3, .first_seg = 221},
     {.num_segs = 4, .first_seg = 224},
     {.num_segs = 1, .first_seg = 228},
     {.num_segs = 3, .first_seg = 229},
     {.num_segs = 1, .first_seg = 232},
     {.num_segs = 4, .first_seg = 233},
     {.num_segs = 2, .first_seg = 237},
     {.num_segs = 2, .first_seg = 239},
     {.num_segs = 5, .first_seg = 241},
     {.num_segs = 4, .first_seg = 246},
     {.num_segs = 7, .first_seg = 250},
     {.num_segs = 3, .first_seg = 257},
     {.num_segs = 4, .first_seg = 260},
     {.num_segs = 3, .first_seg = 264},
     {.num_segs = 3, .first_seg = 267},
     {.num_segs = 4, .first_seg = 270},
     {.num_segs = 4, .first_seg = 274},
     {.num_segs = 3, .first_seg = 278},
     {.num_segs = 2, .first_seg = 281},
     {.num_segs = 4, .first_seg = 283},
     {.num_segs = 3, .first_seg = 287},
     {.num_segs = 2, .first_seg = 290},
     {.num_segs = 4, .first_seg = 292},
     {.num_segs = 5, .first_seg = 296},
     {.num_segs = 5, .first_seg = 301},
     {.num_segs = 4, .first_seg = 306},
     {.num_segs = 4, .first_seg = 310},
     {.num_segs = 4, .first_seg = 314},
     {.num_segs = 4, .first_seg = 318},
     {.num_segs = 2, .first_seg = 322},
     {.num_segs = 2, .first_seg = 324},
     {.num_segs = 2, .first_seg = 326},
     {.num_segs = 4, .first_seg = 328},
     {.num_segs = 1, .first_seg = 332},
     {.num_segs = 1, .first_seg = 333},
     {.num_segs = 1, .first_seg = 334},
     {.num_segs = 1, .first_seg = 335},
     {.num_segs = 1, .first_seg = 336},
     {.num_segs = 1, .first_seg = 337},
     {.num_segs = 8, .first_seg = 338},
     {.num_segs = 2, .first_seg = 346},
     {.num_segs = 2, .first_seg = 348},
     {.num_segs = 4, .first_seg = 350},
     {.num_segs = 1, .first_seg = 354},
     {.num_segs = 3, .first_seg = 355},
     {.num_segs = 2, .first_seg = 358},
     {.num_segs = 2, .first_seg = 360},
     {.num_segs = 1, .first_seg = 362},
     {.num_segs = 4, .first_seg = 363},
     {.num_segs = 1, .first_seg = 367},
     {.num_segs = 3, .first_seg = 368},
     {.num_segs = 2, .first_seg = 371},
     {.num_segs = 1, .first_seg = 373},
     {.num_segs = 5, .first_seg = 374},
     {.num_segs = 4, .first_seg = 379},
     {.num_segs = 2, .first_seg = 383},
     {.num_segs = 4, .first_seg = 385},
     {.num_segs = 2, .first_seg = 389},
     {.num_segs = 3, .first_seg = 391},
     {.num_segs = 2, .first_seg = 394},
     {.num_segs = 2, .first_seg = 396},
     {.num_segs = 4, .first_seg = 398},
     {.num_segs = 2, .first_seg = 402},
     {.num_segs = 2, .first_seg = 404},
     {.num_segs = 3, .first_seg = 406},
     {.num_segs = 6, .first_seg = 409},
     {.num_segs = 3, .first_seg = 415},
     {.num_segs = 1, .first_seg = 418},
     {.num_segs = 2, .first_seg = 419},
     {.num_segs = 3, .first_seg = 421},
     {.num_segs = 2, .first_seg = 424},
     {.num_segs = 1, .first_seg = 426},
     {.num_segs = 1, .first_seg = 427},
     {.num_segs = 4, .first_seg = 428},
     {.num_segs = 1, .first_seg = 432},
     {.num_segs = 1, .first_seg = 433},
     {.num_segs = 2, .first_seg = 434},
     {.num_segs = 4, .first_seg = 436},
     {.num_segs = 1, .first_seg = 440},
     {.num_segs = 2, .first_seg = 441},
     {.num_segs = 3, .first_seg = 443},
     {.num_segs = 4, .first_seg = 446},
     {.num_segs = 2, .first_seg = 450},
     {.num_segs = 4, .first_seg = 452},
     {.num_segs = 3, .first_seg = 456},
     {.num_segs = 2, .first_seg = 459},
     {.num_segs = 2, .first_seg = 461},
     {.num_segs = 4, .first_seg = 463},
     {.num_segs = 4, .first_seg = 467},
     {.num_segs = 1, .first_seg = 471},
     {.num_segs = 2, .first_seg = 472},
     {.num_segs = 2, .first_seg = 474},
     {.num_segs = 2, .first_seg = 476},
     {.num_segs = 1, .first_seg = 478},
     {.num_segs = 1, .first_seg = 479},
     {.num_segs = 4, .first_seg = 480},
     {.num_segs = 2, .first_seg = 484},
     {.num_segs = 4, .first_seg = 486},
     {.num_segs = 2, .first_seg = 490},
     {.num_segs = 2, .first_seg = 492},
     {.num_segs = 5, .first_seg = 494},
     {.num_segs = 2, .first_seg = 499},
     {.num_segs = 4, .first_seg = 501},
     {.num_segs = 4, .first_seg = 505},
     {.num_segs = 4, .first_seg = 509},
     {.num_segs = 3, .first_seg = 513},
     {.num_segs = 2, .first_seg = 516},
     {.num_segs = 2, .first_seg = 518},
     {.num_segs = 5, .first_seg = 520},
     {.num_segs = 2, .first_seg = 525},
     {.num_segs = 5, .first_seg = 527},
     {.num_segs = 2, .first_seg = 532},
     {.num_segs = 2, .first_seg = 534},
     {.num_segs = 1, .first_seg = 536},
     {.num_segs = 4, .first_seg = 537},
     {.num_segs = 2, .first_seg = 541},
     {.num_segs = 4, .first_seg = 543},
     {.num_segs = 1, .first_seg = 547},
     {.num_segs = 3, .first_seg = 548},
     {.num_segs = 2, .first_seg = 551},
     {.num_segs = 7, .first_seg = 553},
     {.num_segs = 6, .first_seg = 560},
     {.num_segs = 2, .first_seg = 566},
     {.num_segs = 5, .first_seg = 568},
     {.num_segs = 2, .first_seg = 573},
     {.num_segs = 3, .first_seg = 575},
     {.num_segs = 4, .first_seg = 578},
     {.num_segs = 2, .first_seg = 582},
     {.num_segs = 5, .first_seg = 584},
     {.num_segs = 6, .first_seg = 589},
     {.num_segs = 6, .first_seg = 595},
     {.num_segs = 3, .first_seg = 601},
     {.num_segs = 3, .first_seg = 604},
     {.num_segs = 2, .first_seg = 607},
     {.num_segs = 4, .first_seg = 609},
     {.num_segs = 4, .first_seg = 613},
     {.num_segs = 4, .first_seg = 617},
     {.num_segs = 8, .first_seg = 621},
     {.num_segs = 3, .first_seg = 629},
     {.num_segs = 3, .first_seg = 632},
     {.num_segs = 2, .first_seg = 635},
     {.num_segs = 4, .first_seg = 637},
     {.num_segs = 4, .first_seg = 641},
     {.num_segs = 4, .first_seg = 645},
     {.num_segs = 4, .first_seg = 649},
     {.num_segs = 4, .first_seg = 653},
     {.num_segs = 1, .first_seg = 657},
     {.num_segs = 4, .first_seg = 658},
     {.num_segs = 4, .first_seg = 662},
     {.num_segs = 1, .first_seg = 666},
     {.num_segs = 4, .first_seg = 667},
     {.num_segs = 8, .first_seg = 671},
     {.num_segs = 3, .first_seg = 679},
     {.num_segs = 2, .first_seg = 682},
     {.num_segs = 4, .first_seg = 684},
     {.num_segs = 3, .first_seg = 688},
     {.num_segs = 4, .first_seg = 691},
     {.num_segs = 5, .first_seg = 695},
     {.num_segs = 4, .first_seg = 700},
     {.num_segs = 4, .first_seg = 704},
     {.num_segs = 6, .first_seg = 708},
     {.num_segs = 4, .first_seg = 714},
     {.num_segs = 3, .first_seg = 718},
     {.num_segs = 6, .first_seg = 721},
     {.num_segs = 6, .first_seg = 727},
     {.num_segs = 1, .first_seg = 733},
     {.num_segs = 6, .first_seg = 734},
     {.num_segs = 2, .first_seg = 740},
     {.num_segs = 1, .first_seg = 742},
     {.num_segs = 2, .first_seg = 743},
     {.num_segs = 2, .first_seg = 745},
 };

const node nodes[238] = {
    {
            .split_x = 1784, .split_y = -3448,
            .split_dx = -240, .split_dy = 64,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3384, .left_box_bottom = -3448,
            .left_box_left = 1544, .left_box_right = 1784,
            .right_child = 32768, .left_child = 32769
            },
     {
            .split_x = 2064, .split_y = -3408,
            .split_dx = -280, .split_dy = -40,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3408, .left_box_bottom = -3448,
            .left_box_left = 1784, .left_box_right = 2064,
            .right_child = 0, .left_child = 32770
            },
     {
            .split_x = 2128, .split_y = -3272,
            .split_dx = -64, .split_dy = -136,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3272, .left_box_bottom = -3408,
            .left_box_left = 2064, .left_box_right = 2128,
            .right_child = 1, .left_child = 32771
            },
     {
            .split_x = 2040, .split_y = -3144,
            .split_dx = 88, .split_dy = -128,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3144, .left_box_bottom = -3272,
            .left_box_left = 2040, .left_box_right = 2128,
            .right_child = 2, .left_child = 32772
            },
     {
            .split_x = 1896, .split_y = -3104,
            .split_dx = 144, .split_dy = -40,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3104, .left_box_bottom = -3144,
            .left_box_left = 1896, .left_box_right = 2040,
            .right_child = 3, .left_child = 32773
            },
     {
            .split_x = 1520, .split_y = -3168,
            .split_dx = 152, .split_dy = 64,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3104, .left_box_bottom = -3168,
            .left_box_left = 1520, .left_box_right = 1672,
            .right_child = 4, .left_child = 32774
            },
     {
            .split_x = 1544, .split_y = -3384,
            .split_dx = -24, .split_dy = 216,
            .right_box_top = -3104, .right_box_bottom = -3448,
            .right_box_left = 1520, .right_box_right = 2128,
            .left_box_top = -3104, .left_box_bottom = -3520,
            .left_box_left = 1376, .left_box_right = 1544,
            .right_child = 5, .left_child = 32775
            },
     {
            .split_x = 1920, .split_y = -2920,
            .split_dx = 256, .split_dy = 0,
            .right_box_top = -2920, .right_box_bottom = -2920,
            .right_box_left = 1920, .right_box_right = 2176,
            .left_box_top = -2880, .left_box_bottom = -2920,
            .left_box_left = 1856, .left_box_right = 2176,
            .right_child = 32777, .left_child = 32778
            },
     {
            .split_x = 1856, .split_y = -2880,
            .split_dx = 64, .split_dy = -40,
            .right_box_top = -2880, .right_box_bottom = -3104,
            .right_box_left = 1376, .right_box_right = 1920,
            .left_box_top = -2880, .left_box_bottom = -2920,
            .left_box_left = 1856, .left_box_right = 2176,
            .right_child = 32776, .left_child = 7
            },
     {
            .split_x = 1672, .split_y = -3104,
            .split_dx = 224, .split_dy = 0,
            .right_box_top = -3104, .right_box_bottom = -3520,
            .right_box_left = 1376, .right_box_right = 2128,
            .left_box_top = -2880, .left_box_bottom = -3104,
            .left_box_left = 1376, .left_box_right = 2176,
            .right_child = 6, .left_child = 8
            },
     {
            .split_x = 1376, .split_y = -3360,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3264, .right_box_bottom = -3360,
            .right_box_left = 1344, .right_box_right = 1376,
            .left_box_top = -3392, .left_box_bottom = -3520,
            .left_box_left = 1344, .left_box_right = 1376,
            .right_child = 32779, .left_child = 32780
            },
     {
            .split_x = 1344, .split_y = -3264,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3264, .right_box_bottom = -3520,
            .right_box_left = 1344, .right_box_right = 1376,
            .left_box_top = -3104, .left_box_bottom = -3200,
            .left_box_left = 1344, .left_box_right = 1376,
            .right_child = 10, .left_child = 32781
            },
     {
            .split_x = 1376, .split_y = -3200,
            .split_dx = 0, .split_dy = 96,
            .right_box_top = -2880, .right_box_bottom = -3520,
            .right_box_left = 1376, .right_box_right = 2176,
            .left_box_top = -3104, .left_box_bottom = -3520,
            .left_box_left = 1344, .left_box_right = 1376,
            .right_child = 9, .left_child = 11
            },
     {
            .split_x = 2048, .split_y = -3904,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3904, .right_box_bottom = -4064,
            .right_box_left = 2048, .right_box_right = 2176,
            .left_box_top = -3872, .left_box_bottom = -3904,
            .left_box_left = 2048, .left_box_right = 2176,
            .right_child = 32782, .left_child = 32783
            },
     {
            .split_x = 2048, .split_y = -3840,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3840, .right_box_bottom = -3872,
            .right_box_left = 2048, .right_box_right = 2176,
            .left_box_top = -3808, .left_box_bottom = -3840,
            .left_box_left = 2048, .left_box_right = 2176,
            .right_child = 32784, .left_child = 32785
            },
     {
            .split_x = 2048, .split_y = -3808,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3808, .right_box_bottom = -3872,
            .right_box_left = 2048, .right_box_right = 2176,
            .left_box_top = -3776, .left_box_bottom = -3808,
            .left_box_left = 2048, .left_box_right = 2176,
            .right_child = 14, .left_child = 32786
            },
     {
            .split_x = 2048, .split_y = -3872,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3872, .right_box_bottom = -4064,
            .right_box_left = 2048, .right_box_right = 2176,
            .left_box_top = -3776, .left_box_bottom = -3872,
            .left_box_left = 2048, .left_box_right = 2176,
            .right_child = 13, .left_child = 15
            },
     {
            .split_x = 1984, .split_y = -3648,
            .split_dx = -608, .split_dy = 0,
            .right_box_top = -3520, .right_box_bottom = -3648,
            .right_box_left = 1376, .right_box_right = 1984,
            .left_box_top = -3648, .left_box_bottom = -3776,
            .left_box_left = 1376, .left_box_right = 1984,
            .right_child = 32787, .left_child = 32788
            },
     {
            .split_x = 1528, .split_y = -3680,
            .split_dx = -152, .split_dy = 32,
            .right_box_top = -3520, .right_box_bottom = -3776,
            .right_box_left = 1376, .right_box_right = 1984,
            .left_box_top = -3680, .left_box_bottom = -3776,
            .left_box_left = 1528, .left_box_right = 1984,
            .right_child = 17, .left_child = 32789
            },
     {
            .split_x = 2016, .split_y = -3680,
            .split_dx = -32, .split_dy = -96,
            .right_box_top = -3680, .right_box_bottom = -3776,
            .right_box_left = 1984, .right_box_right = 2016,
            .left_box_top = -3680, .left_box_bottom = -3776,
            .left_box_left = 2048, .left_box_right = 2176,
            .right_child = 32792, .left_child = 32793
            },
     {
            .split_x = 2048, .split_y = -3680,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3648, .right_box_bottom = -3680,
            .right_box_left = 1984, .right_box_right = 2176,
            .left_box_top = -3680, .left_box_bottom = -3776,
            .left_box_left = 1984, .left_box_right = 2176,
            .right_child = 32791, .left_child = 19
            },
     {
            .split_x = 2176, .split_y = -3648,
            .split_dx = -192, .split_dy = 0,
            .right_box_top = -3648, .right_box_bottom = -3648,
            .right_box_left = 1984, .right_box_right = 2176,
            .left_box_top = -3648, .left_box_bottom = -3776,
            .left_box_left = 1984, .left_box_right = 2176,
            .right_child = 32790, .left_child = 20
            },
     {
            .split_x = 1984, .split_y = -3648,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3520, .right_box_bottom = -3776,
            .right_box_left = 1376, .right_box_right = 1984,
            .left_box_top = -3648, .left_box_bottom = -3776,
            .left_box_left = 1984, .left_box_right = 2176,
            .right_child = 18, .left_child = 21
            },
     {
            .split_x = 2048, .split_y = -3776,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3776, .right_box_bottom = -4064,
            .right_box_left = 2048, .right_box_right = 2176,
            .left_box_top = -3520, .left_box_bottom = -3776,
            .left_box_left = 1376, .left_box_right = 2176,
            .right_child = 16, .left_child = 22
            },
     {
            .split_x = 1376, .split_y = -3520,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -2880, .right_box_bottom = -3520,
            .right_box_left = 1344, .right_box_right = 2176,
            .left_box_top = -3520, .left_box_bottom = -4064,
            .left_box_left = 1376, .left_box_right = 2176,
            .right_child = 12, .left_child = 23
            },
     {
            .split_x = 2176, .split_y = -2816,
            .split_dx = -512, .split_dy = 0,
            .right_box_top = -2752, .right_box_bottom = -2816,
            .right_box_left = 1664, .right_box_right = 2176,
            .left_box_top = -2816, .left_box_bottom = -2880,
            .left_box_left = 1664, .left_box_right = 2176,
            .right_child = 32794, .left_child = 32795
            },
     {
            .split_x = 1792, .split_y = -2304,
            .split_dx = 192, .split_dy = 0,
            .right_box_top = -2304, .right_box_bottom = -2312,
            .right_box_left = 1792, .right_box_right = 1984,
            .left_box_top = -2240, .left_box_bottom = -2304,
            .left_box_left = 1792, .left_box_right = 1984,
            .right_child = 32802, .left_child = 32803
            },
     {
            .split_x = 1792, .split_y = -2240,
            .split_dx = 0, .split_dy = -64,
            .right_box_top = -2240, .right_box_bottom = -2312,
            .right_box_left = 1784, .right_box_right = 1792,
            .left_box_top = -2240, .left_box_bottom = -2312,
            .left_box_left = 1792, .left_box_right = 1984,
            .right_child = 32801, .left_child = 26
            },
     {
            .split_x = 1984, .split_y = -2240,
            .split_dx = -192, .split_dy = 0,
            .right_box_top = -2232, .right_box_bottom = -2240,
            .right_box_left = 1784, .right_box_right = 1984,
            .left_box_top = -2240, .left_box_bottom = -2312,
            .left_box_left = 1784, .left_box_right = 1984,
            .right_child = 32800, .left_child = 27
            },
     {
            .split_x = 1984, .split_y = -2304,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -2232, .right_box_bottom = -2312,
            .right_box_left = 1984, .right_box_right = 1992,
            .left_box_top = -2232, .left_box_bottom = -2312,
            .left_box_left = 1784, .left_box_right = 1984,
            .right_child = 32799, .left_child = 28
            },
     {
            .split_x = 1784, .split_y = -2232,
            .split_dx = 0, .split_dy = -80,
            .right_box_top = -2232, .right_box_bottom = -2312,
            .right_box_left = 1664, .right_box_right = 1784,
            .left_box_top = -2232, .left_box_bottom = -2312,
            .left_box_left = 1784, .left_box_right = 1992,
            .right_child = 32798, .left_child = 29
            },
     {
            .split_x = 1992, .split_y = -2232,
            .split_dx = -208, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2232,
            .right_box_left = 1664, .right_box_right = 1992,
            .left_box_top = -2232, .left_box_bottom = -2312,
            .left_box_left = 1664, .left_box_right = 1992,
            .right_child = 32797, .left_child = 30
            },
     {
            .split_x = 1784, .split_y = -2312,
            .split_dx = 208, .split_dy = 0,
            .right_box_top = -2312, .right_box_bottom = -2552,
            .right_box_left = 1664, .right_box_right = 1992,
            .left_box_top = -2112, .left_box_bottom = -2312,
            .left_box_left = 1664, .left_box_right = 1992,
            .right_child = 32796, .left_child = 31
            },
     {
            .split_x = 1792, .split_y = -2624,
            .split_dx = 192, .split_dy = 0,
            .right_box_top = -2624, .right_box_bottom = -2632,
            .right_box_left = 1792, .right_box_right = 1984,
            .left_box_top = -2560, .left_box_bottom = -2624,
            .left_box_left = 1792, .left_box_right = 1984,
            .right_child = 32809, .left_child = 32810
            },
     {
            .split_x = 1792, .split_y = -2560,
            .split_dx = 0, .split_dy = -64,
            .right_box_top = -2560, .right_box_bottom = -2632,
            .right_box_left = 1784, .right_box_right = 1792,
            .left_box_top = -2560, .left_box_bottom = -2632,
            .left_box_left = 1792, .left_box_right = 1984,
            .right_child = 32808, .left_child = 33
            },
     {
            .split_x = 1984, .split_y = -2560,
            .split_dx = -192, .split_dy = 0,
            .right_box_top = -2552, .right_box_bottom = -2560,
            .right_box_left = 1784, .right_box_right = 1984,
            .left_box_top = -2560, .left_box_bottom = -2632,
            .left_box_left = 1784, .left_box_right = 1984,
            .right_child = 32807, .left_child = 34
            },
     {
            .split_x = 1984, .split_y = -2624,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -2552, .right_box_bottom = -2632,
            .right_box_left = 1984, .right_box_right = 1992,
            .left_box_top = -2552, .left_box_bottom = -2632,
            .left_box_left = 1784, .left_box_right = 1984,
            .right_child = 32806, .left_child = 35
            },
     {
            .split_x = 1784, .split_y = -2632,
            .split_dx = 208, .split_dy = 0,
            .right_box_top = -2632, .right_box_bottom = -2752,
            .right_box_left = 1784, .right_box_right = 1992,
            .left_box_top = -2552, .left_box_bottom = -2632,
            .left_box_left = 1784, .left_box_right = 1992,
            .right_child = 32805, .left_child = 36
            },
     {
            .split_x = 1784, .split_y = -2552,
            .split_dx = 0, .split_dy = -80,
            .right_box_top = -2552, .right_box_bottom = -2752,
            .right_box_left = 1664, .right_box_right = 1784,
            .left_box_top = -2552, .left_box_bottom = -2752,
            .left_box_left = 1784, .left_box_right = 1992,
            .right_child = 32804, .left_child = 37
            },
     {
            .split_x = 1992, .split_y = -2552,
            .split_dx = -208, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2552,
            .right_box_left = 1664, .right_box_right = 1992,
            .left_box_top = -2552, .left_box_bottom = -2752,
            .left_box_left = 1664, .left_box_right = 1992,
            .right_child = 32, .left_child = 38
            },
     {
            .split_x = 2144, .split_y = -2304,
            .split_dx = 0, .split_dy = -256,
            .right_box_top = -2304, .right_box_bottom = -2560,
            .right_box_left = 1992, .right_box_right = 2144,
            .left_box_top = -2304, .left_box_bottom = -2560,
            .left_box_left = 2144, .left_box_right = 2176,
            .right_child = 32811, .left_child = 32812
            },
     {
            .split_x = 2112, .split_y = -2592,
            .split_dx = 64, .split_dy = 0,
            .right_box_top = -2592, .right_box_bottom = -2752,
            .right_box_left = 1992, .right_box_right = 2176,
            .left_box_top = -2560, .left_box_bottom = -2592,
            .left_box_left = 1992, .left_box_right = 2112,
            .right_child = 32813, .left_child = 32814
            },
     {
            .split_x = 2176, .split_y = -2560,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -2304, .right_box_bottom = -2560,
            .right_box_left = 1992, .right_box_right = 2176,
            .left_box_top = -2560, .left_box_bottom = -2752,
            .left_box_left = 1992, .left_box_right = 2176,
            .right_child = 40, .left_child = 41
            },
     {
            .split_x = 2176, .split_y = -2272,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2272,
            .right_box_left = 1992, .right_box_right = 2176,
            .left_box_top = -2272, .left_box_bottom = -2304,
            .left_box_left = 1992, .left_box_right = 2112,
            .right_child = 32815, .left_child = 32816
            },
     {
            .split_x = 2112, .split_y = -2304,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -2304, .right_box_bottom = -2752,
            .right_box_left = 1992, .right_box_right = 2176,
            .left_box_top = -2112, .left_box_bottom = -2304,
            .left_box_left = 1992, .left_box_right = 2176,
            .right_child = 42, .left_child = 43
            },
     {
            .split_x = 1992, .split_y = -2552,
            .split_dx = 0, .split_dy = -80,
            .right_box_top = -2112, .right_box_bottom = -2752,
            .right_box_left = 1664, .right_box_right = 1992,
            .left_box_top = -2112, .left_box_bottom = -2752,
            .left_box_left = 1992, .left_box_right = 2176,
            .right_child = 39, .left_child = 44
            },
     {
            .split_x = 1664, .split_y = -2112,
            .split_dx = 512, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2752,
            .right_box_left = 1664, .right_box_right = 2176,
            .left_box_top = -2048, .left_box_bottom = -2112,
            .left_box_left = 1664, .left_box_right = 2176,
            .right_child = 45, .left_child = 32817
            },
     {
            .split_x = 1664, .split_y = -2752,
            .split_dx = 512, .split_dy = 0,
            .right_box_top = -2752, .right_box_bottom = -2880,
            .right_box_left = 1664, .right_box_right = 2176,
            .left_box_top = -2048, .left_box_bottom = -2752,
            .left_box_left = 1664, .left_box_right = 2176,
            .right_child = 25, .left_child = 46
            },
     {
            .split_x = 1552, .split_y = -2432,
            .split_dx = 112, .split_dy = 0,
            .right_box_top = -2432, .right_box_bottom = -2560,
            .right_box_left = 1552, .right_box_right = 1664,
            .left_box_top = -2048, .left_box_bottom = -2368,
            .left_box_left = 1600, .left_box_right = 1664,
            .right_child = 32818, .left_child = 32819
            },
     {
            .split_x = 1664, .split_y = -2560,
            .split_dx = -112, .split_dy = 0,
            .right_box_top = -2048, .right_box_bottom = -2560,
            .right_box_left = 1552, .right_box_right = 1664,
            .left_box_top = -2624, .left_box_bottom = -2816,
            .left_box_left = 1600, .left_box_right = 1664,
            .right_child = 48, .left_child = 32820
            },
     {
            .split_x = 1472, .split_y = -2560,
            .split_dx = -88, .split_dy = -32,
            .right_box_top = -2432, .right_box_bottom = -2592,
            .right_box_left = 1344, .right_box_right = 1472,
            .left_box_top = -2592, .left_box_bottom = -2880,
            .left_box_left = 1344, .left_box_right = 1384,
            .right_child = 32821, .left_child = 32822
            },
     {
            .split_x = 1536, .split_y = -2432,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -2432, .right_box_bottom = -2560,
            .right_box_left = 1472, .right_box_right = 1536,
            .left_box_top = -2432, .left_box_bottom = -2560,
            .left_box_left = 1536, .left_box_right = 1552,
            .right_child = 32823, .left_child = 32824
            },
     {
            .split_x = 1472, .split_y = -2432,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -2432, .right_box_bottom = -2880,
            .right_box_left = 1344, .right_box_right = 1472,
            .left_box_top = -2432, .left_box_bottom = -2560,
            .left_box_left = 1472, .left_box_right = 1552,
            .right_child = 50, .left_child = 51
            },
     {
            .split_x = 1552, .split_y = -2560,
            .split_dx = 0, .split_dy = 128,
            .right_box_top = -2048, .right_box_bottom = -2816,
            .right_box_left = 1552, .right_box_right = 1664,
            .left_box_top = -2432, .left_box_bottom = -2880,
            .left_box_left = 1344, .left_box_right = 1552,
            .right_child = 49, .left_child = 52
            },
     {
            .split_x = 1664, .split_y = -2600,
            .split_dx = 0, .split_dy = 40,
            .right_box_top = -2048, .right_box_bottom = -2880,
            .right_box_left = 1664, .right_box_right = 2176,
            .left_box_top = -2048, .left_box_bottom = -2880,
            .left_box_left = 1344, .left_box_right = 1664,
            .right_child = 47, .left_child = 53
            },
     {
            .split_x = 1664, .split_y = -2880,
            .split_dx = 192, .split_dy = 0,
            .right_box_top = -2880, .right_box_bottom = -4064,
            .right_box_left = 1344, .right_box_right = 2176,
            .left_box_top = -2048, .left_box_bottom = -2880,
            .left_box_left = 1344, .left_box_right = 2176,
            .right_child = 24, .left_child = 54
            },
     {
            .split_x = 896, .split_y = -3360,
            .split_dx = 0, .split_dy = 256,
            .right_box_top = -3104, .right_box_bottom = -3360,
            .right_box_left = 896, .right_box_right = 928,
            .left_box_top = -3104, .left_box_bottom = -3360,
            .left_box_left = 704, .left_box_right = 896,
            .right_child = 32826, .left_child = 32827
            },
     {
            .split_x = 928, .split_y = -3360,
            .split_dx = 0, .split_dy = 256,
            .right_box_top = -3104, .right_box_bottom = -3360,
            .right_box_left = 928, .right_box_right = 1344,
            .left_box_top = -3104, .left_box_bottom = -3360,
            .left_box_left = 704, .left_box_right = 928,
            .right_child = 32825, .left_child = 56
            },
     {
            .split_x = 928, .split_y = -3072,
            .split_dx = 256, .split_dy = 0,
            .right_box_top = -3072, .right_box_bottom = -3104,
            .right_box_left = 928, .right_box_right = 1184,
            .left_box_top = -3072, .left_box_bottom = -3072,
            .left_box_left = 928, .left_box_right = 1184,
            .right_child = 32828, .left_child = 32829
            },
     {
            .split_x = 1216, .split_y = -3072,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3072, .right_box_bottom = -3072,
            .right_box_left = 1184, .right_box_right = 1216,
            .left_box_top = -3072, .left_box_bottom = -3104,
            .left_box_left = 1216, .left_box_right = 1344,
            .right_child = 32830, .left_child = 32831
            },
     {
            .split_x = 1184, .split_y = -3072,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -3072, .right_box_bottom = -3104,
            .right_box_left = 928, .right_box_right = 1184,
            .left_box_top = -3072, .left_box_bottom = -3104,
            .left_box_left = 1184, .left_box_right = 1344,
            .right_child = 58, .left_child = 59
            },
     {
            .split_x = 896, .split_y = -3072,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -2944, .right_box_bottom = -3104,
            .right_box_left = 704, .right_box_right = 896,
            .left_box_top = -3072, .left_box_bottom = -3072,
            .left_box_left = 896, .left_box_right = 928,
            .right_child = 32832, .left_child = 32833
            },
     {
            .split_x = 928, .split_y = -3104,
            .split_dx = 0, .split_dy = 32,
            .right_box_top = -3072, .right_box_bottom = -3104,
            .right_box_left = 928, .right_box_right = 1344,
            .left_box_top = -2944, .left_box_bottom = -3104,
            .left_box_left = 704, .left_box_right = 928,
            .right_child = 60, .left_child = 61
            },
     {
            .split_x = 832, .split_y = -2944,
            .split_dx = 136, .split_dy = 64,
            .right_box_top = -2880, .right_box_bottom = -3104,
            .right_box_left = 832, .right_box_right = 1344,
            .left_box_top = -2944, .left_box_bottom = -2944,
            .left_box_left = 704, .left_box_right = 832,
            .right_child = 32834, .left_child = 32835
            },
     {
            .split_x = 968, .split_y = -2880,
            .split_dx = 248, .split_dy = 0,
            .right_box_top = -2880, .right_box_bottom = -3104,
            .right_box_left = 704, .right_box_right = 1344,
            .left_box_top = -2486, .left_box_bottom = -2880,
            .left_box_left = 1216, .left_box_right = 1344,
            .right_child = 63, .left_child = 32836
            },
     {
            .split_x = 1216, .split_y = -3072,
            .split_dx = 128, .split_dy = -32,
            .right_box_top = -2944, .right_box_bottom = -3104,
            .right_box_left = 704, .right_box_right = 1344,
            .left_box_top = -2486, .left_box_bottom = -3104,
            .left_box_left = 704, .left_box_right = 1344,
            .right_child = 62, .left_child = 64
            },
     {
            .split_x = 896, .split_y = -3104,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3104, .right_box_bottom = -3360,
            .right_box_left = 704, .right_box_right = 1344,
            .left_box_top = -2486, .left_box_bottom = -3104,
            .left_box_left = 704, .left_box_right = 1344,
            .right_child = 57, .left_child = 65
            },
     {
            .split_x = 1184, .split_y = -3392,
            .split_dx = -256, .split_dy = 0,
            .right_box_top = -3360, .right_box_bottom = -3392,
            .right_box_left = 928, .right_box_right = 1184,
            .left_box_top = -3392, .left_box_bottom = -3392,
            .left_box_left = 928, .left_box_right = 1184,
            .right_child = 32837, .left_child = 32838
            },
     {
            .split_x = 896, .split_y = -3360,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -3360, .right_box_bottom = -3552,
            .right_box_left = 704, .right_box_right = 896,
            .left_box_top = -3392, .left_box_bottom = -3392,
            .left_box_left = 896, .left_box_right = 928,
            .right_child = 32839, .left_child = 32840
            },
     {
            .split_x = 928, .split_y = -3392,
            .split_dx = 0, .split_dy = 32,
            .right_box_top = -3360, .right_box_bottom = -3392,
            .right_box_left = 928, .right_box_right = 1184,
            .left_box_top = -3360, .left_box_bottom = -3552,
            .left_box_left = 704, .left_box_right = 928,
            .right_child = 67, .left_child = 68
            },
     {
            .split_x = 1344, .split_y = -3360,
            .split_dx = -128, .split_dy = -32,
            .right_box_top = -3360, .right_box_bottom = -3392,
            .right_box_left = 1216, .right_box_right = 1344,
            .left_box_top = -3360, .left_box_bottom = -3392,
            .left_box_left = 1216, .left_box_right = 1344,
            .right_child = 32842, .left_child = 32843
            },
     {
            .split_x = 1184, .split_y = -3392,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3392, .right_box_bottom = -3552,
            .right_box_left = 1184, .right_box_right = 1344,
            .left_box_top = -3360, .left_box_bottom = -3392,
            .left_box_left = 1216, .left_box_right = 1344,
            .right_child = 32841, .left_child = 70
            },
     {
            .split_x = 1184, .split_y = -3360,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -3360, .right_box_bottom = -3552,
            .right_box_left = 704, .right_box_right = 1184,
            .left_box_top = -3360, .left_box_bottom = -3552,
            .left_box_left = 1184, .left_box_right = 1344,
            .right_child = 69, .left_child = 71
            },
     {
            .split_x = 1152, .split_y = -3648,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -3552, .right_box_bottom = -3648,
            .right_box_left = 832, .right_box_right = 1280,
            .left_box_top = -3648, .left_box_bottom = -3680,
            .left_box_left = 1024, .left_box_right = 1088,
            .right_child = 32844, .left_child = 32845
            },
     {
            .split_x = 1344, .split_y = -3552,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -3360, .right_box_bottom = -3552,
            .right_box_left = 704, .right_box_right = 1344,
            .left_box_top = -3552, .left_box_bottom = -3680,
            .left_box_left = 832, .left_box_right = 1280,
            .right_child = 72, .left_child = 73
            },
     {
            .split_x = 1184, .split_y = -3360,
            .split_dx = -256, .split_dy = 0,
            .right_box_top = -2486, .right_box_bottom = -3360,
            .right_box_left = 704, .right_box_right = 1344,
            .left_box_top = -3360, .left_box_bottom = -3680,
            .left_box_left = 704, .left_box_right = 1344,
            .right_child = 66, .left_child = 74
            },
     {
            .split_x = 512, .split_y = -3328,
            .split_dx = 0, .split_dy = 24,
            .right_box_top = -3104, .right_box_bottom = -3360,
            .right_box_left = 512, .right_box_right = 704,
            .left_box_top = -3160, .left_box_bottom = -3304,
            .left_box_left = 496, .left_box_right = 512,
            .right_child = 32846, .left_child = 32847
            },
     {
            .split_x = 288, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3200, .right_box_bottom = -3264,
            .right_box_left = 288, .right_box_right = 320,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = 256, .left_box_right = 288,
            .right_child = 32851, .left_child = 32852
            },
     {
            .split_x = 320, .split_y = -3200,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3136, .right_box_bottom = -3200,
            .right_box_left = 256, .right_box_right = 320,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = 256, .left_box_right = 320,
            .right_child = 32850, .left_child = 77
            },
     {
            .split_x = 256, .split_y = -3264,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3264, .right_box_bottom = -3328,
            .right_box_left = 256, .right_box_right = 320,
            .left_box_top = -3136, .left_box_bottom = -3264,
            .left_box_left = 256, .left_box_right = 320,
            .right_child = 32849, .left_child = 78
            },
     {
            .split_x = 320, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3136, .right_box_bottom = -3328,
            .right_box_left = 320, .right_box_right = 496,
            .left_box_top = -3136, .left_box_bottom = -3328,
            .left_box_left = 256, .left_box_right = 320,
            .right_child = 32848, .left_child = 79
            },
     {
            .split_x = 320, .split_y = -3392,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3328, .right_box_bottom = -3392,
            .right_box_left = 320, .right_box_right = 496,
            .left_box_top = -3328, .left_box_bottom = -3392,
            .left_box_left = 256, .left_box_right = 320,
            .right_child = 32854, .left_child = 32855
            },
     {
            .split_x = 256, .split_y = -3392,
            .split_dx = 64, .split_dy = 0,
            .right_box_top = -3392, .right_box_bottom = -3456,
            .right_box_left = 256, .right_box_right = 472,
            .left_box_top = -3328, .left_box_bottom = -3392,
            .left_box_left = 256, .left_box_right = 496,
            .right_child = 32853, .left_child = 81
            },
     {
            .split_x = 320, .split_y = -3328,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -3136, .right_box_bottom = -3328,
            .right_box_left = 256, .right_box_right = 496,
            .left_box_top = -3328, .left_box_bottom = -3456,
            .left_box_left = 256, .left_box_right = 496,
            .right_child = 80, .left_child = 82
            },
     {
            .split_x = 320, .split_y = -3072,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -3008, .right_box_bottom = -3072,
            .right_box_left = 256, .right_box_right = 320,
            .left_box_top = -3072, .left_box_bottom = -3136,
            .left_box_left = 256, .left_box_right = 320,
            .right_child = 32857, .left_child = 32858
            },
     {
            .split_x = 320, .split_y = -3136,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3008, .right_box_bottom = -3136,
            .right_box_left = 320, .right_box_right = 496,
            .left_box_top = -3008, .left_box_bottom = -3136,
            .left_box_left = 256, .left_box_right = 320,
            .right_child = 32856, .left_child = 84
            },
     {
            .split_x = 256, .split_y = -3136,
            .split_dx = 64, .split_dy = 0,
            .right_box_top = -3136, .right_box_bottom = -3456,
            .right_box_left = 256, .right_box_right = 496,
            .left_box_top = -3008, .left_box_bottom = -3136,
            .left_box_left = 256, .left_box_right = 496,
            .right_child = 83, .left_child = 85
            },
     {
            .split_x = 496, .split_y = -3304,
            .split_dx = 0, .split_dy = 144,
            .right_box_top = -3104, .right_box_bottom = -3360,
            .right_box_left = 496, .right_box_right = 704,
            .left_box_top = -3008, .left_box_bottom = -3456,
            .left_box_left = 256, .left_box_right = 496,
            .right_child = 76, .left_child = 86
            },
     {
            .split_x = 704, .split_y = -3104,
            .split_dx = 0, .split_dy = 160,
            .right_box_top = -2486, .right_box_bottom = -3680,
            .right_box_left = 704, .right_box_right = 1344,
            .left_box_top = -3008, .left_box_bottom = -3456,
            .left_box_left = 256, .left_box_right = 704,
            .right_child = 75, .left_child = 87
            },
     {
            .split_x = 224, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3200, .right_box_bottom = -3264,
            .right_box_left = 224, .right_box_right = 256,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = 192, .left_box_right = 224,
            .right_child = 32861, .left_child = 32862
            },
     {
            .split_x = 192, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3200, .right_box_bottom = -3264,
            .right_box_left = 192, .right_box_right = 256,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = 160, .left_box_right = 192,
            .right_child = 89, .left_child = 32863
            },
     {
            .split_x = 256, .split_y = -3200,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3008, .right_box_bottom = -3200,
            .right_box_left = 160, .right_box_right = 256,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = 160, .left_box_right = 256,
            .right_child = 32860, .left_child = 90
            },
     {
            .split_x = 160, .split_y = -3264,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3264, .right_box_bottom = -3456,
            .right_box_left = 160, .right_box_right = 256,
            .left_box_top = -3008, .left_box_bottom = -3264,
            .left_box_left = 160, .left_box_right = 256,
            .right_child = 32859, .left_child = 91
            },
     {
            .split_x = -128, .split_y = -3120,
            .split_dx = -128, .split_dy = 0,
            .right_box_top = -2851, .right_box_bottom = -3120,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -3120, .left_box_bottom = -3136,
            .left_box_left = -256, .left_box_right = -128,
            .right_child = 32867, .left_child = 32868
            },
     {
            .split_x = -256, .split_y = -3136,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3136, .right_box_bottom = -3216,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -2851, .left_box_bottom = -3136,
            .left_box_left = -256, .left_box_right = -128,
            .right_child = 32866, .left_child = 93
            },
     {
            .split_x = -256, .split_y = -3248,
            .split_dx = 16, .split_dy = -16,
            .right_box_top = -3248, .right_box_bottom = -3264,
            .right_box_left = -256, .right_box_right = -240,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 32874, .left_child = 32875
            },
     {
            .split_x = -240, .split_y = -3200,
            .split_dx = -16, .split_dy = -16,
            .right_box_top = -3200, .right_box_bottom = -3216,
            .right_box_left = -256, .right_box_right = -240,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 32873, .left_child = 95
            },
     {
            .split_x = -208, .split_y = -3200,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3200, .right_box_bottom = -3200,
            .right_box_left = -240, .right_box_right = -208,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 32872, .left_child = 96
            },
     {
            .split_x = -192, .split_y = -3248,
            .split_dx = 0, .split_dy = 32,
            .right_box_top = -3216, .right_box_bottom = -3248,
            .right_box_left = -192, .right_box_right = -192,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 32871, .left_child = 97
            },
     {
            .split_x = -208, .split_y = -3264,
            .split_dx = 16, .split_dy = 16,
            .right_box_top = -3248, .right_box_bottom = -3264,
            .right_box_left = -208, .right_box_right = -192,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 32870, .left_child = 98
            },
     {
            .split_x = -240, .split_y = -3264,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3264, .right_box_bottom = -3264,
            .right_box_left = -240, .right_box_right = -208,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 32869, .left_child = 99
            },
     {
            .split_x = -192, .split_y = -3216,
            .split_dx = -16, .split_dy = 16,
            .right_box_top = -2851, .right_box_bottom = -3216,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = -256, .left_box_right = -192,
            .right_child = 94, .left_child = 100
            },
     {
            .split_x = -336, .split_y = -3168,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3168, .right_box_bottom = -3296,
            .right_box_left = -640, .right_box_right = -336,
            .left_box_top = -3168, .left_box_bottom = -3296,
            .left_box_left = -336, .left_box_right = -320,
            .right_child = 32877, .left_child = 32878
            },
     {
            .split_x = -320, .split_y = -3296,
            .split_dx = 0, .split_dy = 128,
            .right_box_top = -3168, .right_box_bottom = -3296,
            .right_box_left = -320, .right_box_right = -256,
            .left_box_top = -3168, .left_box_bottom = -3296,
            .left_box_left = -640, .left_box_right = -320,
            .right_child = 32876, .left_child = 102
            },
     {
            .split_x = -256, .split_y = -3120,
            .split_dx = -80, .split_dy = 0,
            .right_box_top = -2874, .right_box_bottom = -3120,
            .right_box_left = -640, .right_box_right = -256,
            .left_box_top = -3120, .left_box_bottom = -3168,
            .left_box_left = -640, .left_box_right = -336,
            .right_child = 32880, .left_child = 32881
            },
     {
            .split_x = -320, .split_y = -3168,
            .split_dx = 64, .split_dy = 32,
            .right_box_top = -3136, .right_box_bottom = -3168,
            .right_box_left = -320, .right_box_right = -256,
            .left_box_top = -2874, .left_box_bottom = -3168,
            .left_box_left = -640, .left_box_right = -256,
            .right_child = 32879, .left_child = 104
            },
     {
            .split_x = -336, .split_y = -3168,
            .split_dx = 16, .split_dy = 0,
            .right_box_top = -3168, .right_box_bottom = -3296,
            .right_box_left = -640, .right_box_right = -256,
            .left_box_top = -2874, .left_box_bottom = -3168,
            .left_box_left = -640, .left_box_right = -256,
            .right_child = 103, .left_child = 105
            },
     {
            .split_x = -256, .split_y = -3136,
            .split_dx = 0, .split_dy = 16,
            .right_box_top = -2851, .right_box_bottom = -3264,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -2874, .left_box_bottom = -3296,
            .left_box_left = -640, .left_box_right = -256,
            .right_child = 101, .left_child = 106
            },
     {
            .split_x = -128, .split_y = -3328,
            .split_dx = -128, .split_dy = 0,
            .right_box_top = -3328, .right_box_bottom = -3328,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -3328, .left_box_bottom = -3344,
            .left_box_left = -256, .left_box_right = -128,
            .right_child = 32883, .left_child = 32884
            },
     {
            .split_x = -256, .split_y = -3344,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -3344, .right_box_bottom = -3613,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -3328, .left_box_bottom = -3344,
            .left_box_left = -256, .left_box_right = -128,
            .right_child = 32882, .left_child = 108
            },
     {
            .split_x = -336, .split_y = -3296,
            .split_dx = 0, .split_dy = -48,
            .right_box_top = -3296, .right_box_bottom = -3575,
            .right_box_left = -640, .right_box_right = -336,
            .left_box_top = -3344, .left_box_bottom = -3589,
            .left_box_left = -336, .left_box_right = -256,
            .right_child = 32886, .left_child = 32887
            },
     {
            .split_x = -256, .split_y = -3328,
            .split_dx = -64, .split_dy = 32,
            .right_box_top = -3296, .right_box_bottom = -3328,
            .right_box_left = -320, .right_box_right = -256,
            .left_box_top = -3296, .left_box_bottom = -3589,
            .left_box_left = -640, .left_box_right = -256,
            .right_child = 32885, .left_child = 110
            },
     {
            .split_x = -256, .split_y = -3344,
            .split_dx = 0, .split_dy = 16,
            .right_box_top = -3328, .right_box_bottom = -3613,
            .right_box_left = -256, .right_box_right = -128,
            .left_box_top = -3296, .left_box_bottom = -3589,
            .left_box_left = -640, .left_box_right = -256,
            .right_child = 109, .left_child = 111
            },
     {
            .split_x = -320, .split_y = -3296,
            .split_dx = -16, .split_dy = 0,
            .right_box_top = -2851, .right_box_bottom = -3296,
            .right_box_left = -640, .right_box_right = -128,
            .left_box_top = -3296, .left_box_bottom = -3613,
            .left_box_left = -640, .left_box_right = -128,
            .right_child = 107, .left_child = 112
            },
     {
            .split_x = -64, .split_y = -3136,
            .split_dx = 0, .split_dy = -192,
            .right_box_top = -3136, .right_box_bottom = -3328,
            .right_box_left = -64, .right_box_right = -64,
            .left_box_top = -3072, .left_box_bottom = -3392,
            .left_box_left = -64, .left_box_right = 64,
            .right_child = 32888, .left_child = 32889
            },
     {
            .split_x = -96, .split_y = -3120,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -2816, .right_box_bottom = -3120,
            .right_box_left = -128, .right_box_right = 64,
            .left_box_top = -3136, .left_box_bottom = -3136,
            .left_box_left = -128, .left_box_right = -64,
            .right_child = 32890, .left_child = 32891
            },
     {
            .split_x = -64, .split_y = -3136,
            .split_dx = 112, .split_dy = 64,
            .right_box_top = -3072, .right_box_bottom = -3392,
            .right_box_left = -64, .right_box_right = 64,
            .left_box_top = -2816, .left_box_bottom = -3136,
            .left_box_left = -128, .left_box_right = 64,
            .right_child = 114, .left_child = 115
            },
     {
            .split_x = -128, .split_y = -3344,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3344, .right_box_bottom = -3648,
            .right_box_left = -128, .right_box_right = 64,
            .left_box_top = -3328, .left_box_bottom = -3328,
            .left_box_left = -128, .left_box_right = -64,
            .right_child = 32892, .left_child = 32893
            },
     {
            .split_x = 48, .split_y = -3392,
            .split_dx = -112, .split_dy = 64,
            .right_box_top = -2816, .right_box_bottom = -3392,
            .right_box_left = -128, .right_box_right = 64,
            .left_box_top = -3328, .left_box_bottom = -3648,
            .left_box_left = -128, .left_box_right = 64,
            .right_child = 116, .left_child = 117
            },
     {
            .split_x = -128, .split_y = -3120,
            .split_dx = 0, .split_dy = -16,
            .right_box_top = -2851, .right_box_bottom = -3613,
            .right_box_left = -640, .right_box_right = -128,
            .left_box_top = -2816, .left_box_bottom = -3648,
            .left_box_left = -128, .left_box_right = 64,
            .right_child = 113, .left_child = 118
            },
     {
            .split_x = 64, .split_y = -2816,
            .split_dx = -704, .split_dy = -128,
            .right_box_top = -2816, .right_box_bottom = -2944,
            .right_box_left = -640, .right_box_right = 64,
            .left_box_top = -2816, .left_box_bottom = -3648,
            .left_box_left = -640, .left_box_right = 64,
            .right_child = 32865, .left_child = 119
            },
     {
            .split_x = -640, .split_y = -3520,
            .split_dx = 0, .split_dy = 576,
            .right_box_top = -2816, .right_box_bottom = -3648,
            .right_box_left = -640, .right_box_right = 64,
            .left_box_top = -2816, .left_box_bottom = -3520,
            .left_box_left = -768, .left_box_right = -640,
            .right_child = 120, .left_child = 32894
            },
     {
            .split_x = 160, .split_y = -3200,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3008, .right_box_bottom = -3200,
            .right_box_left = 128, .right_box_right = 160,
            .left_box_top = -3200, .left_box_bottom = -3264,
            .left_box_left = 128, .left_box_right = 160,
            .right_child = 32896, .left_child = 32897
            },
     {
            .split_x = 128, .split_y = -3264,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -3264, .right_box_bottom = -3456,
            .right_box_left = 128, .right_box_right = 160,
            .left_box_top = -3008, .left_box_bottom = -3264,
            .left_box_left = 128, .left_box_right = 160,
            .right_child = 32895, .left_child = 122
            },
     {
            .split_x = 64, .split_y = -3392,
            .split_dx = 64, .split_dy = 128,
            .right_box_top = -3264, .right_box_bottom = -3456,
            .right_box_left = 64, .right_box_right = 128,
            .left_box_top = -3072, .left_box_bottom = -3392,
            .left_box_left = 64, .left_box_right = 128,
            .right_child = 32899, .left_child = 32900
            },
     {
            .split_x = 128, .split_y = -3200,
            .split_dx = -64, .split_dy = 128,
            .right_box_top = -3008, .right_box_bottom = -3200,
            .right_box_left = 64, .right_box_right = 128,
            .left_box_top = -3072, .left_box_bottom = -3456,
            .left_box_left = 64, .left_box_right = 128,
            .right_child = 32898, .left_child = 124
            },
     {
            .split_x = 128, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3008, .right_box_bottom = -3456,
            .right_box_left = 128, .right_box_right = 160,
            .left_box_top = -3008, .left_box_bottom = -3456,
            .left_box_left = 64, .left_box_right = 128,
            .right_child = 123, .left_child = 125
            },
     {
            .split_x = 64, .split_y = -3520,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -2816, .right_box_bottom = -3648,
            .right_box_left = -768, .right_box_right = 64,
            .left_box_top = -3008, .left_box_bottom = -3456,
            .left_box_left = 64, .left_box_right = 160,
            .right_child = 121, .left_child = 126
            },
     {
            .split_x = -640, .split_y = -3520,
            .split_dx = 704, .split_dy = -128,
            .right_box_top = -3496, .right_box_bottom = -3648,
            .right_box_left = -768, .right_box_right = 64,
            .left_box_top = -2816, .left_box_bottom = -3648,
            .left_box_left = -768, .left_box_right = 160,
            .right_child = 32864, .left_child = 127
            },
     {
            .split_x = 160, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -3008, .right_box_bottom = -3456,
            .right_box_left = 160, .right_box_right = 256,
            .left_box_top = -2816, .left_box_bottom = -3648,
            .left_box_left = -768, .left_box_right = 160,
            .right_child = 92, .left_child = 128
            },
     {
            .split_x = 256, .split_y = -3264,
            .split_dx = 0, .split_dy = 64,
            .right_box_top = -2486, .right_box_bottom = -3680,
            .right_box_left = 256, .right_box_right = 1344,
            .left_box_top = -2816, .left_box_bottom = -3648,
            .left_box_left = -768, .left_box_right = 256,
            .right_child = 88, .left_child = 129
            },
     {
            .split_x = 1344, .split_y = -3200,
            .split_dx = 0, .split_dy = 96,
            .right_box_top = -2048, .right_box_bottom = -4064,
            .right_box_left = 1344, .right_box_right = 2176,
            .left_box_top = -2486, .left_box_bottom = -3680,
            .left_box_left = -768, .left_box_right = 1344,
            .right_child = 55, .left_child = 130
            },
     {
            .split_x = 2752, .split_y = -2912,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -2912, .right_box_bottom = -3048,
            .right_box_left = 2752, .right_box_right = 2960,
            .left_box_top = -2880, .left_box_bottom = -2912,
            .left_box_left = 2880, .left_box_right = 2880,
            .right_child = 32902, .left_child = 32903
            },
     {
            .split_x = 2880, .split_y = -2880,
            .split_dx = -128, .split_dy = 80,
            .right_box_top = -2656, .right_box_bottom = -2930,
            .right_box_left = 2752, .right_box_right = 3048,
            .left_box_top = -2880, .left_box_bottom = -3048,
            .left_box_left = 2752, .left_box_right = 2960,
            .right_child = 32901, .left_child = 132
            },
     {
            .split_x = 2752, .split_y = -2784,
            .split_dx = 192, .split_dy = 128,
            .right_box_top = -2656, .right_box_bottom = -3048,
            .right_box_left = 2752, .right_box_right = 3048,
            .left_box_top = -2560, .left_box_bottom = -2784,
            .left_box_left = 2752, .left_box_right = 2944,
            .right_child = 133, .left_child = 32904
            },
     {
            .split_x = 2944, .split_y = -3648,
            .split_dx = -192, .split_dy = 64,
            .right_box_top = -3536, .right_box_bottom = -3648,
            .right_box_left = 2752, .right_box_right = 2944,
            .left_box_top = -3648, .left_box_bottom = -3669,
            .left_box_left = 2944, .left_box_right = 2944,
            .right_child = 32906, .left_child = 32907
            },
     {
            .split_x = 2944, .split_y = -3536,
            .split_dx = -192, .split_dy = -48,
            .right_box_top = -3360, .right_box_bottom = -3584,
            .right_box_left = 2752, .right_box_right = 2944,
            .left_box_top = -3536, .left_box_bottom = -3669,
            .left_box_left = 2752, .left_box_right = 2944,
            .right_child = 32905, .left_child = 135
            },
     {
            .split_x = 3352, .split_y = -3592,
            .split_dx = 0, .split_dy = 24,
            .right_box_top = -3568, .right_box_bottom = -3592,
            .right_box_left = 3352, .right_box_right = 3352,
            .left_box_top = -3592, .left_box_bottom = -3601,
            .left_box_left = 3352, .left_box_right = 3353,
            .right_child = 32910, .left_child = 32911
            },
     {
            .split_x = 3352, .split_y = -3568,
            .split_dx = -88, .split_dy = -48,
            .right_box_top = -3370, .right_box_bottom = -3616,
            .right_box_left = 3104, .right_box_right = 3352,
            .left_box_top = -3568, .left_box_bottom = -3601,
            .left_box_left = 3352, .left_box_right = 3353,
            .right_child = 32909, .left_child = 137
            },
     {
            .split_x = 3448, .split_y = -3520,
            .split_dx = -96, .split_dy = -48,
            .right_box_top = -3432, .right_box_bottom = -3568,
            .right_box_left = 3312, .right_box_right = 3454,
            .left_box_top = -3520, .left_box_bottom = -3568,
            .left_box_left = 3352, .left_box_right = 3448,
            .right_child = 32913, .left_child = 32914
            },
     {
            .split_x = 3408, .split_y = -3432,
            .split_dx = -96, .split_dy = -64,
            .right_box_top = -3320, .right_box_bottom = -3496,
            .right_box_left = 3242, .right_box_right = 3408,
            .left_box_top = -3432, .left_box_bottom = -3568,
            .left_box_left = 3312, .left_box_right = 3454,
            .right_child = 32912, .left_child = 139
            },
     {
            .split_x = 3312, .split_y = -3496,
            .split_dx = 40, .split_dy = -72,
            .right_box_top = -3370, .right_box_bottom = -3616,
            .right_box_left = 3104, .right_box_right = 3353,
            .left_box_top = -3320, .left_box_bottom = -3568,
            .left_box_left = 3242, .left_box_right = 3454,
            .right_child = 138, .left_child = 140
            },
     {
            .split_x = 3454, .split_y = -3496,
            .split_dx = -6, .split_dy = -23,
            .right_box_top = -3320, .right_box_bottom = -3616,
            .right_box_left = 3104, .right_box_right = 3454,
            .left_box_top = -3520, .left_box_bottom = -3574,
            .left_box_left = 3448, .left_box_right = 3512,
            .right_child = 141, .left_child = 32915
            },
     {
            .split_x = 3264, .split_y = -3616,
            .split_dx = -160, .split_dy = 64,
            .right_box_top = -3320, .right_box_bottom = -3616,
            .right_box_left = 3104, .right_box_right = 3512,
            .left_box_top = -3552, .left_box_bottom = -3648,
            .left_box_left = 3047, .left_box_right = 3264,
            .right_child = 142, .left_child = 32916
            },
     {
            .split_x = 2752, .split_y = -3048,
            .split_dx = 224, .split_dy = -24,
            .right_box_top = -3048, .right_box_bottom = -3296,
            .right_box_left = 2752, .right_box_right = 2976,
            .left_box_top = -2902, .left_box_bottom = -3072,
            .left_box_left = 2752, .left_box_right = 3008,
            .right_child = 32917, .left_child = 32918
            },
     {
            .split_x = 3112, .split_y = -3360,
            .split_dx = -168, .split_dy = -176,
            .right_box_top = -3232, .right_box_bottom = -3536,
            .right_box_left = 2752, .right_box_right = 3112,
            .left_box_top = -3360, .left_box_bottom = -3626,
            .left_box_left = 2944, .left_box_right = 3215,
            .right_child = 32919, .left_child = 32920
            },
     {
            .split_x = 2984, .split_y = -3200,
            .split_dx = 152, .split_dy = 128,
            .right_box_top = -3072, .right_box_bottom = -3320,
            .right_box_left = 2984, .right_box_right = 3280,
            .left_box_top = -3072, .left_box_bottom = -3200,
            .left_box_left = 2887, .left_box_right = 3136,
            .right_child = 32921, .left_child = 32922
            },
     {
            .split_x = 3280, .split_y = -3320,
            .split_dx = -296, .split_dy = 120,
            .right_box_top = -3072, .right_box_bottom = -3320,
            .right_box_left = 2887, .right_box_right = 3280,
            .left_box_top = -3160, .left_box_bottom = -3404,
            .left_box_left = 2816, .left_box_right = 3280,
            .right_child = 146, .left_child = 32923
            },
     {
            .split_x = 2816, .split_y = -3232,
            .split_dx = 296, .split_dy = -128,
            .right_box_top = -3232, .right_box_bottom = -3626,
            .right_box_left = 2752, .right_box_right = 3215,
            .left_box_top = -3072, .left_box_bottom = -3404,
            .left_box_left = 2816, .left_box_right = 3280,
            .right_child = 145, .left_child = 147
            },
     {
            .split_x = 2976, .split_y = -3072,
            .split_dx = -160, .split_dy = -160,
            .right_box_top = -2902, .right_box_bottom = -3296,
            .right_box_left = 2752, .right_box_right = 3008,
            .left_box_top = -3072, .left_box_bottom = -3626,
            .left_box_left = 2752, .left_box_right = 3280,
            .right_child = 144, .left_child = 148
            },
     {
            .split_x = 3104, .split_y = -3552,
            .split_dx = 176, .split_dy = 232,
            .right_box_top = -3320, .right_box_bottom = -3648,
            .right_box_left = 3047, .right_box_right = 3512,
            .left_box_top = -2902, .left_box_bottom = -3626,
            .left_box_left = 2752, .left_box_right = 3280,
            .right_child = 143, .left_child = 149
            },
     {
            .split_x = 3304, .split_y = -3040,
            .split_dx = 96, .split_dy = -112,
            .right_box_top = -3040, .right_box_bottom = -3432,
            .right_box_left = 3136, .right_box_right = 3472,
            .left_box_top = -3040, .left_box_bottom = -3152,
            .left_box_left = 3304, .left_box_right = 3400,
            .right_child = 32924, .left_child = 32925
            },
     {
            .split_x = 3472, .split_y = -3432,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -3040, .right_box_bottom = -3432,
            .right_box_left = 3136, .right_box_right = 3472,
            .left_box_top = -3432, .left_box_bottom = -3496,
            .left_box_left = 3408, .left_box_right = 3472,
            .right_child = 151, .left_child = 32926
            },
     {
            .split_x = 3136, .split_y = -3072,
            .split_dx = 168, .split_dy = 32,
            .right_box_top = -3040, .right_box_bottom = -3496,
            .right_box_left = 3136, .right_box_right = 3472,
            .left_box_top = -2944, .left_box_bottom = -3072,
            .left_box_left = 3048, .left_box_right = 3304,
            .right_child = 152, .left_child = 32927
            },
     {
            .split_x = 3304, .split_y = -3040,
            .split_dx = 16, .split_dy = 0,
            .right_box_top = -3040, .right_box_bottom = -3040,
            .right_box_left = 3304, .right_box_right = 3320,
            .left_box_top = -2939, .left_box_bottom = -3040,
            .left_box_left = 3320, .left_box_right = 3345,
            .right_child = 32929, .left_child = 32930
            },
     {
            .split_x = 3048, .split_y = -2880,
            .split_dx = 0, .split_dy = -64,
            .right_box_top = -2880, .right_box_bottom = -2944,
            .right_box_left = 3008, .right_box_right = 3048,
            .left_box_top = -2939, .left_box_bottom = -3040,
            .left_box_left = 3304, .left_box_right = 3345,
            .right_child = 32928, .left_child = 154
            },
     {
            .split_x = 3048, .split_y = -2944,
            .split_dx = 256, .split_dy = -96,
            .right_box_top = -2944, .right_box_bottom = -3496,
            .right_box_left = 3048, .right_box_right = 3472,
            .left_box_top = -2880, .left_box_bottom = -3040,
            .left_box_left = 3008, .left_box_right = 3345,
            .right_child = 153, .left_child = 155
            },
     {
            .split_x = 3680, .split_y = -3392,
            .split_dx = 0, .split_dy = -154,
            .right_box_top = -3264, .right_box_bottom = -3567,
            .right_box_left = 3552, .right_box_right = 3680,
            .left_box_top = -3144, .left_box_bottom = -3392,
            .left_box_left = 3680, .left_box_right = 3808,
            .right_child = 32931, .left_child = 32932
            },
     {
            .split_x = 3648, .split_y = -3264,
            .split_dx = -152, .split_dy = 232,
            .right_box_top = -3032, .right_box_bottom = -3264,
            .right_box_left = 3496, .right_box_right = 3738,
            .left_box_top = -3032, .left_box_bottom = -3152,
            .left_box_left = 3400, .left_box_right = 3456,
            .right_child = 32934, .left_child = 32935
            },
     {
            .split_x = 3496, .split_y = -3032,
            .split_dx = -40, .split_dy = 0,
            .right_box_top = -2880, .right_box_bottom = -3032,
            .right_box_left = 3345, .right_box_right = 3672,
            .left_box_top = -3032, .left_box_bottom = -3264,
            .left_box_left = 3400, .left_box_right = 3738,
            .right_child = 32933, .left_child = 158
            },
     {
            .split_x = 3552, .split_y = -3392,
            .split_dx = 96, .split_dy = 128,
            .right_box_top = -3144, .right_box_bottom = -3567,
            .right_box_left = 3552, .right_box_right = 3808,
            .left_box_top = -2880, .left_box_bottom = -3264,
            .left_box_left = 3345, .left_box_right = 3738,
            .right_child = 157, .left_child = 159
            },
     {
            .split_x = 3400, .split_y = -3152,
            .split_dx = 72, .split_dy = -280,
            .right_box_top = -2880, .right_box_bottom = -3496,
            .right_box_left = 3008, .right_box_right = 3472,
            .left_box_top = -2880, .left_box_bottom = -3567,
            .left_box_left = 3345, .left_box_right = 3808,
            .right_child = 156, .left_child = 160
            },
     {
            .split_x = 3472, .split_y = -3520,
            .split_dx = 40, .split_dy = -54,
            .right_box_top = -2902, .right_box_bottom = -3648,
            .right_box_left = 2752, .right_box_right = 3512,
            .left_box_top = -2880, .left_box_bottom = -3567,
            .left_box_left = 3008, .left_box_right = 3808,
            .right_child = 150, .left_child = 161
            },
     {
            .split_x = 2944, .split_y = -3536,
            .split_dx = 128, .split_dy = -112,
            .right_box_top = -3536, .right_box_bottom = -3648,
            .right_box_left = 2944, .right_box_right = 3072,
            .left_box_top = -2880, .left_box_bottom = -3648,
            .left_box_left = 2752, .left_box_right = 3808,
            .right_child = 32908, .left_child = 162
            },
     {
            .split_x = 2752, .split_y = -3360,
            .split_dx = 192, .split_dy = -176,
            .right_box_top = -3360, .right_box_bottom = -3669,
            .right_box_left = 2752, .right_box_right = 2944,
            .left_box_top = -2880, .left_box_bottom = -3648,
            .left_box_left = 2752, .left_box_right = 3808,
            .right_child = 136, .left_child = 163
            },
     {
            .split_x = 3048, .split_y = -2880,
            .split_dx = -296, .split_dy = -168,
            .right_box_top = -2560, .right_box_bottom = -3048,
            .right_box_left = 2752, .right_box_right = 3048,
            .left_box_top = -2880, .left_box_bottom = -3669,
            .left_box_left = 2752, .left_box_right = 3808,
            .right_child = 134, .left_child = 164
            },
     {
            .split_x = 2208, .split_y = -2304,
            .split_dx = 0, .split_dy = -256,
            .right_box_top = -2304, .right_box_bottom = -2560,
            .right_box_left = 2176, .right_box_right = 2208,
            .left_box_top = -2304, .left_box_bottom = -2560,
            .left_box_left = 2208, .left_box_right = 2304,
            .right_child = 32938, .left_child = 32939
            },
     {
            .split_x = 2336, .split_y = -2272,
            .split_dx = -160, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2272,
            .right_box_left = 2176, .right_box_right = 2336,
            .left_box_top = -2304, .left_box_bottom = -2560,
            .left_box_left = 2176, .left_box_right = 2304,
            .right_child = 32937, .left_child = 166
            },
     {
            .split_x = 2336, .split_y = -2560,
            .split_dx = 0, .split_dy = 288,
            .right_box_top = -2112, .right_box_bottom = -2560,
            .right_box_left = 2336, .right_box_right = 2496,
            .left_box_top = -2112, .left_box_bottom = -2560,
            .left_box_left = 2176, .left_box_right = 2336,
            .right_child = 32936, .left_child = 167
            },
     {
            .split_x = 2336, .split_y = -2592,
            .split_dx = 0, .split_dy = 32,
            .right_box_top = -2560, .right_box_bottom = -2752,
            .right_box_left = 2336, .right_box_right = 2496,
            .left_box_top = -2592, .left_box_bottom = -2752,
            .left_box_left = 2176, .left_box_right = 2336,
            .right_child = 32940, .left_child = 32941
            },
     {
            .split_x = 2304, .split_y = -2560,
            .split_dx = -96, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2560,
            .right_box_left = 2176, .right_box_right = 2496,
            .left_box_top = -2560, .left_box_bottom = -2752,
            .left_box_left = 2176, .left_box_right = 2496,
            .right_child = 168, .left_child = 169
            },
     {
            .split_x = 2176, .split_y = -2112,
            .split_dx = 320, .split_dy = 0,
            .right_box_top = -2112, .right_box_bottom = -2752,
            .right_box_left = 2176, .right_box_right = 2496,
            .left_box_top = -2048, .left_box_bottom = -2112,
            .left_box_left = 2176, .left_box_right = 2496,
            .right_child = 170, .left_child = 32942
            },
     {
            .split_x = 2624, .split_y = -2784,
            .split_dx = -104, .split_dy = 96,
            .right_box_top = -2560, .right_box_bottom = -2784,
            .right_box_left = 2496, .right_box_right = 2752,
            .left_box_top = -2665, .left_box_bottom = -2688,
            .left_box_left = 2496, .left_box_right = 2520,
            .right_child = 32944, .left_child = 32945
            },
     {
            .split_x = 2624, .split_y = -2784,
            .split_dx = 128, .split_dy = 224,
            .right_box_top = -2560, .right_box_bottom = -2784,
            .right_box_left = 2624, .right_box_right = 2752,
            .left_box_top = -2560, .left_box_bottom = -2784,
            .left_box_left = 2496, .left_box_right = 2752,
            .right_child = 32943, .left_child = 172
            },
     {
            .split_x = 2520, .split_y = -2560,
            .split_dx = 232, .split_dy = 0,
            .right_box_top = -2560, .right_box_bottom = -2784,
            .right_box_left = 2496, .right_box_right = 2752,
            .left_box_top = -2048, .left_box_bottom = -2496,
            .left_box_left = 2496, .left_box_right = 2560,
            .right_child = 173, .left_child = 32946
            },
     {
            .split_x = 2496, .split_y = -2112,
            .split_dx = 0, .split_dy = -384,
            .right_box_top = -2048, .right_box_bottom = -2752,
            .right_box_left = 2176, .right_box_right = 2496,
            .left_box_top = -2048, .left_box_bottom = -2784,
            .left_box_left = 2496, .left_box_right = 2752,
            .right_child = 171, .left_child = 174
            },
     {
            .split_x = 2432, .split_y = -3112,
            .split_dx = 304, .split_dy = 0,
            .right_box_top = -3112, .right_box_bottom = -3360,
            .right_box_left = 2432, .right_box_right = 2736,
            .left_box_top = -3008, .left_box_bottom = -3112,
            .left_box_left = 2272, .left_box_right = 2432,
            .right_child = 32948, .left_child = 32949
            },
     {
            .split_x = 2240, .split_y = -2920,
            .split_dx = 32, .split_dy = -88,
            .right_box_top = -2920, .right_box_bottom = -3008,
            .right_box_left = 2176, .right_box_right = 2272,
            .left_box_top = -3008, .left_box_bottom = -3360,
            .left_box_left = 2272, .left_box_right = 2736,
            .right_child = 32947, .left_child = 176
            },
     {
            .split_x = 2736, .split_y = -3112,
            .split_dx = 0, .split_dy = -248,
            .right_box_top = -2920, .right_box_bottom = -3360,
            .right_box_left = 2176, .right_box_right = 2736,
            .left_box_top = -3112, .left_box_bottom = -3360,
            .left_box_left = 2736, .left_box_right = 2752,
            .right_child = 177, .left_child = 32950
            },
     {
            .split_x = 2736, .split_y = -3648,
            .split_dx = -496, .split_dy = 0,
            .right_box_top = -3360, .right_box_bottom = -3648,
            .right_box_left = 2240, .right_box_right = 2736,
            .left_box_top = -3648, .left_box_bottom = -3776,
            .left_box_left = 2240, .left_box_right = 2736,
            .right_child = 32951, .left_child = 32952
            },
     {
            .split_x = 2240, .split_y = -3776,
            .split_dx = -32, .split_dy = 96,
            .right_box_top = -3648, .right_box_bottom = -3776,
            .right_box_left = 2197, .right_box_right = 2240,
            .left_box_top = -3648, .left_box_bottom = -3680,
            .left_box_left = 2176, .left_box_right = 2208,
            .right_child = 32954, .left_child = 32955
            },
     {
            .split_x = 2240, .split_y = -3648,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -3648, .right_box_bottom = -3648,
            .right_box_left = 2176, .right_box_right = 2240,
            .left_box_top = -3648, .left_box_bottom = -3776,
            .left_box_left = 2176, .left_box_right = 2240,
            .right_child = 32953, .left_child = 180
            },
     {
            .split_x = 2240, .split_y = -3776,
            .split_dx = 0, .split_dy = 128,
            .right_box_top = -3360, .right_box_bottom = -3776,
            .right_box_left = 2240, .right_box_right = 2736,
            .left_box_top = -3648, .left_box_bottom = -3776,
            .left_box_left = 2176, .left_box_right = 2240,
            .right_child = 179, .left_child = 181
            },
     {
            .split_x = 2752, .split_y = -3360,
            .split_dx = -16, .split_dy = 0,
            .right_box_top = -2920, .right_box_bottom = -3360,
            .right_box_left = 2176, .right_box_right = 2752,
            .left_box_top = -3360, .left_box_bottom = -3776,
            .left_box_left = 2176, .left_box_right = 2736,
            .right_child = 178, .left_child = 182
            },
     {
            .split_x = 2752, .split_y = -2784,
            .split_dx = -128, .split_dy = 0,
            .right_box_top = -2048, .right_box_bottom = -2784,
            .right_box_left = 2176, .right_box_right = 2752,
            .left_box_top = -2920, .left_box_bottom = -3776,
            .left_box_left = 2176, .left_box_right = 2752,
            .right_child = 175, .left_child = 183
            },
     {
            .split_x = 2752, .split_y = -3584,
            .split_dx = 0, .split_dy = 224,
            .right_box_top = -2560, .right_box_bottom = -3669,
            .right_box_left = 2752, .right_box_right = 3808,
            .left_box_top = -2048, .left_box_bottom = -3776,
            .left_box_left = 2176, .left_box_right = 2752,
            .right_child = 165, .left_child = 184
            },
     {
            .split_x = 2856, .split_y = -4352,
            .split_dx = 0, .split_dy = 192,
            .right_box_top = -4160, .right_box_bottom = -4352,
            .right_box_left = 2856, .right_box_right = 2888,
            .left_box_top = -4160, .left_box_bottom = -4352,
            .left_box_left = 2688, .left_box_right = 2856,
            .right_child = 32957, .left_child = 32958
            },
     {
            .split_x = 2888, .split_y = -4352,
            .split_dx = 0, .split_dy = 32,
            .right_box_top = -4160, .right_box_bottom = -4352,
            .right_box_left = 2888, .right_box_right = 3104,
            .left_box_top = -4160, .left_box_bottom = -4352,
            .left_box_left = 2688, .left_box_right = 2888,
            .right_child = 32956, .left_child = 186
            },
     {
            .split_x = 2856, .split_y = -4352,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -4352, .right_box_bottom = -4384,
            .right_box_left = 2688, .right_box_right = 2856,
            .left_box_top = -4352, .left_box_bottom = -4384,
            .left_box_left = 2912, .left_box_right = 3104,
            .right_child = 32960, .left_child = 32961
            },
     {
            .split_x = 2856, .split_y = -4384,
            .split_dx = 56, .split_dy = 0,
            .right_box_top = -4384, .right_box_bottom = -4544,
            .right_box_left = 2688, .right_box_right = 3104,
            .left_box_top = -4352, .left_box_bottom = -4384,
            .left_box_left = 2688, .left_box_right = 3104,
            .right_child = 32959, .left_child = 188
            },
     {
            .split_x = 2912, .split_y = -4352,
            .split_dx = -24, .split_dy = 0,
            .right_box_top = -4160, .right_box_bottom = -4352,
            .right_box_left = 2688, .right_box_right = 3104,
            .left_box_top = -4352, .left_box_bottom = -4544,
            .left_box_left = 2688, .left_box_right = 3104,
            .right_child = 187, .left_child = 189
            },
     {
            .split_x = 3128, .split_y = -4320,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -4160, .right_box_bottom = -4352,
            .right_box_left = 3104, .right_box_right = 3128,
            .left_box_top = -4160, .left_box_bottom = -4352,
            .left_box_left = 3128, .left_box_right = 3160,
            .right_child = 32964, .left_child = 32965
            },
     {
            .split_x = 3104, .split_y = -4384,
            .split_dx = 56, .split_dy = 0,
            .right_box_top = -4384, .right_box_bottom = -4544,
            .right_box_left = 3104, .right_box_right = 3160,
            .left_box_top = -4160, .left_box_bottom = -4352,
            .left_box_left = 3104, .left_box_right = 3160,
            .right_child = 32963, .left_child = 191
            },
     {
            .split_x = 3160, .split_y = -4384,
            .split_dx = 0, .split_dy = 32,
            .right_box_top = -4160, .right_box_bottom = -4544,
            .right_box_left = 3160, .right_box_right = 3328,
            .left_box_top = -4160, .left_box_bottom = -4544,
            .left_box_left = 3104, .left_box_right = 3160,
            .right_child = 32962, .left_child = 192
            },
     {
            .split_x = 3104, .split_y = -4352,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -4160, .right_box_bottom = -4544,
            .right_box_left = 2688, .right_box_right = 3104,
            .left_box_top = -4160, .left_box_bottom = -4544,
            .left_box_left = 3104, .left_box_right = 3328,
            .right_child = 190, .left_child = 193
            },
     {
            .split_x = 2992, .split_y = -4592,
            .split_dx = 0, .split_dy = -8,
            .right_box_top = -4592, .right_box_bottom = -4600,
            .right_box_left = 2944, .right_box_right = 2992,
            .left_box_top = -4592, .left_box_bottom = -4600,
            .left_box_left = 2992, .left_box_right = 3024,
            .right_child = 32969, .left_child = 32970
            },
     {
            .split_x = 3024, .split_y = -4592,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -4544, .right_box_bottom = -4592,
            .right_box_left = 2944, .right_box_right = 3024,
            .left_box_top = -4592, .left_box_bottom = -4600,
            .left_box_left = 2944, .left_box_right = 3024,
            .right_child = 32968, .left_child = 195
            },
     {
            .split_x = 3024, .split_y = -4600,
            .split_dx = 0, .split_dy = 8,
            .right_box_top = -4544, .right_box_bottom = -4600,
            .right_box_left = 3024, .right_box_right = 3072,
            .left_box_top = -4544, .left_box_bottom = -4600,
            .left_box_left = 2944, .left_box_right = 3024,
            .right_child = 32967, .left_child = 196
            },
     {
            .split_x = 2992, .split_y = -4600,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -4600, .right_box_bottom = -4608,
            .right_box_left = 2944, .right_box_right = 3072,
            .left_box_top = -4544, .left_box_bottom = -4600,
            .left_box_left = 2944, .left_box_right = 3072,
            .right_child = 32966, .left_child = 197
            },
     {
            .split_x = 3040, .split_y = -4632,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -4608, .right_box_bottom = -4632,
            .right_box_left = 2976, .right_box_right = 3040,
            .left_box_top = -4632, .left_box_bottom = -4648,
            .left_box_left = 2976, .left_box_right = 3040,
            .right_child = 32971, .left_child = 32972
            },
     {
            .split_x = 3072, .split_y = -4608,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -4544, .right_box_bottom = -4608,
            .right_box_left = 2944, .right_box_right = 3072,
            .left_box_top = -4608, .left_box_bottom = -4648,
            .left_box_left = 2976, .left_box_right = 3040,
            .right_child = 198, .left_child = 199
            },
     {
            .split_x = 2992, .split_y = -4840,
            .split_dx = 0, .split_dy = -8,
            .right_box_top = -4840, .right_box_bottom = -4848,
            .right_box_left = 2912, .right_box_right = 2992,
            .left_box_top = -4840, .left_box_bottom = -4848,
            .left_box_left = 2992, .left_box_right = 3024,
            .right_child = 32976, .left_child = 32977
            },
     {
            .split_x = 2992, .split_y = -4848,
            .split_dx = 32, .split_dy = 0,
            .right_box_top = -4848, .right_box_bottom = -4864,
            .right_box_left = 2912, .right_box_right = 3024,
            .left_box_top = -4840, .left_box_bottom = -4848,
            .left_box_left = 2912, .left_box_right = 3024,
            .right_child = 32975, .left_child = 201
            },
     {
            .split_x = 3024, .split_y = -4848,
            .split_dx = 0, .split_dy = 8,
            .right_box_top = -4840, .right_box_bottom = -4864,
            .right_box_left = 3024, .right_box_right = 3104,
            .left_box_top = -4840, .left_box_bottom = -4864,
            .left_box_left = 2912, .left_box_right = 3024,
            .right_child = 32974, .left_child = 202
            },
     {
            .split_x = 3024, .split_y = -4840,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -4672, .right_box_bottom = -4840,
            .right_box_left = 2912, .right_box_right = 3104,
            .left_box_top = -4840, .left_box_bottom = -4864,
            .left_box_left = 2912, .left_box_right = 3104,
            .right_child = 32973, .left_child = 203
            },
     {
            .split_x = 3040, .split_y = -4672,
            .split_dx = 64, .split_dy = 0,
            .right_box_top = -4672, .right_box_bottom = -4864,
            .right_box_left = 2912, .right_box_right = 3104,
            .left_box_top = -4648, .left_box_bottom = -4672,
            .left_box_left = 2976, .left_box_right = 3040,
            .right_child = 204, .left_child = 32978
            },
     {
            .split_x = 3040, .split_y = -4648,
            .split_dx = -64, .split_dy = 0,
            .right_box_top = -4544, .right_box_bottom = -4648,
            .right_box_left = 2944, .right_box_right = 3072,
            .left_box_top = -4648, .left_box_bottom = -4864,
            .left_box_left = 2912, .left_box_right = 3104,
            .right_child = 200, .left_child = 205
            },
     {
            .split_x = 2944, .split_y = -4544,
            .split_dx = -256, .split_dy = 0,
            .right_box_top = -4160, .right_box_bottom = -4544,
            .right_box_left = 2688, .right_box_right = 3328,
            .left_box_top = -4544, .left_box_bottom = -4864,
            .left_box_left = 2912, .left_box_right = 3104,
            .right_child = 194, .left_child = 206
            },
     {
            .split_x = 2784, .split_y = -3776,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3776, .right_box_bottom = -3904,
            .right_box_left = 2752, .right_box_right = 2784,
            .left_box_top = -3776, .left_box_bottom = -3904,
            .left_box_left = 2784, .left_box_right = 2816,
            .right_child = 32980, .left_child = 32981
            },
     {
            .split_x = 2816, .split_y = -3904,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3776, .right_box_bottom = -3904,
            .right_box_left = 2752, .right_box_right = 2816,
            .left_box_top = -4128, .left_box_bottom = -4128,
            .left_box_left = 2776, .left_box_right = 2816,
            .right_child = 208, .left_child = 32982
            },
     {
            .split_x = 2752, .split_y = -3776,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3776, .right_box_bottom = -3904,
            .right_box_left = 2688, .right_box_right = 2752,
            .left_box_top = -3776, .left_box_bottom = -4128,
            .left_box_left = 2752, .left_box_right = 2816,
            .right_child = 32979, .left_child = 209
            },
     {
            .split_x = 2848, .split_y = -3776,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3776, .right_box_bottom = -3904,
            .right_box_left = 2816, .right_box_right = 2848,
            .left_box_top = -3776, .left_box_bottom = -3904,
            .left_box_left = 2848, .left_box_right = 2880,
            .right_child = 32983, .left_child = 32984
            },
     {
            .split_x = 2880, .split_y = -3904,
            .split_dx = -32, .split_dy = 0,
            .right_box_top = -3776, .right_box_bottom = -3904,
            .right_box_left = 2816, .right_box_right = 2880,
            .left_box_top = -4128, .left_box_bottom = -4160,
            .left_box_left = 2816, .left_box_right = 2856,
            .right_child = 211, .left_child = 32985
            },
     {
            .split_x = 2880, .split_y = -3776,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3776, .right_box_bottom = -4160,
            .right_box_left = 2816, .right_box_right = 2880,
            .left_box_top = -3776, .left_box_bottom = -3904,
            .left_box_left = 2880, .left_box_right = 2912,
            .right_child = 212, .left_child = 32986
            },
     {
            .split_x = 2816, .split_y = -3776,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3776, .right_box_bottom = -4128,
            .right_box_left = 2688, .right_box_right = 2816,
            .left_box_top = -3776, .left_box_bottom = -4160,
            .left_box_left = 2816, .left_box_right = 2912,
            .right_child = 210, .left_child = 213
            },
     {
            .split_x = 2240, .split_y = -4096,
            .split_dx = 0, .split_dy = 128,
            .right_box_top = -3968, .right_box_bottom = -4096,
            .right_box_left = 2240, .right_box_right = 2368,
            .left_box_top = -3920, .left_box_bottom = -4096,
            .left_box_left = 2176, .left_box_right = 2240,
            .right_child = 32987, .left_child = 32988
            },
     {
            .split_x = 2688, .split_y = -3920,
            .split_dx = -16, .split_dy = 0,
            .right_box_top = -3792, .right_box_bottom = -3920,
            .right_box_left = 2435, .right_box_right = 2688,
            .left_box_top = -3920, .left_box_bottom = -4096,
            .left_box_left = 2368, .left_box_right = 2672,
            .right_child = 32990, .left_child = 32991
            },
     {
            .split_x = 2688, .split_y = -4128,
            .split_dx = 88, .split_dy = 0,
            .right_box_top = -4128, .right_box_bottom = -4160,
            .right_box_left = 2688, .right_box_right = 2776,
            .left_box_top = -3792, .left_box_bottom = -4096,
            .left_box_left = 2368, .left_box_right = 2688,
            .right_child = 32989, .left_child = 216
            },
     {
            .split_x = 2632, .split_y = -3792,
            .split_dx = 56, .split_dy = -128,
            .right_box_top = -3792, .right_box_bottom = -4160,
            .right_box_left = 2368, .right_box_right = 2776,
            .left_box_top = -3776, .left_box_bottom = -3920,
            .left_box_left = 2632, .left_box_right = 2720,
            .right_child = 217, .left_child = 32992
            },
     {
            .split_x = 2368, .split_y = -3968,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3920, .right_box_bottom = -4096,
            .right_box_left = 2176, .right_box_right = 2368,
            .left_box_top = -3776, .left_box_bottom = -4160,
            .left_box_left = 2368, .left_box_right = 2776,
            .right_child = 215, .left_child = 218
            },
     {
            .split_x = 2720, .split_y = -3904,
            .split_dx = -32, .split_dy = 128,
            .right_box_top = -3776, .right_box_bottom = -4160,
            .right_box_left = 2688, .right_box_right = 2912,
            .left_box_top = -3776, .left_box_bottom = -4160,
            .left_box_left = 2176, .left_box_right = 2776,
            .right_child = 214, .left_child = 219
            },
     {
            .split_x = 3072, .split_y = -4000,
            .split_dx = -128, .split_dy = 0,
            .right_box_top = -3648, .right_box_bottom = -4000,
            .right_box_left = 2944, .right_box_right = 3072,
            .left_box_top = -4000, .left_box_bottom = -4016,
            .left_box_left = 2944, .left_box_right = 3072,
            .right_child = 32993, .left_child = 32994
            },
     {
            .split_x = 2944, .split_y = -3776,
            .split_dx = 0, .split_dy = 106,
            .right_box_top = -3648, .right_box_bottom = -4016,
            .right_box_left = 2944, .right_box_right = 3072,
            .left_box_top = -3776, .left_box_bottom = -3904,
            .left_box_left = 2912, .left_box_right = 2944,
            .right_child = 221, .left_child = 32995
            },
     {
            .split_x = 2944, .split_y = -4032,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -4032, .right_box_bottom = -4160,
            .right_box_left = 2912, .right_box_right = 3104,
            .left_box_top = -4016, .left_box_bottom = -4032,
            .left_box_left = 2944, .left_box_right = 3072,
            .right_child = 32996, .left_child = 32997
            },
     {
            .split_x = 3072, .split_y = -4016,
            .split_dx = -128, .split_dy = 0,
            .right_box_top = -3648, .right_box_bottom = -4016,
            .right_box_left = 2912, .right_box_right = 3072,
            .left_box_top = -4016, .left_box_bottom = -4160,
            .left_box_left = 2912, .left_box_right = 3104,
            .right_child = 222, .left_child = 223
            },
     {
            .split_x = 3200, .split_y = -4128,
            .split_dx = 128, .split_dy = 0,
            .right_box_top = -4128, .right_box_bottom = -4160,
            .right_box_left = 3160, .right_box_right = 3328,
            .left_box_top = -3744, .left_box_bottom = -3968,
            .left_box_left = 3200, .left_box_right = 3328,
            .right_child = 32998, .left_child = 32999
            },
     {
            .split_x = 3328, .split_y = -3744,
            .split_dx = 32, .split_dy = 96,
            .right_box_top = -3574, .right_box_bottom = -3968,
            .right_box_left = 3328, .right_box_right = 3520,
            .left_box_top = -3601, .left_box_bottom = -3648,
            .left_box_left = 3353, .left_box_right = 3360,
            .right_child = 33000, .left_child = 33001
            },
     {
            .split_x = 3328, .split_y = -4128,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -3744, .right_box_bottom = -4160,
            .right_box_left = 3160, .right_box_right = 3328,
            .left_box_top = -3574, .left_box_bottom = -3968,
            .left_box_left = 3328, .left_box_right = 3520,
            .right_child = 225, .left_child = 226
            },
     {
            .split_x = 3584, .split_y = -3840,
            .split_dx = 0, .split_dy = -64,
            .right_box_top = -3840, .right_box_bottom = -3904,
            .right_box_left = 3520, .right_box_right = 3584,
            .left_box_top = -3840, .left_box_bottom = -3904,
            .left_box_left = 3584, .left_box_right = 3680,
            .right_child = 33002, .left_child = 33003
            },
     {
            .split_x = 3584, .split_y = -3840,
            .split_dx = 32, .split_dy = 64,
            .right_box_top = -3776, .right_box_bottom = -3840,
            .right_box_left = 3584, .right_box_right = 3616,
            .left_box_top = -3546, .left_box_bottom = -3776,
            .left_box_left = 3556, .left_box_right = 3680,
            .right_child = 33004, .left_child = 33005
            },
     {
            .split_x = 3520, .split_y = -3840,
            .split_dx = 16, .split_dy = 0,
            .right_box_top = -3840, .right_box_bottom = -3904,
            .right_box_left = 3520, .right_box_right = 3680,
            .left_box_top = -3546, .left_box_bottom = -3840,
            .left_box_left = 3556, .left_box_right = 3680,
            .right_child = 228, .left_child = 229
            },
     {
            .split_x = 3680, .split_y = -3546,
            .split_dx = 0, .split_dy = -5,
            .right_box_top = -3546, .right_box_bottom = -3904,
            .right_box_left = 3520, .right_box_right = 3680,
            .left_box_top = -3552, .left_box_bottom = -3904,
            .left_box_left = 3680, .left_box_right = 3744,
            .right_child = 230, .left_child = 33006
            },
     {
            .split_x = 3520, .split_y = -3584,
            .split_dx = 0, .split_dy = -256,
            .right_box_top = -3574, .right_box_bottom = -4160,
            .right_box_left = 3160, .right_box_right = 3520,
            .left_box_top = -3546, .left_box_bottom = -3904,
            .left_box_left = 3520, .left_box_right = 3744,
            .right_child = 227, .left_child = 231
            },
     {
            .split_x = 3104, .split_y = -4128,
            .split_dx = 0, .split_dy = -32,
            .right_box_top = -3648, .right_box_bottom = -4160,
            .right_box_left = 2912, .right_box_right = 3104,
            .left_box_top = -3546, .left_box_bottom = -4160,
            .left_box_left = 3160, .left_box_right = 3744,
            .right_child = 224, .left_child = 232
            },
     {
            .split_x = 2912, .split_y = -3776,
            .split_dx = 0, .split_dy = -128,
            .right_box_top = -3776, .right_box_bottom = -4160,
            .right_box_left = 2176, .right_box_right = 2912,
            .left_box_top = -3546, .left_box_bottom = -4160,
            .left_box_left = 2912, .left_box_right = 3744,
            .right_child = 220, .left_child = 233
            },
     {
            .split_x = 2888, .split_y = -4160,
            .split_dx = 24, .split_dy = 0,
            .right_box_top = -4160, .right_box_bottom = -4864,
            .right_box_left = 2688, .right_box_right = 3328,
            .left_box_top = -3546, .left_box_bottom = -4160,
            .left_box_left = 2176, .left_box_right = 3744,
            .right_child = 207, .left_child = 234
            },
     {
            .split_x = 3264, .split_y = -3616,
            .split_dx = -192, .split_dy = -32,
            .right_box_top = -2048, .right_box_bottom = -3776,
            .right_box_left = 2176, .right_box_right = 3808,
            .left_box_top = -3546, .left_box_bottom = -4864,
            .left_box_left = 2176, .left_box_right = 3744,
            .right_child = 185, .left_child = 235
            },
     {
            .split_x = 2176, .split_y = -2304,
            .split_dx = 0, .split_dy = -256,
            .right_box_top = -2048, .right_box_bottom = -4064,
            .right_box_left = -768, .right_box_right = 2176,
            .left_box_top = -2048, .left_box_bottom = -4864,
            .left_box_left = 2176, .left_box_right = 3808,
            .right_child = 131, .left_child = 236
            },
 };

const sector sectors[88] = {
    {
            .floor_height = -80, .ceil_height = 216,
            .floor_texture = "NUKAGE3", .ceil_texture = "F_SKY1",
            .light_level = 255, .sector_special = 7,
            .sector_tag = 0
            },
     {
            .floor_height = -56, .ceil_height = 216,
            .floor_texture = "FLOOR7_1", .ceil_texture = "F_SKY1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 0,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL5_1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 4
            },
     {
            .floor_height = 8, .ceil_height = 192,
            .floor_texture = "FLAT5_5", .ceil_texture = "FLAT5_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 0,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLAT20",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 3
            },
     {
            .floor_height = 8, .ceil_height = 192,
            .floor_texture = "FLAT5_5", .ceil_texture = "FLAT5_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -136, .ceil_height = -40,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -120, .ceil_height = 16,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -104, .ceil_height = 16,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -88, .ceil_height = 16,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -72, .ceil_height = 16,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -56, .ceil_height = 24,
            .floor_texture = "FLOOR7_1", .ceil_texture = "F_SKY1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -56, .ceil_height = 64,
            .floor_texture = "FLOOR7_1", .ceil_texture = "F_SKY1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -56, .ceil_height = 16,
            .floor_texture = "FLOOR7_1", .ceil_texture = "CEIL5_2",
            .light_level = 176, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 32, .ceil_height = 88,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL5_1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 5
            },
     {
            .floor_height = 0, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 96,
            .floor_texture = "FLOOR4_8", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 96,
            .floor_texture = "FLOOR4_8", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 8, .ceil_height = 152,
            .floor_texture = "FLAT14", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 32, .ceil_height = 88,
            .floor_texture = "FLAT18", .ceil_texture = "CEIL5_1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 72,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 160, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 32, .ceil_height = 88,
            .floor_texture = "FLAT18", .ceil_texture = "CEIL5_1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 144,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 88,
            .floor_texture = "FLOOR4_8", .ceil_texture = "TLITE6_4",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 0,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLAT20",
            .light_level = 208, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -16, .ceil_height = 200,
            .floor_texture = "FLAT14", .ceil_texture = "CEIL3_5",
            .light_level = 224, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -8, .ceil_height = 120,
            .floor_texture = "FLAT14", .ceil_texture = "CEIL3_5",
            .light_level = 192, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 72,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 72,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 255, .sector_special = 1,
            .sector_tag = 0
            },
     {
            .floor_height = -8, .ceil_height = 120,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -8, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 8, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 24, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 40, .ceil_height = 184,
            .floor_texture = "STEP2", .ceil_texture = "TLITE6_1",
            .light_level = 255, .sector_special = 8,
            .sector_tag = 0
            },
     {
            .floor_height = 40, .ceil_height = 184,
            .floor_texture = "STEP2", .ceil_texture = "TLITE6_1",
            .light_level = 255, .sector_special = 8,
            .sector_tag = 0
            },
     {
            .floor_height = 40, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 56, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 72, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 128,
            .floor_texture = "FLOOR7_1", .ceil_texture = "F_SKY1",
            .light_level = 224, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 104, .ceil_height = 264,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 192, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 264,
            .floor_texture = "FLOOR7_1", .ceil_texture = "F_SKY1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 136, .ceil_height = 240,
            .floor_texture = "FLAT20", .ceil_texture = "FLAT20",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 128, .ceil_height = 264,
            .floor_texture = "FLOOR1_1", .ceil_texture = "FLOOR7_2",
            .light_level = 192, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 136, .ceil_height = 240,
            .floor_texture = "FLAT20", .ceil_texture = "FLAT20",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 136, .ceil_height = 240,
            .floor_texture = "FLAT20", .ceil_texture = "FLAT20",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 104, .ceil_height = 192,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 176, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 88, .ceil_height = 224,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR7_2",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 176,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -16, .ceil_height = 72,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 160, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -48, .ceil_height = 176,
            .floor_texture = "NUKAGE3", .ceil_texture = "CEIL3_5",
            .light_level = 144, .sector_special = 7,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 176,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 144, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -48, .ceil_height = 176,
            .floor_texture = "NUKAGE3", .ceil_texture = "CEIL3_5",
            .light_level = 192, .sector_special = 7,
            .sector_tag = 0
            },
     {
            .floor_height = -48, .ceil_height = 104,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR6_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 96, .ceil_height = 176,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 160, .sector_special = 0,
            .sector_tag = 1
            },
     {
            .floor_height = -24, .ceil_height = 176,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 192, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -48, .ceil_height = 176,
            .floor_texture = "NUKAGE3", .ceil_texture = "CEIL3_5",
            .light_level = 192, .sector_special = 7,
            .sector_tag = 0
            },
     {
            .floor_height = 104, .ceil_height = 184,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR6_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 16, .ceil_height = 152,
            .floor_texture = "FLAT14", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 24, .ceil_height = 152,
            .floor_texture = "FLAT14", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -8, .ceil_height = 72,
            .floor_texture = "FLOOR4_8", .ceil_texture = "CEIL3_5",
            .light_level = 160, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = 0, .ceil_height = 136,
            .floor_texture = "FLAT20", .ceil_texture = "FLAT20",
            .light_level = 192, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -56, .ceil_height = 24,
            .floor_texture = "FLOOR7_1", .ceil_texture = "F_SKY1",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 104,
            .floor_texture = "FLOOR5_2", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 12,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 48,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 72,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 56,
            .floor_texture = "FLOOR5_2", .ceil_texture = "FLAT23",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 48,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = -24,
            .floor_texture = "FLOOR5_2", .ceil_texture = "FLAT20",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 88,
            .floor_texture = "FLOOR5_2", .ceil_texture = "TLITE6_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 72,
            .floor_texture = "FLOOR5_2", .ceil_texture = "FLAT23",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 48,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -104, .ceil_height = 48,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -88, .ceil_height = 48,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -72, .ceil_height = 48,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -56, .ceil_height = 48,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -40, .ceil_height = 48,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 48,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -136, .ceil_height = -24,
            .floor_texture = "FLOOR5_1", .ceil_texture = "TLITE6_6",
            .light_level = 255, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -136, .ceil_height = -40,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -120, .ceil_height = 48,
            .floor_texture = "FLOOR5_1", .ceil_texture = "CEIL5_2",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 48,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = -24,
            .floor_texture = "FLOOR5_2", .ceil_texture = "FLAT5_5",
            .light_level = 144, .sector_special = 9,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = 48,
            .floor_texture = "FLOOR5_2", .ceil_texture = "CEIL3_5",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -24, .ceil_height = -24,
            .floor_texture = "FLOOR5_2", .ceil_texture = "FLAT20",
            .light_level = 128, .sector_special = 0,
            .sector_tag = 0
            },
     {
            .floor_height = -48, .ceil_height = 32,
            .floor_texture = "FLOOR4_8", .ceil_texture = "TLITE6_6",
            .light_level = 255, .sector_special = 9,
            .sector_tag = 0
            },
     {
            .floor_height = 104, .ceil_height = 184,
            .floor_texture = "FLOOR4_8", .ceil_texture = "FLOOR6_2",
            .light_level = 128, .sector_special = 9,
            .sector_tag = 2
            },
 };

const level e1m1 = {
       .things = things,
       .linedefs = linedefs,
       .sidedefs = sidedefs,
       .num_vertexes = 470,
       .vertexes = vertexes,
       .num_segs = 747,
       .segs = segs,
       .nodes = nodes,
       .sectors = sectors,
       .ssectors = ssectors
};