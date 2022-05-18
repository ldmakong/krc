/*
 * Author : L. Makong
 * solution for exercise 1-4/chapter 1
 *
**/

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;   /*lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20;   /* step size */

        celsius = lower;
	printf("Celsius\tFahrenheit\n");
	while(celsius <= upper){
	    fahr = 32.0 + (9.0/5.0)*celsius ;
	    printf("%3.0f\t%6.1f\n", celsius, fahr);
	    celsius = celsius + step;
	}
	return 0;
}
