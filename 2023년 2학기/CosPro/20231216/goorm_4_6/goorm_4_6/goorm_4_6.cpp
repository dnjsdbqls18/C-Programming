#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int point)
{
	if (point < 1000) //����Ʈ�� 1000�� �̻��� ���� ��� �����ϱ� ������ ���ǹ��� ��
	{
		return 0;
	}

	return (point / 100) * 100; // point�� int���̱� ������ �Ҽ����� ����.�׷��� ������ ���� /100�� �ؼ� õ���ڸ��� �����ڸ��� ���ܳ��� �ٽ� *100�� �ؼ� ��� ����Ʈ ���
}

int main() 
{
	int point = 2323;
	int ret = solution(point);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}