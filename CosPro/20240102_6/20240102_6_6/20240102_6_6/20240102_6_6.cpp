#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(char* password)
{
	bool answer;

	int capital_count = 0, small_count = 0, digit_count = 0;

	for (int i = 0; i < strlen(password); i++)
	{
		if (password[i] >= 'A' && password[i] <= 'Z')
		{
			capital_count++;        // �빮�ڰ� ������ count++
		}

		else if (password[i] >= 'a' && password[i] <= 'z')
		{
			small_count++;    // �ҹ��ڰ� ������ count++
		}

		else if (password[i] >= '0' && password[i] <= '9')
		{
			digit_count++;    // ���ڰ� ������ count++
		}
	}

	if (capital_count >= 1 && small_count >= 2 && digit_count >= 2) //�빮�� 1�̻� �ҹ��� 2�̻� ���ڰ� 2�̻����� Ȯ��
	{
		answer = true;
	}

	else
	{
		answer = false;
	}

	return answer;
}

int main() 
{
	char* password1 = "helloworld";
	bool ret1 = solution(password1);

	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1 ? "true" : "false");

	char* password2 = "Hello123";
	bool ret2 = solution(password2);

	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2 ? "true" : "false");
}