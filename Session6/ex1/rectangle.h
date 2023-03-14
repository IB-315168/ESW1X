#pragma once

#include <stdlib.h>
#include <stdint.h>

typedef struct rectangle* rectangle_t;

rectangle_t rectangle_create(int width, int height);
void rectangle_destroy(rectangle_t self);
int rectangle_get_area(rectangle_t self);
int rectangle_get_perimeter(rectangle_t self);
void rectangle_print_rectangle_info(rectangle_t self);