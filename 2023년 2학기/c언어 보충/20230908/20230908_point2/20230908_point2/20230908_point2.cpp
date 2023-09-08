#include <stdio.h>

int main(void)
{
	int num = 123;
	int* ptr = &num; // 주소 포인터로 저장
	printf("%d\n", *ptr); // 주소에 저장된 값 출력	
	printf("%d\n", ptr); // 주소 출력

	return 0;
}