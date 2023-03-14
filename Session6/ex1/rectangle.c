#include "rectangle.h"
#include <stdint.h>
#include <stdlib.h>

typedef struct rectangle{
    int width;
    int height;
} rectangle;

rectangle_t rectangle_create(int width, int height) {
    rectangle_t _newRectangle = calloc(1, sizeof(rectangle));

    if(NULL == _newRectangle) {
        return NULL;
    }

    _newRectangle->width = width;
    _newRectangle->height = height;

    return _newRectangle;
}

void rectangle_destroy(rectangle_t self) {
    if(NULL != self) {
        free(self);
    }
}

int rectangle_get_area(rectangle_t self) {
    return self->width*self->height;
}

int rectangle_get_perimeter(rectangle_t self) {
    return (self->width*2) + (self->height*2);
}

void rectangle_print_rectangle_info(rectangle_t self) {
    printf("\nWidth: %d units \nHeight: %d units\nArea: %d units^2\nPerimeter: %d units\n", self->width, self->height, rectangle_get_area(self), rectangle_get_perimeter(self));
}

