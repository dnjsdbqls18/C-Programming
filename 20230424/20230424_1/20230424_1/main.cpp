/*
����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �����϶�.
�й� : 202315024
�а� : �̷������Ƽ���а�
�̸� : ������
��¥ : 2023/04/25
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
    int a = 0;
    int i = 0;
   
    printf("������ �Է��ϼ���: ");
    scanf("%d", &a);
    
    printf("%d�� ���: ", a);
    for (i = 1; i <= a; i++) 
    {
        if (a % i == 0) 
        {
            printf("%d ", i);
        }
    }
   
    return 0;
}