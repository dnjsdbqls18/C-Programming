#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = NULL;
    char name[50], name2[50];
    int num, num2;
    double score, score2;

    printf("학생의 이름, 학번, 점수 입력: ");
    if (scanf("%s %d %lf", name, &num, &score) != 3) {
        fprintf(stderr, "입력 오류\n");
        exit(1);
    }

    // 쓰기 모드로 파일을 열어 입력받은 학생의 정보들을 각 형식대로 파일에 쓴다.
    fopen_s(&fp, "score.txt", "wt");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }
    fprintf(fp, "%s %d %lf", name, num, score);
    fclose(fp);

    // 읽기 모드로 파일을 열어 파일로부터 읽은 학생의 정보들을 서식화된 형식대로 읽어 드린 후, 화면에 출력한다.
    fopen_s(&fp, "score.txt", "rt");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }
    int c = fscanf(fp, "%s %d %lf", name2, &num2, &score2);
    if (c != 3) {
        fprintf(stderr, "파일 읽기 오류\n");
        exit(1);
    }
    printf("파일로부터 입력받은 학생 정보(입력에 성공한 데이터 수 : %d)\n이름: %s\n학번: %d\n학점: %lf\n", c, name2, num2, score2);
    fclose(fp);

    return 0;
}
