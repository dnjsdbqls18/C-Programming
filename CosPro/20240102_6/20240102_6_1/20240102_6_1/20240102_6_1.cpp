#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int temperature[], int temperature_len, int A, int B) 
{
	int answer = 0;
	int count = 0;
	for (int i = 0; i < temperature_len; i++)
	{
		if (temperature[1] < temperature[i] && temperature[6] < temperature[i])  //temperature 배열에 1,6 에 저장된 숫자를 비교해서 해당 조건에 들어가면 count++
		{
			count++;
		}
	}

	answer = count;
	return answer;
}

int main() 
{
	int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2 };
	int temperature_len = 8;
	int A = 1;
	int B = 6;
	int ret = solution(temperature, temperature_len, A, B);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}