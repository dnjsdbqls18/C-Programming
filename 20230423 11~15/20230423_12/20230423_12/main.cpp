// do...while ���� �̿��� �޴�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;

	do   // ���� ��ü�� ��� �ѹ��� ����ȴ�.
	{
		printf("1---���θ����\n");
		printf("2---���θ����\n");
		printf("3---���θ����\n");
		printf("�ϳ��� �����Ͻÿ�:");
		scanf("%d", &i);
	} while (i < 1 || i>3);

	printf("���õ� �޴� = %d\n",i);

	return 0;
}