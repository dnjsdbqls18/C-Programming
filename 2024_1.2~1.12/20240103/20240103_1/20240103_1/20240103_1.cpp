/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
	int n;

	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &n);
	return n;
}

int is_prime(int n)
{
	int i;
	
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
	{
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	}
	return 0;
}
*/

/*
#include <stdio.h>

double c_to_f(double c_temp);

int main(void)
{
	printf("���� %.2lf���� ȭ�� %.2lf�Դϴ�.\n", 36.0, c_to_f(36.0));
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
	{                                                                                                                                                                                                                                                                                                                                                                
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main(void)
{
	int x = 0;
	long f;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("%d!�� %d�Դϴ�.", x, factorial(x));
	return 0;

}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int menu()
{
	int n;

	printf("<���а���>\n");	
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	printf("5. ��\n");
	printf("6. !\n");
	printf("7. sin\n");
	printf("8. ����\n");

	printf("\n");

	scanf("%d", &n);

	printf("\n");

	return n;
}

void sum()
{
	int x, y = 0;
	int sum = 0;
	printf("���� ���� 2���� �Է��ϼ���: ");
	scanf(" %d %d", &x, &y);

	sum = x + y;

	printf("%d + %d = %d �Դϴ�.", x, y, sum);
	printf("\n\n");
}

void minus()
{
	int x, y = 0;
	int minus = 0;
	printf("�� ���� 2���� �Է��ϼ���: ");
	scanf(" %d %d", &x, &y);

	minus = x - y;

	printf("%d - %d = %d �Դϴ�.", x, y, minus);
	printf("\n\n");
}

void multi()
{
	int x, y = 0;
	int multi = 0;
	printf("���� ���� 2���� �Է��ϼ���: ");
	scanf(" %d %d", &x, &y);

	multi = x * y;

	printf("%d * %d = %d �Դϴ�.", x, y, multi);
	printf("\n\n");
}

void divide()
{
	int x, y = 0;
	int divide = 0;
	printf("���� ���� 2���� �Է��ϼ���: ");
	scanf(" %d %d", &x, &y);

	divide = x / y;

	printf("%d / %d = %d �Դϴ�.", x, y, divide);
	printf("\n\n");
}

void root()
{
	int x = 0;
	double root = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);

	root = sqrt(x);
	
	printf("��(%d)�� %.2lf �Դϴ�.",x, root);
	printf("\n\n");
}

void factorial()
{
	/*
	int x = 0;
	int factorial = 1;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		factorial *= x--;
	}
	printf("%d!�� %d �Դϴ�.", x, factorial);
	printf("\n");
	*/

	int n = 0;
	int result = 1;
	int i;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}

	printf("%d!�� %d �Դϴ�.", n, result);
	printf("\n\n");
}

void sine()
{
	double x = 0;
	double sine = 0;
	double degree_x = 0;

	printf("������ �Է��ϼ���: ");
	scanf("%lf", &x);
	degree_x = x / 180.0 * 3.14;

	sine = sin(degree_x);

	printf("sin(%.2lf)�� %.2lf �Դϴ�.", x, sine);
	printf("\n\n");
}

int main()
{
	while (1)
	{
		switch (menu())
		{
		case 1:
			sum();
			break;;
		case 2:
			minus();
			break;
		case 3:
			multi();
			break;
		case 4:
			divide();
			break;
		case 5:
			root();
			break;
		case 6:
			factorial();
			break;
		case 7:
			sine();
			break;
		case 8:
			return 1;
		default:
			printf("�ٽ� �����ϼ���.");
			printf("\n\n");
		}
	}
	return 0;
}