#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int height = 0;
	int Ft = 0;
	double Inch = 0;

	printf("Ű�� �Է��Ͻÿ�(cm):");
	scanf(" %d", &height);

	Inch = height / 2.54;
	Ft = Inch / 12;
	Inch = Inch - Ft * 12;
		
    printf("%dcm�� %d��Ʈ %.2lf��ġ�Դϴ�.\n", height, Ft, Inch);
	
	
	return 0;
}