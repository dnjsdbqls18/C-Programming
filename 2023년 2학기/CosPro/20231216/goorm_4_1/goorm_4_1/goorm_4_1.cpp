#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len)
{
	int x_count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (schedule[i][0] == 'X')    //X�� �迭�� ���, ����� �ȵǴ°� �������� ���� Ȯ��
		{
			x_count++; //+1
		}
	}

	int* answer = (int*)malloc(sizeof(int) * x_count); //answer �����Ҵ� �� �迭�� �����
	for (int i = 0, j = 0; i < 10; i++)
	{
		if (schedule[i][0] == 'X')
		{
			answer[j] = i + 1; //answer[j++] = i+1     //schedule�� X�� �� ���� ������ +1�� ���༭ ���°���� �˷���
			j++;
		}
	}
	return answer;
}

int main() 
{
	char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
	int* ret = solution(schedule, 10);

	printf("solution �Լ��� ��ȯ ���� ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", ret[i]);
	}
	printf("�Դϴ�.");

}