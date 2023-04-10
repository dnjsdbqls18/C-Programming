#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define M_PI 3.141592

int main(void)
{
	double x = 1.0;
	double a = 0 ;

	a = x + M_PI;

    printf("x + PI = %lf", a);

	return 0;
    
}