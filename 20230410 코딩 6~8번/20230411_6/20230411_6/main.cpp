#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &a);

	if (a < 20)
	{
		printf("30%% �����Դϴ�.");
	}
	else
	{
		printf("�����Դϴ�.");
	}

	return 0;
}