#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3
// ���ڿ�, ����, �Ǽ��� ������ ����ü�� ���ο� �ڷ��� STUD�� �����Ͽ� ����
typedef struct {
    char name[20];
    int num;
    double score;
} STUD;

int main(void) {
    FILE* fp = NULL;
    // SIZE ũ���� STUD�� �迭 ����
    STUD list[SIZE] = {
        {"KIM", 1, 4.5},
        {"PARK", 2, 4.3},
        {"LEE", 3, 3.7}
    };
    STUD s; // STUD�� ���� s ����

    // ���� ���� ���� dat ������ ���� STUD�� �迭 list�� ����� �����͵��� ���Ͽ� ����.

    fopen_s(&fp, "score.dat", "wb");
    fwrite(list, sizeof(STUD), SIZE, fp); // �μ� (�迭 list�� �����ּ�, STUD���� ũ��, SIZE ����, ���� ������ fp)
    fclose(fp);

    /* �б� ���� ������ ���� STUD�� �迭 list�� ����� �����͵��� ���Ϸκ��� �о�
    STUD�� ���� s�� ������ ��, ����� �迭 ����� ������ŭ ����Ѵ�.*/

    fopen_s(&fp, "score.dat", "rb");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }

    for (int i = 0; i < SIZE; i++) {
        fread(&s, sizeof(STUD), 1, fp); // STUD�� ���� s�� �ּҿ� �����Ͽ� �ϳ��� ���ڵ带 �о�帰��.
        printf("�̸� = %s, �й� = %d, ���� = %f\n", s.name, s.num, s.score);
    }
    fclose(fp);

    return 0;
}
