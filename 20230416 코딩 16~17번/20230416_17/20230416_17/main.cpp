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

	printf("5���� �Ǽ��� �Է����ּ���\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &e);

	
	x = a + b + c + d + e;
	printf("5���� �Ǽ��� ���� %lf �Դϴ�", x);
	
	y = x / 5;
	printf("5���� �Ǽ��� ����� %lf �Դϴ�", y);

	return 0;


}