#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RESISTOR_NO 10
double resistor[MAX_RESISTOR_NO] = { 0.0, };  // 초기화

double series_resistor_calculator(int number)
{
	double total_resistor = 0.0;

	for (int i = 0; i < number; i++)
	{
		total_resistor += resistor[i];
	}

	printf("직렬 저항의 총합은 %6.3lf 입니다.\n", total_resistor);
	
	return total_resistor;
}

double parallel_resistor_calculator(int number)
{
	double total_resistor = 0.0;

    for (int i = 0; i < number; i++)
	{
		total_resistor += 1.0 / resistor[i];
	}

	total_resistor = 1.0 / total_resistor; // 역수 취하기

	printf("병렬 저항의 총합은 %6.3lf 입니다.\n", total_resistor);

	return total_resistor;
}

int main(void)
{
	int select;
	int no_resistor = 0;

	printf(" 직렬(1), 병렬(2) 합성 저항 계산을 선택하세요.");
	scanf("%d", &select);

	switch (select)
	{
	case 1:
		printf("직렬 저항을 선택했습니다.\n");
		break;
	case 2:
		printf("병렬 저항을 선택했습니다.\n");
		break;
	default :
		printf("잘못 선택했습니다. 다시 선택해주세요.\n");
		break;
	}
	printf("\n\n");

	printf("저항의 갯수를 입력하세요.");
	scanf("%d", &no_resistor);

	for (int i = 0; i < no_resistor; i++)
	{
		printf("[%1d] 번째 저항값을 입력하세요. ",i+1);
		scanf("%lf", &resistor[i]);

		printf("[%1d] 번째 저항값은 %6.3lf 입니다.\n\n",i+1,resistor[i]);
	}

	switch (select)
	{
	case 1:
		printf("직렬 저항을 계산합니다.\n");
		series_resistor_calculator(no_resistor);
		break;
	case 2:
		printf("병렬 저항을 계산합니다.\n");
		parallel_resistor_calculator(no_resistor);

		break;
	}
	
	return 1;
}