#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("나이를 입력하세요: ");
	scanf("%d", &a);

	if (a < 20)
	{
		printf("30%% 할인입니다.");
	}
	else
	{
		printf("정가입니다.");
	}

	return 0;
}