#include <stdio.h>

int main(void) 
{
    int score[10] = { 10, 6, 7, 9, 3, 4, 2, 1, 5, 8 };
    int temp;

    printf("정렬 전 순서\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", score[i]);
    }

    printf("\n");

    for (int i = 0; i < 9; i++)
    { 
        for (int j = i + 1; j < 10; j++)
        { 
            if (score[i] > score[j])
            {
                temp = score[i]; 
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    printf("정렬 후 순서\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", score[i]);
    }
    printf("\n");

    return 0;
}
