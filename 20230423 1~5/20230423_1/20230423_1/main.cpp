// while 문
#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 5) // 미리 반복 횟수를 알 수 없고 조건에 따라서 반복하는 경우 사용
	{
		printf("Hello World!\n");
		i++;
	}

	return 0;
}