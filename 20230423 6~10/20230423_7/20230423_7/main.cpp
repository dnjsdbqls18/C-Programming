#include <stdio.h>

int main(void)
{
	int i = 3;

	while (i) // while(i!=0)와 같다.
	{
		printf("%d은 참입니다.\n", i);		
		i--;
	}
	printf("%d은 거짓입니다.\n", i);

	return 0;
}