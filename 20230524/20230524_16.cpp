// 2023.05.24   미래모빌리티공학과 202315024 원유빈

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 16. 은행에 설치되어 있는 ATM 장치를 프로그램으로 구현해보자. 가능하다면 소스의 많은 부분을 함수로 구현해본다.

int menu(void)
{
    int n;
    printf("<1> 잔액\n");
    printf("<2> 입금\n");
    printf("<3> 출금\n");
    printf("<4> 종료\n");
    printf("메뉴를 선택하시오 : ");
    scanf("%d", &n);
    return n;
}
void balance()
{
    double a = 0, result;
    printf("잔액을 조회합니다. ");
    result = sin(a);
    printf("잔액은 %lf입니다.\n\n", result);
}

void deposit()
{
    int n;
    printf("입금 금액을 입력하시오: ");
    scanf("%d", &n);
    printf("잔고는 %d원 입니다.\n\n", n);
}



void withdraw()
{
    double a, result;
    printf("출금 금액을 입력하시오: ");
    scanf("%lf", &a);
    if (a <= 0.0)
        printf("오류\n");
    else {
        result = log10(a);
        printf("잔고는 %lf원 입니다.\n\n", result);
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
            printf("종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다.\n");
            break;
        }
    }
}