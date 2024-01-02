#include <stdio.h>

int main()
{
	int narr[10] = { 1,2,-1,-2,1,2,-1,-2,1,2 };

	int temp = 0;

	for (int i = 0; i < sizeof(narr) / sizeof(int); i++)
	{
		temp += narr[i];
	}
	printf("°á°ú =  %d", temp);

	return 0;
}