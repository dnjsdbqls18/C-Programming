#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len)
{
	int min_cal = 1000;
	int answer = 0;

	for (int i = 0; i < calorie_len; i++)
	{
		if (calorie[i] > min_cal)              //min_cal을 배열의 숫자보다 크다고 놓으면 다음 min_cal은 calorie[0]이 됨
		{
			answer += calorie[i] - min_cal;      // 그렇게 다음 배열과 비교해 가며 최솟값을 구하고 빼줌
		}
		else
		{
			min_cal = calorie[i];
		}
	}

	return answer;
}
int main()
{
	int calorie[] = { 713, 665, 873, 500, 751 };
	int ret = solution(calorie, 5);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}