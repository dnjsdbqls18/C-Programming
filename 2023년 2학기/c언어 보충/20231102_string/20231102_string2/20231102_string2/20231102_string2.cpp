#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;
    char s1[10];

    scanf("%d", &num1);    // 일반 변수일 때는 변수 앞에 &를 붙임
    scanf("%s", s1);       // 배열은 앞에 &을 붙이지 않음

    return 0;
}