/*
�Ǻ���ġ ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����
�й� : 202315024
�а� : �̷������Ƽ���а�
�̸� : ������
��¥ : 2023/04/25
*/

//�Ǻ���ġ ������ ���� ���� ���� ���� ���ϴ� ��

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
    int x, y, a = 0, b = 1, c;
    printf("���� ���� ����:");
    scanf("%d", &x);

    printf("����:");
    printf("%d %d ", a, b);

    for (y = 2; y < x; y++) 
    {
        c = a + b; 
        printf("%d ", c);
        a = b; 
        b = c;
    }
  
    return 0;
}