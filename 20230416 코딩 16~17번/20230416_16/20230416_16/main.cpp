#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;

	printf("3���� �Ǽ��� �Է����ּ���.\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	 if (a > b && a > c)
	 {
		printf("���� ū ���� %lf �Դϴ�.", a);
	 }
	 else if (b > a && b > c)
	 {
		 printf("���� ū ���� %lf �Դϴ�.", b);
	 }
	 else if (c > a && c > b)
	 {
		 printf("���� ū ���� %lf �Դϴ�.", c);
	 }
	 
	 if (a < b && a < c)
	 {
		 printf("���� ���� ���� %lf �Դϴ�.", a);
	 }
	 else if (b < a && b < c)
	 {
		 printf("���� ���� ���� %lf �Դϴ�.", b);
	 }
	 else if (c < a && c < b)
	 {
		 printf("���� ���� ���� %lf �Դϴ�.", c);
	 }
	
	 return 0;
}

