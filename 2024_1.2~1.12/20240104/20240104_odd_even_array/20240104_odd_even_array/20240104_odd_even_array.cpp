#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int even[10] = { 0 };
    int odd[10] = { 0 };

    int even_count = 0;
    int odd_count = 0;

    srand(time(NULL));

    while (even_count < 10 && odd_count < 10)
    {
        int num = rand() % 99 + 1;

        if (num % 2 == 0)
        {
            even[even_count] = num;
            even_count++;
        }
        else
        {
            odd[odd_count] = num;
            odd_count++;
        }
    }


    printf("Â¦¼ö ¹è¿­: ");
    for (int i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nÂ¦¼ö °³¼ö: %d\n", even_count);

    printf("È¦¼ö ¹è¿­: ");
    for (int i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\nÈ¦¼ö °³¼ö: %d\n", odd_count);

    return 0;
}