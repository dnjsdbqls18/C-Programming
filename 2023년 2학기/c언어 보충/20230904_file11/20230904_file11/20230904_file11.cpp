#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // exit �Լ��� ����ϱ� ���� �߰�

int main(void) {
    FILE* fp = NULL;
    char buf1[100], buf2[100];

    // �� ���� ���ڿ��� �Է¹޾� buf1�� �����Ѵ�.
    printf("���� �Է�: ");
    if (fgets(buf1, sizeof(buf1), stdin) == NULL) {
        fprintf(stderr, "�Է� ����\n");
        return 1;
    }

    // buf1�� ����� ���ڿ��� ���� ���� �� ���Ͽ� ����.
    fopen_s(&fp, "text.txt", "wt");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }
    fputs(buf1, fp);
    fclose(fp);

    // �̹��� �б� ���� ������ ����, �� ���� ���ڿ��� �о� buf2�� �����Ѵ�.
    fopen_s(&fp, "text.txt", "rt");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }

    char str[100];
    if (fgets(buf2, sizeof(buf2), fp) == NULL) {
        fprintf(stderr, "���� �б� ����\n");
        fclose(fp);
        return 1;
    }

    // fgets()�� ��ȯ���� str�� buf2�� ������ Ȯ���Ѵ�.
    strcpy_s(str, sizeof(str), buf2);

    printf("%s ���Ϸκ��� ���� ���ڿ� : %s\n", "text.txt", buf2);
    fclose(fp);

    return 0;
}
