#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len)
{
	int count = 0;

	int prevent[6][6] = { 0 }; // 4x4�� ��쿡 0,0�� ���ʰ� ������ ���� ������ ������ ���� �� �� �ֱ⿡ �̸� ��ȣ���ִ� �迭 ����

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			prevent[i][j] = 51; // ���ǿ� �ִ� 50���� ���ڰ� ���� �� �ִٰ� �߱� �x���� 51�� ����
		}
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
 			prevent[i][j] = height[i - 1][j - 1];  // prevent�迭�� hgeight�� �ֱ�
		}
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (prevent[i][j] <= prevent[i - 1][j] && prevent[i][j] <= prevent[i][j - 1] && prevent[i][j] <= prevent[i][j + 1] && prevent[i][j] <= prevent[i + 1][j])
			{// ���� ���� �������� ���ؼ� ���� ������ ++
				count++;
			}
		}
	}
	return count;
}


int main()
{
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}