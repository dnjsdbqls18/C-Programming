#include <stdio.h>

int main()
{
	int a = 1;
	int* ptr;

	ptr = &a;

	*ptr = 128;

	printf("%d\n", a);

	return 0;
}