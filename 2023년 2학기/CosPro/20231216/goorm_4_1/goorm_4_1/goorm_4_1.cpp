#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len)
{
	int x_count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (schedule[i][0] == 'X')    //X인 배열일 경우, 상담이 안되는게 언제인지 먼저 확인
		{
			x_count++; //+1
		}
	}

	int* answer = (int*)malloc(sizeof(int) * x_count); //answer 동적할당 및 배열로 만들기
	for (int i = 0, j = 0; i < 10; i++)
	{
		if (schedule[i][0] == 'X')
		{
			answer[j] = i + 1; //answer[j++] = i+1     //schedule이 X일 때 값이 나오고 +1을 해줘서 몇번째인지 알려줌
			j++;
		}
	}
	return answer;
}

int main() 
{
	char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
	int* ret = solution(schedule, 10);

	printf("solution 함수의 반환 값은 ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", ret[i]);
	}
	printf("입니다.");

}