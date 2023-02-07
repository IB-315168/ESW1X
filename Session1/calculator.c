#include <stdio.h>
#include "calc.h"

int main() {
	int a;
	int b;
	printf("Type in two integers to be calculated and confirm with Enter:\n");
	scanf("%d%d", &a, &b);
	printf("Results for %d and %d \n", a, b);
	printf("%d + %d = %d\n", a, b, calc_add(a, b));
	printf("%d - %d = %d\n", a, b, calc_sub(a, b));
	printf("%d * %d = %d\n", a, b, calc_mul(a, b));
	printf("%d / %d = %d\n", a, b, calc_div(a, b));
	return 0;
}