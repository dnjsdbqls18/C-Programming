#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int n, int votes[], int votes_len)
{
	int arr[101] = { 0, }; //arr배열 다 0으로 초기화
	for (int i = 0; i < votes_len; i++)
	{
		arr[votes[i]]++; //1,2,3이 몇표를 받았는지 확인
	}

	for (int i = 1; i < n + 1; i++)
	{
		if (arr[i] > votes_len / 2) //받은 표가 과반수를 넘었는지 확인 후 i반환
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int n1 = 3;
	int votes1[7] = { 1, 2, 1, 3, 1, 2, 1 };
	int votes_len1 = 7;
	int ret1 = solution(n1, votes1, votes_len1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int n2 = 2;
	int votes2[7] = { 2, 1, 2, 1, 2, 2, 1 };
	int votes_len2 = 7;
	int ret2 = solution(n2, votes2, votes_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}