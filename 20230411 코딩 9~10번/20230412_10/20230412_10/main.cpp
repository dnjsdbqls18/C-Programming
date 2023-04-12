#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("시험점수를 입력하세요:");
	scanf("%d", &a);

	if(a >= 90)
	{
		printf("A학점 입니다.");
	}
	else if(a >= 80)
	{
		printf("B학점 입니다.");
	}
	else if(a >= 70)
	{
		printf("C학점 입니다.");
	}
	else if(a >= 60)
	{
		printf("D학점 입니다.");
	}
	else
	{
		printf("F점 입니다.");
	}

	return 0;
}