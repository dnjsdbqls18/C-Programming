#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h> // bool, true, false가 정의된 헤더 파일

int main(void)
{
	bool a = 0;

	a = 10 > 5;

	// 1이면 참 0이면 거짓

	printf("%d \n", a);

	return 0;
}