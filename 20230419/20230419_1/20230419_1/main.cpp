/*
0~99 ������ ���� ���ߴ� ����
�й� : 202315024
�а� : �̷������Ƽ���а�
�̸� : ������
��¥ : 2023/04/24
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); // ���� �߻��� �õ� ����

	//������ ������ �߻��Ѵ�.
	int guess, answer;
	int tries = 0;
	answer = rand() % 100 + 1;
	// �ݺ� ����
	do {
		printf("������ �����Ͽ� ���ÿ�:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)  // ����ڰ� �Է��� ������ ���亸�� ������
			printf("HIGH\n");
		if (guess < answer)  // ����ڰ� �Է��� ������ ���亸�� ������
			printf("LOW\n");
	} while (guess != answer);

	printf("���ϵ帳�ϴ�. �õ�Ƚ��=%d\n", tries);
	return 0;
}