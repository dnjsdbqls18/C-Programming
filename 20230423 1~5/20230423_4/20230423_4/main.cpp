#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	i = 1;
	sum = 0;
	
	while (i <= n)
	{
		sum += i;    // sum = sum + 1;�� ����.
		i++;         // i= i + 1�� ����.

	}

	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);

	return 0;
}
