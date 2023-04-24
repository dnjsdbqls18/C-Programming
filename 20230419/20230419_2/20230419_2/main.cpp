/*
키보드에서 소문자 입력 받아 대문자로 출력하는 프로그램
학번 : 202315024
학과 : 미래모빌리티공학과
이름 : 원유빈
날짜 : 2023/04/24
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오:");
		scanf("%c", &letter); // 공백 문자 제외

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);

	}

	return 0;
}
