#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i = 2000000000;
	int j = 3000000000;

	printf("i�� ���� %d �Դϴ�\n", i);
	printf("j�� ���� %d �Դϴ�\n", j);
	
	//int���� 4Byte (32bit)�� ����Ҹ� ���� �����̴�. ��ǻ�ʹ� �������� �⺻���� �Ͽ� ����ϱ� ������  2 ^ -31 ~ 2 ^ 31 - 1 ������ ���´�.
	
	return 0;


}