#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &a);

	if (a > 0)
	{
		printf("���� a = %d �Դϴ�", a);
	}
	else
	{
		printf("���� a = %d �Դϴ�", -a);
	}


	return 0;
}