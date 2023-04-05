#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int height = 0;
	int Ft = 0;
	double Inch = 0;

	printf("키를 입력하시오(cm):");
	scanf(" %d", &height);

	Inch = height / 2.54;
	Ft = Inch / 12;
	Inch = Inch - Ft * 12;
		
    printf("%dcm는 %d피트 %.2lf인치입니다.\n", height, Ft, Inch);
	
	
	return 0;
}