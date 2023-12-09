#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	int over[6][6];

	for (int i = 0; i < 6; i++)         // ����� ���� �ִ� �ֵ��� ���������� ���� �ֵ��� �־ ������ ��� �߰�
	{
		for (int j = 0; j < 6; j++) 
		{
			over[i][j] = 51; // ������ ���̰� 1~50 ���̴ϱ� �ִ� 51�� �����ؼ� ��� �����
		}
	}

	for (int i = 1; i < 5; i++)           // height ��Ŀ� �� ��
	{
		for (int j = 1; j < 5; j++) 
		{
			over[i][j] = height[i - 1][j - 1];      // ���
		}
	}

	for (int i = 1; i <= height_len; i++)
	{
		for (int j = 1; j <= height_len; j++)
		{
			if (over[i][j] < over[i][j - 1] && over[i][j] < over[i + 1][j] && over[i][j] < over[i][j + 1] && over[i][j] < over[i - 1][j])  //�������� ��
			{
				count++;   // �������� �Ͻ� +1
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);  // �������� ����
}