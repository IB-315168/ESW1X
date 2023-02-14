#include <stdio.h>

int main() {
    int a, b;
    a = 7;
    b = 3;

    printf("Result of %d / %d = %.2f\n", a, b, (double) a/b);
    printf("Result of %d %% %d = %d\n", a, b , a%b);
    return 0;
}