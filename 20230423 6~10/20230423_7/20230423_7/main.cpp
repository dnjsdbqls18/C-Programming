#include <stdio.h>

int main(void)
{
	int i = 3;

	while (i) // while(i!=0)�� ����.
	{
		printf("%d�� ���Դϴ�.\n", i);		
		i--;
	}
	printf("%d�� �����Դϴ�.\n", i);

	return 0;
}