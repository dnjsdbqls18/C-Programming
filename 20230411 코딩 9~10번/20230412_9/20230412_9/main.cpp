#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("숫자를 입력하세요:");
	scanf("%d", &a);

	if (a > 0)
	{
		printf("절댓값 a = %d 입니다", a);
	}
	else
	{
		printf("절댓값 a = %d 입니다", -a);
	}


	return 0;
}