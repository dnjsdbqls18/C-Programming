#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	

	printf("���� �־��ּ���.:");
	scanf("%d", &a);

	if (a = 500)
	{
		printf("������� ���Խ��ϴ�.\n");
	}
	else if(a < 500)
	{
		printf("%d���� ��ȯ�Ǿ����ϴ�", a);
	}
	else
	{
		printf("���� �ʰ��߽��ϴ�");
	}

	return 0;
}