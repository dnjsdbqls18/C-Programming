// 2023.05.24   미래모빌리티공학과 202315024 원유빈

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 11. 사용자와 컴퓨터가 주사위 게임을 한다고 하자. 
//     주사위를 각 3번씩 굴려서 주사위 점수를 합한다. 
//     합친 점수가 높은 쪽이 이긴다고 하자.

int dice()
{
	return 1 + rand() % 6;
}

int main(void)
{
	int player = 0;
	int computer = 0;
	int sum = 0;

	srand(time(NULL));

	printf("사용자의 주사위 : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", dice());
		player += dice();
    }
	printf("합: %d", player);
	printf("\n");

	printf("컴퓨터의 주사위 : ");
	for (int i = 0; i < 3; i++)
	{
	
		printf("%d ", dice());
		computer += dice();
    }
	printf("합: %d", computer);
	printf("\n");

	if (player > computer)
	{
		printf("사용자가 이겼습니다.");
	}
	else if (player < computer)
	{
		printf("컴퓨터가 이겼습니다.");
	}
	printf("\n");
	return 0;
}