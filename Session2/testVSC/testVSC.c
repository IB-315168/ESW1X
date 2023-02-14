#include <stdio.h>
#include "hello.h"

int main() {
    char name[] = "";

    printf("What's your name?\n");
    scanf("%20s", &name);
    hello(name);
    return 0;
}