#include <stdio.h>

int main() {
    /* 1. Read character and a number, print them in console. */
    char c;
    int i;
    printf("Type in character:\n");
    scanf("%c", &c);
    printf("Type in number:\n");
    scanf("%d", &i);
    printf("Your result: %c%d\n", c, i);

    /* 2. Read string, print it to the console */
    char text[20];
    printf("Type in string:\n");
    scanf("%20s", text);
    printf("Your result: %s\n", text);
}