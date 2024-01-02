#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int number1, int number2)
{
	int ret = 0;

	// �� �� �� ū ������ ���� ���� �� ����� ��ȯ
	if (number1 > number2)
	{
		ret = number1 - number2;
	}
	else
	{
		ret = number2 - number1;
	}

	return ret;
}

// ������ �ڸ����� ����ϴ� �Լ�
int func_b(int number)
{
	int ret = 0;

	// ���ڸ� 10���� ������ �ڸ����� ������Ŵ
	while (number != 0)
	{
		number = number / 10;
		ret++;
	}

	return ret;
}

// ���ڸ� �־��� �ڸ�����ŭ ������ �Լ�
int func_c(int number, int digit)
{
	int ret = 0;

	// �־��� �ڸ�����ŭ �ݺ��ϸ鼭 ���ڸ� ������
	for (int i = 0; i < digit; i++)
	{
		int temp = number % 10;
		number = number / 10;
		ret = ret * 10 + temp;
	}

	return ret;
}

int solution(int number)
{
	int answer = 0;
	int digit = func_b(number);         // ������ �ڸ��� ���
	int convert_number = func_c(number, digit); // ���ڸ� ������ ��� ���
	answer = func_a(number, convert_number);    // �� ���� ���� ���
	return answer;
}
int main() 
{
	int number1 = 120;
	int ret1 = solution(number1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}