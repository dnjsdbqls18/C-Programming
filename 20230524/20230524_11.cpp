// 2023.05.24   �̷������Ƽ���а� 202315024 ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 11. ����ڿ� ��ǻ�Ͱ� �ֻ��� ������ �Ѵٰ� ����. 
//     �ֻ����� �� 3���� ������ �ֻ��� ������ ���Ѵ�. 
//     ��ģ ������ ���� ���� �̱�ٰ� ����.

int dice()
{
	return 1 + rand() % 6;
}

int main(void)
{
	int player = 0;
	int computer = 0;
	int sum = 0;

	srand(time(NULL));

	printf("������� �ֻ��� : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", dice());
		player += dice();
    }
	printf("��: %d", player);
	printf("\n");

	printf("��ǻ���� �ֻ��� : ");
	for (int i = 0; i < 3; i++)
	{
	
		printf("%d ", dice());
		computer += dice();
    }
	printf("��: %d", computer);
	printf("\n");

	if (player > computer)
	{
		printf("����ڰ� �̰���ϴ�.");
	}
	else if (player < computer)
	{
		printf("��ǻ�Ͱ� �̰���ϴ�.");
	}
	printf("\n");
	return 0;
}