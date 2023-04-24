/*
사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 적성하라.
학번 : 202315024
학과 : 미래모빌리티공학과
이름 : 원유빈
날짜 : 2023/04/25
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
    int a = 0;
    int i = 0;
   
    printf("정수를 입력하세요: ");
    scanf("%d", &a);
    
    printf("%d의 약수: ", a);
    for (i = 1; i <= a; i++) 
    {
        if (a % i == 0) 
        {
            printf("%d ", i);
        }
    }
   
    return 0;
}