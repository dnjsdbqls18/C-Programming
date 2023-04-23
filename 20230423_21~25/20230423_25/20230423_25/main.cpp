#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y;

	for (y = 1; y < 10000; y++) // ÁßÃ¸ ·çÇÁ
	{
		for (x = 1; x < 10; x++)
		{
			if ( _kbhit())
				goto OUT;
			printf("*");
		}
		printf("\n");
	}
OUT:
	return 0;
}