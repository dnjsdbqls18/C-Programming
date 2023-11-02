#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int c1 = getchar();     // 문자를 입력받음
    printf("%d\n", c1);
    printf("%d\n", EOF);    // -1

    return 0;
}