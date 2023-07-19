#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 1. 키보드에서 정수를 입력 받아서 소수인지 소수가 아닌지를 판별하는 프로그램 실습
int get_integer(void)
{
	int n;

	printf("양의 정수를 입력하시오:");
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
		printf("%d은 소수입니다\n", n);
	else
		printf("%d은 소수가 아닙니다\n", n);
	return 0;
}
*/

/* 2.키보드에서 입력된 값이 음수가 입력되면 다시 입력을 받을 수 있도록 프로그램을 업그레이드 하라
int get_integer(void)
{
	int n;

	do
	{
		printf("양의 정수를 입력하시오:");
		scanf("%d", &n);
	} while (n <= 0);
	// do while문에서 while()에 괄호에는 괄호 조건이면 계속 돌아간다.

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
		printf("%d은 소수입니다\n", n);
	else
		printf("%d은 소수가 아닙니다\n", n);
	return 0;
}
*/

// 3. 1부터 사용자가 입력한 숫자 사이의 모든 소수를 찾도록 위 프로그램을 업그레이드 하라.
int get_integer(void)
{
	int n;

	do
	{
		printf("양의 정수를 입력하시오:");
		scanf("%d", &n);
	} while (n <= 0);
	// do while문에서 while()에 괄호에는 괄호 조건이면 계속 돌아간다.


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

	printf("%d까지의 소수는 %d입니다\n", is_prime(n));

	return 0;
}