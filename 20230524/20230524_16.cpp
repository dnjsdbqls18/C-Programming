// 2023.05.24   �̷������Ƽ���а� 202315024 ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 16. ���࿡ ��ġ�Ǿ� �ִ� ATM ��ġ�� ���α׷����� �����غ���. �����ϴٸ� �ҽ��� ���� �κ��� �Լ��� �����غ���.

int menu(void)
{
    int n;
    printf("<1> �ܾ�\n");
    printf("<2> �Ա�\n");
    printf("<3> ���\n");
    printf("<4> ����\n");
    printf("�޴��� �����Ͻÿ� : ");
    scanf("%d", &n);
    return n;
}
void balance()
{
    double a = 0, result;
    printf("�ܾ��� ��ȸ�մϴ�. ");
    result = sin(a);
    printf("�ܾ��� %lf�Դϴ�.\n\n", result);
}

void deposit()
{
    int n;
    printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
    scanf("%d", &n);
    printf("�ܰ�� %d�� �Դϴ�.\n\n", n);
}



void withdraw()
{
    double a, result;
    printf("��� �ݾ��� �Է��Ͻÿ�: ");
    scanf("%lf", &a);
    if (a <= 0.0)
        printf("����\n");
    else {
        result = log10(a);
        printf("�ܰ�� %lf�� �Դϴ�.\n\n", result);
    }
}

int main(void)
{
    while (1) {
        switch (menu()) {
        case 1:
            balance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("�����մϴ�.\n");
            return 0;
        default:
            printf("�߸��� �����Դϴ�.\n");
            break;
        }
    }
}