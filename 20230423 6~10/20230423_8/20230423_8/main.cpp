// while ���� �̿��� ���� ��� ���ϱ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade,n;
	double sum, average;

	// �ʿ��� �������� �ʱ�ȭ�Ѵ�.
	n = 0;  // ���� �ʱ�ȭ
	sum = 0;  // ���� �ʱ�ȭ
	grade = 0;
	
	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");

	// ������ �Է¹޾Ƽ� �հ踦 ���ϰ� �л� ���� ����.
	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &grade);
		
		sum += grade;
		n++;
	}
	
	sum = sum - grade;
	n--;
	// ����� ����ϰ� ȭ�鿡 ����Ѵ�.
	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);

	return 0;
}