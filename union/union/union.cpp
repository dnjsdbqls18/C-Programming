#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	union byte
	{
		int a;
		float b;
		double c;
		char d;
	};

	union byte byte;
	printf("Size of byte union : %d\n\n", sizeof(byte));
	printf("Size of byte int   : %d\n", sizeof(byte.a));
	printf("Size of byte float : %d\n", sizeof(byte.b));
	printf("Size of byte double: %d\n", sizeof(byte.c));
	printf("Size of byte char  : %d\n", sizeof(byte.d));

	return 0;
}