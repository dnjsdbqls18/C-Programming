#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int socks[], int socks_len)
{
	int answer = 0;

	int* count = (int*)malloc(sizeof(int) * 10);
	memset(count, 0, sizeof(int) * 10);

	// 각 양말의 개수를 세기
	for (int i = 0; i < socks_len; i++)
		count[socks[i]]++;

	// 각 양말의 개수를 2로 나누어 한 쌍으로 만들 수 있는 양말 쌍 수 계산
	for (int i = 0; i < 10; i++)
		answer += (count[i] / 2);

	// 동적으로 할당한 배열 메모리 해제
	free(count);

	return answer;
}

int main()
{
	int socks[] = { 1, 2, 1, 3, 2, 1 };
	int socks_len = 6;
	int ret = solution(socks, socks_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}