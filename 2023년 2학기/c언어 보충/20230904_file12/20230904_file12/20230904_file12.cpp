#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE* fp1 = NULL, * fp2 = NULL;
    char fname1[100], fname2[100];

    printf("ù��° ���� �̸�: ");
    fgets(fname1, sizeof(fname1), stdin);
    fname1[strcspn(fname1, "\n")] = '\0'; // Enter Ű ����

    printf("�ι�° ���� �̸�: ");
    fgets(fname2, sizeof(fname2), stdin);
    fname2[strcspn(fname2, "\n")] = '\0'; // Enter Ű ����

    if (fopen_s(&fp1, fname1, "rt") != 0 || fopen_s(&fp2, fname2, "wt") != 0) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }

    // ���� �۾�

    fclose(fp1); // ù ��° ���� �ݱ�
    fclose(fp2); // �� ��° ���� �ݱ�

    return 0;
}
