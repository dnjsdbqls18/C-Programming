/*
0~99 사이의 숫자 맞추는 게임
학번 : 202315024
학과 : 미래모빌리티공학과
이름 : 원유빈
날짜 : 2023/04/24
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); // 난수 발생기 시드 설정

	//정답을 난수로 발생한다.
	int guess, answer;
	int tries = 0;
	answer = rand() % 100 + 1;
	// 반복 구조
	do {
		printf("정답을 추측하여 보시요:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)  // 사용자가 입력한 정수가 정답보다 높으면
			printf("HIGH\n");
		if (guess < answer)  // 사용자가 입력한 정수가 정답보다 낮으면
			printf("LOW\n");
	} while (guess != answer);

	printf("축하드립니다. 시도횟수=%d\n", tries);
	return 0;
}