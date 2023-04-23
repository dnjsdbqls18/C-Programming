// 반복을 이용한 세제곱값구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;

	printf("정수를 입력하시요:");
	scanf("%d", &n);

	printf("=======================\n");
	printf("    i     i의 세제곱근\n");
	printf("=======================\n");
	
	for (int i = 1; i <= n; i++)  
		printf("    %5d     %5d\n",i,i*i*i);

	

	return 0;

}