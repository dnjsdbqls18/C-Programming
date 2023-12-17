#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len)
{
	int count = 0;

	int prevent[6][6] = { 0 }; // 4x4일 경우에 0,0은 위쪽과 왼쪽이 없기 떄문에 쓰레기 값이 뜰 수 있기에 미리 보호해주는 배열 생성

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			prevent[i][j] = 51; // 조건에 최대 50까지 숫자가 나올 수 있다고 했기 땨문에 51로 설정
		}
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
 			prevent[i][j] = height[i - 1][j - 1];  // prevent배열에 hgeight수 넣기
		}
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (prevent[i][j] <= prevent[i - 1][j] && prevent[i][j] <= prevent[i][j - 1] && prevent[i][j] <= prevent[i][j + 1] && prevent[i][j] <= prevent[i + 1][j])
			{// 숫자 기준 동서남북 비교해서 가장 작으면 ++
				count++;
			}
		}
	}
	return count;
}


int main()
{
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}