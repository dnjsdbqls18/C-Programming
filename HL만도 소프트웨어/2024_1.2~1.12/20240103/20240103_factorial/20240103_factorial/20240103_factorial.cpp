#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main(void)
{
	int x = 0;
	long f;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("%d!�� %d�Դϴ�.", x, factorial(x));
	return 0;

}
