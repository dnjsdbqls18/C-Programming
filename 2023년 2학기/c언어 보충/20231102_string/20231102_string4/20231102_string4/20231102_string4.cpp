#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    int c1 = getchar();     // ���ڸ� �Է¹���
    printf("%d\n", c1);
    printf("%d\n", EOF);    // -1

    return 0;
}