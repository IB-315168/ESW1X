#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "rectangle.h"

int main() {
    int width, height;

    printf("Type in properties of the rectangle\n");
    printf("Type in width:\n");
    scanf("%d", &width);
    printf("Type in height:\n");
    scanf("%d", &height);

    rectangle_t rectangle = rectangle_create(width, height);

    printf("Your rectangle: \n");
    rectangle_print_rectangle_info(rectangle);

    return 0;
}