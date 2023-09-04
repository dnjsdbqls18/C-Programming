#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE* fp1 = NULL, * fp2 = NULL;
    char fname1[100], fname2[100];

    printf("첫번째 파일 이름: ");
    fgets(fname1, sizeof(fname1), stdin);
    fname1[strcspn(fname1, "\n")] = '\0'; // Enter 키 제거

    printf("두번째 파일 이름: ");
    fgets(fname2, sizeof(fname2), stdin);
    fname2[strcspn(fname2, "\n")] = '\0'; // Enter 키 제거

    if (fopen_s(&fp1, fname1, "rt") != 0 || fopen_s(&fp2, fname2, "wt") != 0) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }

    // 파일 작업

    fclose(fp1); // 첫 번째 파일 닫기
    fclose(fp2); // 두 번째 파일 닫기

    return 0;
}
