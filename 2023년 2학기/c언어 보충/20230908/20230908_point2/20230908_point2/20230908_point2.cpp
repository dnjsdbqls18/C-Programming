#include <stdio.h>

int main(void)
{
	int num = 123;
	int* ptr = &num; // �ּ� �����ͷ� ����
	printf("%d\n", *ptr); // �ּҿ� ����� �� ���	
	printf("%d\n", ptr); // �ּ� ���

	return 0;
}