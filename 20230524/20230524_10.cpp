// 2023.05.24   �̷������Ƽ���а� 202315024 ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 10. ����(ramdom number)�� ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�.
//     Ư�� �������� �м��� �ʹ� ������ ��쿡 �ùķ��̼��� ����ϸ� ���� �������� ������ �� �� �ִ�.
//     10���� 90������ ������ �������� ��ȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���Ͽ�����.

int randint()
{
	return 10 + rand() % 81;
}

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", randint());
	}
	return 0;
}