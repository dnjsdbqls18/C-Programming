#include <stdio.h>

union student
{
	int age;
	double grade;
};

int main()
{
	union student person = { 20 };

	printf("���� : %d\n", person.age);
	person.grade = 90.25;
	printf("��� : %lf\n", person.grade);

	printf("��� ��� �߿� ���� ��� : %d\n", person.age);
}