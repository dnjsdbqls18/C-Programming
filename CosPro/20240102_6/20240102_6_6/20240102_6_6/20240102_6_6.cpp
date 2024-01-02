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
			capital_count++;        // 대문자가 나오면 count++
		}

		else if (password[i] >= 'a' && password[i] <= 'z')
		{
			small_count++;    // 소문자가 나오면 count++
		}

		else if (password[i] >= '0' && password[i] <= '9')
		{
			digit_count++;    // 숫자가 나오면 count++
		}
	}

	if (capital_count >= 1 && small_count >= 2 && digit_count >= 2) //대문자 1이상 소문자 2이상 숫자가 2이상인지 확인
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

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ? "true" : "false");

	char* password2 = "Hello123";
	bool ret2 = solution(password2);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ? "true" : "false");
}