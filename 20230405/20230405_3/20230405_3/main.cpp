#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define PI 3.141592

int main(void)
{
	float A, V, r;
	printf("구의 반지름을 입력하시오:");
	scanf("%f", &r);

	A = 4.0 * PI * r * r;
	V = 4.0 / 3.0 * PI * r * r * r;

	printf("구의 표면적은 %.2f, 구의 체적은 %.2f\n", A, V);
	
	return 0;
}