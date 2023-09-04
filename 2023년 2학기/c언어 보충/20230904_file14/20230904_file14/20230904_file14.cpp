#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3
// 문자열, 정수, 실수형 변수의 구조체를 새로운 자료형 STUD로 생성하여 선언
typedef struct {
    char name[20];
    int num;
    double score;
} STUD;

int main(void) {
    FILE* fp = NULL;
    // SIZE 크기의 STUD형 배열 선언
    STUD list[SIZE] = {
        {"KIM", 1, 4.5},
        {"PARK", 2, 4.3},
        {"LEE", 3, 3.7}
    };
    STUD s; // STUD형 변수 s 선언

    // 쓰기 모드로 이진 dat 파일을 열어 STUD형 배열 list에 저장된 데이터들을 파일에 쓴다.

    fopen_s(&fp, "score.dat", "wb");
    fwrite(list, sizeof(STUD), SIZE, fp); // 인수 (배열 list의 시작주소, STUD형의 크기, SIZE 개수, 파일 포인터 fp)
    fclose(fp);

    /* 읽기 모드로 파일을 열어 STUD형 배열 list에 저장된 데이터들을 파일로부터 읽어
    STUD형 변수 s에 저장한 뒤, 저장된 배열 요소의 개수만큼 출력한다.*/

    fopen_s(&fp, "score.dat", "rb");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        return 1;
    }

    for (int i = 0; i < SIZE; i++) {
        fread(&s, sizeof(STUD), 1, fp); // STUD형 변수 s의 주소에 접근하여 하나의 레코드를 읽어드린다.
        printf("이름 = %s, 학번 = %d, 학점 = %f\n", s.name, s.num, s.score);
    }
    fclose(fp);

    return 0;
}
