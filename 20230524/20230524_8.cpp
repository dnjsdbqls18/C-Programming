// 2023.05.24   미래모빌리티공학과 202315024 원유빈

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 8. 월급에 붙는 소득세를 계산하는 함수 get_tax(int income)를 작성하고 테스트하여보자.
//    소득 중 1000만 원까지는 8%를 적용하고 1000만 원이 넘는 소득은 10%를 과세한다고 하자.
//    소득 중에서 1000만 원을 넘는 부분만 10%가 적용된다.
//    사용자로부터 소득을 받아서 세금을 계산하는 프로그램을 작성하라.

int get_tax(int income)
{
	if (income <= 1000)
	{
		income = income * 0.08;
		return income;
    }
	else
	{
		income = (1000 * 0.08) + ((income - 1000) * 0.1);
		return income;
	}
}

int main(void)
{
	int a = 0;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &a);

	printf("소득세는 %d입니다.", get_tax(a));

	return 0;
}