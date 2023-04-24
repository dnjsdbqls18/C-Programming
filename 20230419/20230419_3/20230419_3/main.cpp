/*
 x, y�� rand()�Լ��� �̿��Ͽ� 0~9���� ���� �߻� ��Ű��, op���� 0~4���� rand()�� �����ϴµ�
  op���� 0�̸� +, 1�̸� -, 2�̸� *, 3�̸� /, 4�̸� % ������ �ϵ��� ���α׷��� Ȯ���϶�.
�й� : 202315024
�а� : �̷������Ƽ���а�
�̸� : ������
��¥ : 2023/04/24
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
                printf("0���� ���� �� �����ϴ�.\n");
                continue; 
            }
            answer = x / y;
            printf("%d / %d = %d\n", x, y, answer);
        }
        else if (op == 4)
        {
            if (y == 0)
            {
                printf("0���� ���� �� �����ϴ�.\n");
                continue; 
            }
            answer = x % y;
            printf("%d %% %d = %d\n", x, y, answer);
        }
        else
        {
            printf("�߸��� �������Դϴ�.\n");
        }
    }

    return 0;
}



