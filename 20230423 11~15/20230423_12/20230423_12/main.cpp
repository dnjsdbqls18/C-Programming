// do...while 문을 이용한 메뉴
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;

	do   // 루프 몸체가 적어도 한번은 실행된다.
	{
		printf("1---새로만들기\n");
		printf("2---새로만들기\n");
		printf("3---새로만들기\n");
		printf("하나를 선택하시요:");
		scanf("%d", &i);
	} while (i < 1 || i>3);

	printf("선택된 메뉴 = %d\n",i);

	return 0;
}