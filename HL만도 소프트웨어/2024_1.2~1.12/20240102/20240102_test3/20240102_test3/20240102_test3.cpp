#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int c = 0;

	for (int i = 2; i <= 10; i++)
	{
		c = a + b;
		printf("%d\n",c);
		a = b;
		b = c;
	}

	return 0;
}