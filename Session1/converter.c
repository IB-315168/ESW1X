#include<stdio.h>
/* print Fahrenheit-Celsius tablefor fahr = 0, 20, ..., 300 */
main()
{
	printf("=========================\n");
	printf("=       Converter       =\n");
	printf("=-----------------------=\n");
	printf("=                       =\n");
	printf("=       Fahrenheit      =\n");
	printf("=        Celsius        =\n");
	printf("=         Kelvin        =\n");
	printf("=                       =\n");
	printf("=========================\n");
	
	setbuf(stdout, NULL);
	int fahr, celsius, kelvin;
	int lower, upper, step;
	lower = 0;/* lower limit of temperature scale */
	upper = 300;/* upper limit */
	step = 20;/* step size */
	fahr = lower;
	
	printf("Fahr\tCelcius\tKelvin\n");
	
	while(fahr <= upper){
		celsius = 5* (fahr-32) / 9;
		kelvin = celsius + 273.15;
		printf("%d\t%d\t%d\n", fahr, celsius, kelvin);
		fahr = fahr+ step;
	}
}