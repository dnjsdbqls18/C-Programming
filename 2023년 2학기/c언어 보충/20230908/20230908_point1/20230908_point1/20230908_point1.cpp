#include <stdio.h>

int main(void)
{
	int* numPtr;
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", numPtr);
	printf("%p\n", numPtr);

	printf("%d\n", *numPtr);


	return 0;
}











