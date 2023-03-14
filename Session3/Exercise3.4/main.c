#include <stdio.h>
#include "mystr.h"

int main() {
    char text[20];

    char str1[20];
    char str2[20];

    char dest[20];
    char src[20];

    char dup[20];
    char* pDup;

    while(1 == 1) {
        // printf("-----------Length-----------\n");
        // printf("Type in word:\n");
        // scanf("%20s", &text);        
        // printf("Length: %d\n", my_strlen(&text));
        // printf("----------------------------\n\n");

        // printf("---------Comparison---------\n");
        // printf("Type in first word:\n");
        // scanf("%20s", &str1);
        // printf("Type in second word:\n");
        // scanf("%20s", &str2);
        // printf("Result: %d\n", my_strcmp(&str1, &str2));
        // printf("----------------------------\n\n");

        // printf("------------Copy------------\n");
        // printf("Type the word to be copied:\n");
        // scanf("%20s", &src);
        // my_strcpy(&dest, &src);
        // printf("Result: \n");
        // printf("Source: [%p]: %20s\n", &src, src);
        // printf("Destination: [%p]: %20s\n", &dest, dest);
        // printf("----------------------------\n\n");

        printf("----------Duplicate---------\n");
        printf("Type the word to be duplicated:\n");
        scanf("%20s", &dup);

        pDup = my_strdup(dup);

        printf("Result: \n");
        printf("Source: [%p]: %20s\n", &dup, dup);
        printf("Destination: [%p]: %20s\n", &pDup, *pDup);
        printf("----------------------------\n\n");
    }

    return 0;
}