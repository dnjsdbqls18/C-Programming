/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define student 10


int main(void)
{
	int scores[student];
	int sum = 0;
	int i, average;

	for (i = 0; i < student; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�:");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < student; i++)
	{
		sum += scores[i];
	}

	average = sum / student;

	printf("���� ��� = %d", average);

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main(void)
{
	srand(time(NULL));

	int freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
	{
		++freq[rand() % 6];

	}

	printf("=======================\n");
	printf("����   ��\n");
	printf("=======================\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d    %3d\n", i, freq[i]);
	}
	return 0;
}