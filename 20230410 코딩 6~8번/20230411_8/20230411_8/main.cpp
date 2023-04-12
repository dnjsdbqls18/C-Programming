#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	

	printf("돈을 넣어주세요.:");
	scanf("%d", &a);

	if (a = 500)
	{
		printf("음료수가 나왔습니다.\n");
	}
	else if(a < 500)
	{
		printf("%d원이 반환되었습니다", a);
	}
	else
	{
		printf("돈이 초과했습니다");
	}

	return 0;
}