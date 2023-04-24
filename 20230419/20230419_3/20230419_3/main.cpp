/*
 x, y를 rand()함수를 이용하여 0~9사이 수를 발생 시키고, op값은 0~4까지 rand()로 생성하는데
  op값이 0이면 +, 1이면 -, 2이면 *, 3이면 /, 4이면 % 연산을 하도록 프로그램을 확장하라.
학번 : 202315024
학과 : 미래모빌리티공학과
이름 : 원유빈
날짜 : 2023/04/24
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int x, y, answer, i, op;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        op = rand() % 5;

        if (op == 0)
        {
            answer = x + y;
            printf("%d + %d = %d\n", x, y, answer);
        }
        else if (op == 1)
        {
            answer = x - y;
            printf("%d - %d = %d\n", x, y, answer);
        }
        else if (op == 2)
        {
            answer = x * y;
            printf("%d * %d = %d\n", x, y, answer);
        }
        else if (op == 3)
        {
            if (y == 0)
            {
                printf("0으로 나눌 수 없습니다.\n");
                continue; 
            }
            answer = x / y;
            printf("%d / %d = %d\n", x, y, answer);
        }
        else if (op == 4)
        {
            if (y == 0)
            {
                printf("0으로 나눌 수 없습니다.\n");
                continue; 
            }
            answer = x % y;
            printf("%d %% %d = %d\n", x, y, answer);
        }
        else
        {
            printf("잘못된 연산자입니다.\n");
        }
    }

    return 0;
}



