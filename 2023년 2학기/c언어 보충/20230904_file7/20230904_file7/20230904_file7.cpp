#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>




int main()

{

	int a, b; // ���Ͽ��� �о�� �� fscanf�� ����� ����a�� �ݺ����� ����� ���� b ����

	int* data; // �����޸𸮿� ����� ������ ������ ����

	FILE* fp; // ���������� fp ����

	fp = fopen("data.txt", "r"); // "data.txt"���� ����



	if (fp != NULL) // ������ ���������� ������ �� if������

	{

		fscanf(fp, "%d", &a); // "data.txt"������ ù��° ���� �Է¹޾Ƽ�

		data = (int*)malloc(sizeof(int) * a); // ù��° ����ŭ �������� ������ �迭�� ����ϴ�.



		for (b = 0; b < a; b++) // �迭�� ũ�⸸ŭ ���� �Է� ����

		{

			fscanf(fp, "%d", &data[b]);

		}



		fclose(fp); // �Է��� �����ڿ� ���ϴݱ�



		for (b = 0; b < a; b++) // �Է¹��� �迭�� ���

		{

			printf("data[%d] : %d \n", b, data[b]);

		}

		free(data); // �޸� ��ȯ

	} //close if()



	else {

		printf("���� �Է¹ޱ� ���� \n");

	}

}