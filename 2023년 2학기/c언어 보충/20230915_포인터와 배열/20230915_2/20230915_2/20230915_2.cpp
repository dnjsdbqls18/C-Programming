#include <stdio.h>

int main()
{
	char a[8];
	char* ptr;
	int i;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';

	ptr = a;
	*ptr = 'Z';

	ptr += 3;
	*ptr = 'W';

	printf("%s\n", a);

	return 0;
}