#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double fc, r, q1, q2;
	double k = 8.99 * pow(10, 9);

	printf("Fc�� ���ϱ� ���� r ,q1 ,q2 �� ���ʴ�� �Է��ϼ���. \n");
	scanf("%lf %lf %lf", &r, &q1, &q2);
	
	fc = k * q1 * q2 / (r * r);

	printf("fc = %.1lf N", fc);
}
