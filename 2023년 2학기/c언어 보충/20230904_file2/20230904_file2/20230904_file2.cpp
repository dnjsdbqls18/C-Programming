#define _CRT_SECURE_NO_WARNINGS
#define MAX 10

#include <stdio.h>

int main()
{
	char hello[MAX];
	FILE* fp;
	fp = fopen("hello.txt","r");
	for (int i = 0; i < 3; i++)
	{
		fgets(hello, sizeof(hello), fp);
		printf("%s", hello);
	}
	fclose(fp);

	return 0;
}