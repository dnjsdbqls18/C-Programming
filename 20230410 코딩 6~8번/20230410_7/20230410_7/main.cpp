#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;
	double b;

	printf("1���� ü���µ��� �Է��ϼ���:");
	scanf("%lf", &a);

	printf("2���� ü���µ��� �Է��ϼ���:");
	scanf("%lf", &b);

	if(a >= 35 && b >= 35)
	{
		printf("�����溸�Դϴ�");
	}
	else if(a >= 33 && b >= 33)
	{
		printf("�������Ǻ��Դϴ�");
	}
	
	return 0;
}