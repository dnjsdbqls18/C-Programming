#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int A[3][3] = {};
	int B[3][3] = {};
	int C[3][3] = {};
	int a = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("A��� %d�� %d���� �Է��ϼ���:", i + 1, j + 1);
			scanf("%d", &A[i][j]);

		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("B����� %d�� %d���� �Է��ϼ���:", i + 1, j + 1);
			scanf("%d", &B[i][j]);

		}
		printf("\n");
	}

	printf("��� a�� �Է�: ");
	scanf("%d", &a);
	printf("\n");

	printf("Mat (A) + Mat (B)\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
			printf("%d\t", C[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	printf("Mat (A) - Mat (B)\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] - B[i][j];
			printf("%d\t", C[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	printf("Mat (C) = a Mat (A)\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = a * A[i][j];
			printf("%d\t", C[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	return 0;
}