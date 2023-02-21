#include <stdio.h>
#include "mystr.h"

int main() {
    char text[20];
    while(1 == 1) {
        scanf("%20s", &text);
        printf("%d\n", my_strlen(text));
    }
    return 0;
}