#include <stdio.h>

int main() {
    char name[] = "";

    printf("What's your name?\n");
    scanf("%20s", name);
    printf("Hello, %s\n", name);
    return 0;
}