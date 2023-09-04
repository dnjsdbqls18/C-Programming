#define _CRT_SECURE_NO_WARNINGS
#define MAX10

#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fputc('1', fp);
	fputc('\n', fp);
	fputc('2', fp);
	fputc('\n', fp);
	fputc('3', fp);
	fputc('\n', fp);
	fclose(fp);

	return 0;
}