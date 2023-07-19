// 2023.05.24   미래모빌리티공학과 202315024 원유빈

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 1. 다음과 같은 간단한 기능을 하는 함수들을 작성하고, 사용자로부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여보자.

// (a) 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
// (b) 주어진 정수의 절대값을 구하는 함수 int absolute(int n)
// (c) 주어진 정수가 음수이면 -1을, 양수이면 1을 0이면 0을 반환하는 함수 int sign(int n)

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

	printf("수를 입력하시오:\n");
	scanf("%d", &n);

	printf("even : %d\n",even(n));
	printf("absolute : %d\n", absolute(n));
	printf("sign : %d\n", sign(n));

	return 0;
}