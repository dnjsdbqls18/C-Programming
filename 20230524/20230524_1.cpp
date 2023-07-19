// 2023.05.24   �̷������Ƽ���а� 202315024 ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 1. ������ ���� ������ ����� �ϴ� �Լ����� �ۼ��ϰ�, ����ڷκ��� ������ ���� �Է¹��� �Ŀ� �ۼ��� �Լ����� �׽�Ʈ�Ͽ�����.

// (a) �־��� ������ ¦���̸� 1�� ��ȯ�ϰ� Ȧ���̸� 0�� ��ȯ�ϴ� �Լ� int even(int n)
// (b) �־��� ������ ���밪�� ���ϴ� �Լ� int absolute(int n)
// (c) �־��� ������ �����̸� -1��, ����̸� 1�� 0�̸� 0�� ��ȯ�ϴ� �Լ� int sign(int n)

int even(int n)
{
	if (n % 2 == 1)
	{
		return 0;
	}
	else if (n % 2 == 0)
	{
		return 1;
	}
}

int absolute(int n)
{
	if (n > 0)
	{
		return n;
	}
	else if (n < 0)
	{
		return -n;
	}
}

int sign(int n)
{
	if (n > 0)
	{
		return 1;
	}
	else if (n < 0)
	{
		return 0;
	}
	else if (n == 0)
	{
		return 0;
	}
}

int main(void)
{
	int n = 0;

	printf("���� �Է��Ͻÿ�:\n");
	scanf("%d", &n);

	printf("even : %d\n",even(n));
	printf("absolute : %d\n", absolute(n));
	printf("sign : %d\n", sign(n));

	return 0;
}