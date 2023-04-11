#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0.0;
	double b = 0.0;

	printf("1일차 체감온도를 입력하세요:");
	scanf("%lf", &a);

	printf("2일차 체감온도를 입력하세요:");
	scanf("%lf", &b);

	if(33 <= a <35 && 33 <= b < 35)
	{
		printf("폭염주의보입니다");
	}
	else if(a >= 35 && b >= 35)
	{
		printf("폭염경보입니다");
	}
	return 0;
}