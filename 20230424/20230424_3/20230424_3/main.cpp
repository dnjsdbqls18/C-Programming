/*
피보나치 수열을 생성하여 출력하는 프로그램을 작성하여 보자
학번 : 202315024
학과 : 미래모빌리티공학과
이름 : 원유빈
날짜 : 2023/04/25
*/

//피보나치 수열은 앞의 수와 현재 수를 더하는 것

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
    int x, y, a = 0, b = 1, c;
    printf("수열 항의 개수:");
    scanf("%d", &x);

    printf("수열:");
    printf("%d %d ", a, b);

    for (y = 2; y < x; y++) 
    {
        c = a + b; 
        printf("%d ", c);
        a = b; 
        b = c;
    }
  
    return 0;
}