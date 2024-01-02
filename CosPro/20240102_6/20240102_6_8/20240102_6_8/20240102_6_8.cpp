#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int number1, int number2)
{
	int ret = 0;

	// 두 수 중 큰 수에서 작은 수를 뺀 결과를 반환
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

// 숫자의 자릿수를 계산하는 함수
int func_b(int number)
{
	int ret = 0;

	// 숫자를 10으로 나누며 자릿수를 증가시킴
	while (number != 0)
	{
		number = number / 10;
		ret++;
	}

	return ret;
}

// 숫자를 주어진 자릿수만큼 뒤집는 함수
int func_c(int number, int digit)
{
	int ret = 0;

	// 주어진 자릿수만큼 반복하면서 숫자를 뒤집음
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
	int digit = func_b(number);         // 숫자의 자릿수 계산
	int convert_number = func_c(number, digit); // 숫자를 뒤집은 결과 계산
	answer = func_a(number, convert_number);    // 두 수의 차이 계산
	return answer;
}
int main() 
{
	int number1 = 120;
	int ret1 = solution(number1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}