#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i = 2000000000;
	int j = 3000000000;

	printf("i의 값은 %d 입니다\n", i);
	printf("j의 값은 %d 입니다\n", j);
	
	//int형은 4Byte (32bit)의 저장소를 갖는 변수이다. 컴퓨터는 이진수를 기본으로 하여 계산하기 때문에  2 ^ -31 ~ 2 ^ 31 - 1 까지만 나온다.
	
	return 0;


}