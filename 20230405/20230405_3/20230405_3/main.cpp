#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define PI 3.141592

int main(void)
{
	float A, V, r;
	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%f", &r);

	A = 4.0 * PI * r * r;
	V = 4.0 / 3.0 * PI * r * r * r;

	printf("���� ǥ������ %.2f, ���� ü���� %.2f\n", A, V);
	
	return 0;
}