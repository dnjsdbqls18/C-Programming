// 2023.05.24   �̷������Ƽ���а� 202315024 ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 8. ���޿� �ٴ� �ҵ漼�� ����ϴ� �Լ� get_tax(int income)�� �ۼ��ϰ� �׽�Ʈ�Ͽ�����.
//    �ҵ� �� 1000�� �������� 8%�� �����ϰ� 1000�� ���� �Ѵ� �ҵ��� 10%�� �����Ѵٰ� ����.
//    �ҵ� �߿��� 1000�� ���� �Ѵ� �κи� 10%�� ����ȴ�.
//    ����ڷκ��� �ҵ��� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�.

int get_tax(int income)
{
	if (income <= 1000)
	{
		income = income * 0.08;
		return income;
    }
	else
	{
		income = (1000 * 0.08) + ((income - 1000) * 0.1);
		return income;
	}
}

int main(void)
{
	int a = 0;

	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &a);

	printf("�ҵ漼�� %d�Դϴ�.", get_tax(a));

	return 0;
}