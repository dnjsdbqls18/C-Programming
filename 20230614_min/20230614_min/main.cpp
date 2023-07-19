#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

/* 최소값 

int main(void)
{
	int prices[SIZE] = { 0 };
	int i, min;

	printf("--------------------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("--------------------------------------\n");
	srand(time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%d  ", prices[i]);
	}
	printf("\n\n");

	min = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < min)
		{
			min = prices[i];
		}
	}
	printf("최소값은 %d입니다.\n", min);
	return 0;
}
*/

int main(void)
{
	int prices[SIZE] = { 0 };
	int i, max;

	printf("--------------------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("--------------------------------------\n");
	srand(time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%d  ", prices[i]);
	}
	printf("\n\n");

	max = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > max)
		{
			max = prices[i];
		}
	}
	printf("최대값은 %d입니다.\n", max);
	return 0;
}