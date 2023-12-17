#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int point)
{
	if (point < 1000) //포인트는 1000점 이상일 때만 사용 가능하기 때문에 조건문을 줌
	{
		return 0;
	}

	return (point / 100) * 100; // point는 int형이기 때문에 소수점을 버림.그러기 떄문에 먼저 /100을 해서 천의자리와 백의자리만 남겨놓고 다시 *100을 해서 사용 포인트 계산
}

int main() 
{
	int point = 2323;
	int ret = solution(point);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}