#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float height, length, distance, pyramid;

	printf("�������� ���̸� �Է��Ͻÿ�:");
	scanf("%f", &height);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�:");
	scanf("%f", &length);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�:");
	scanf("%f", &distance);

	pyramid = (distance * height) / length;
	printf("�Ƕ�̵��� ���̴� %.2f�Դϴ�.", pyramid);
}