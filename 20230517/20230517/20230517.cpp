#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 1. Ű���忡�� ������ �Է� �޾Ƽ� �Ҽ����� �Ҽ��� �ƴ����� �Ǻ��ϴ� ���α׷� �ǽ�
int get_integer(void)
{
	int n;

	printf("���� ������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	return n;
}
int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++) {
		if(n%i==0)
			return 0;
	}
	return 1;

}

int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d�� �Ҽ��Դϴ�\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�\n", n);
	return 0;
}
*/

/* 2.Ű���忡�� �Էµ� ���� ������ �ԷµǸ� �ٽ� �Է��� ���� �� �ֵ��� ���α׷��� ���׷��̵� �϶�
int get_integer(void)
{
	int n;

	do
	{
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &n);
	} while (n <= 0);
	// do while������ while()�� ��ȣ���� ��ȣ �����̸� ��� ���ư���.

	return n;
}
int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;

}

int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d�� �Ҽ��Դϴ�\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�\n", n);
	return 0;
}
*/

// 3. 1���� ����ڰ� �Է��� ���� ������ ��� �Ҽ��� ã���� �� ���α׷��� ���׷��̵� �϶�.
int get_integer(void)
{
	int n;

	do
	{
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &n);
	} while (n <= 0);
	// do while������ while()�� ��ȣ���� ��ȣ �����̸� ��� ���ư���.


	return n;
}
int is_prime(int n)
{
	int i;

	for (i = 1; i < n; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				break;
			}
			else if (i % j > 0) {
				printf("%d", i);
			}
		}
		printf("\n");
	}

	return i;

}

int main(void)
{
	int n;
	n = get_integer();

	printf("%d������ �Ҽ��� %d�Դϴ�\n", is_prime(n));

	return 0;
}