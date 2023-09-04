#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // exit 함수를 사용하기 위해 추가

int main(void) {
    FILE* fp = NULL;
    char buf1[100], buf2[100];

    // 한 줄의 문자열을 입력받아 buf1에 저장한다.
    printf("문장 입력: ");
    if (fgets(buf1, sizeof(buf1), stdin) == NULL) {
        fprintf(stderr, "입력 오류\n");
        return 1;
    }

    // buf1에 저장된 문자열을 쓰기 모드로 연 파일에 쓴다.
    fopen_s(&fp, "text.txt", "wt");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 실패\n");
        return 1;
    }
    fputs(buf1, fp);
    fclose(fp);

    // 이번엔 읽기 모드로 파일을 열어, 한 줄의 문자열을 읽어 buf2에 저장한다.
    fopen_s(&fp, "text.txt", "rt");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 실패\n");
        return 1;
    }

    char str[100];
    if (fgets(buf2, sizeof(buf2), fp) == NULL) {
        fprintf(stderr, "파일 읽기 실패\n");
        fclose(fp);
        return 1;
    }

    // fgets()의 반환값인 str은 buf2와 같음을 확인한다.
    strcpy_s(str, sizeof(str), buf2);

    printf("%s 파일로부터 읽은 문자열 : %s\n", "text.txt", buf2);
    fclose(fp);

    return 0;
}
