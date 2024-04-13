#include <stdio.h>

union student
{
	int age;
	double grade;
};

int main()
{
	union student person = { 20 };

	printf("나이 : %d\n", person.age);
	person.grade = 90.25;
	printf("평균 : %lf\n", person.grade);

	printf("평균 사용 중에 나이 출력 : %d\n", person.age);
}