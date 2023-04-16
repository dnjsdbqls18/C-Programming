#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;
	double x = 0;
	double y = 0;

	printf("5개의 실수를 입력해주세요\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &e);

	
	x = a + b + c + d + e;
	printf("5개의 실수의 합은 %lf 입니다", x);
	
	y = x / 5;
	printf("5개의 실수의 평균은 %lf 입니다", y);

	return 0;


}