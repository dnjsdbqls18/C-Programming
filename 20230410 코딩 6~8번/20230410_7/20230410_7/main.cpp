#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0.0;
	double b = 0.0;

	printf("1���� ü���µ��� �Է��ϼ���:");
	scanf("%lf", &a);

	printf("2���� ü���µ��� �Է��ϼ���:");
	scanf("%lf", &b);

	if(33 <= a <35 && 33 <= b < 35)
	{
		printf("�������Ǻ��Դϴ�");
	}
	else if(a >= 35 && b >= 35)
	{
		printf("�����溸�Դϴ�");
	}
	return 0;
}