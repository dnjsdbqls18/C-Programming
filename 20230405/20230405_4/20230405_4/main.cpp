#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float height, length, distance, pyramid;

	printf("지팡이의 높이를 입력하시오:");
	scanf("%f", &height);
	printf("지팡이 그림자의 길이를 입력하시오:");
	scanf("%f", &length);
	printf("피라미드까지의 거리를 입력하시오:");
	scanf("%f", &distance);

	pyramid = (distance * height) / length;
	printf("피라미드의 높이는 %.2f입니다.", pyramid);
}