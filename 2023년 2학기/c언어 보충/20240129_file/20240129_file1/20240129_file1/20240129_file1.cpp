/*
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main()
{
    FILE* fp = fopen("test1.txt", "w"); //test파일을 w(쓰기) 모드로 열기

    fputs("한라대학교 미래모빌리티공학과 202315024", fp);

    fclose(fp); //파일 포인터 닫기

    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#include <stdio.h>

void main()
{
    FILE* fp = fopen("test1.txt", "r");  //test파일을 r(읽기) 모드로 열기
    char buffer[MAX] = { 0, };

    fread(buffer, 1, MAX, fp); //전체 읽기
    printf("%s", buffer);

    fclose(fp); //파일 포인터 닫기
}
