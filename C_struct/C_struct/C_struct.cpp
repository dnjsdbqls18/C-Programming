#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
struct student
{
	char name[20];
	int age;
	double grade[3];
}person;

int main()
{
	struct student;

	strcpy(person.name, "kyle");
	person.age = 23;
	person.grade[0] = 100;
	person.grade[1] = 90;
	person.grade[2] = 80;

	printf("捞抚: %s\n", person.name);
	printf("唱捞: %d\n", person.age);
	printf("己利1: %.1lf\n", person.grade[0]);
	printf("己利2: %.1lf\n", person.grade[1]);
	printf("己利3: %.1lf\n", person.grade[2]);



}*/

/*struct student
{
	char name[20];
	int age;
	double grade[3];
};

int main()
{
	struct student person;

	strcpy(person.name, "kyle");
	person.age = 23;
	person.grade[0] = 100;
	person.grade[1] = 90;
	person.grade[2] = 80;

	printf("捞抚: %s\n", person.name);
	printf("唱捞: %d\n", person.age);
	printf("己利1: %.1lf\n", person.grade[0]);
	printf("己利2: %.1lf\n", person.grade[1]);
	printf("己利3: %.1lf\n", person.grade[2]);



}*/

struct grade
{
	int NativeLanguage;
	int English;
	int Mathmatics;

	double average;
};

struct student
{
	int age;
	struct grade result;
	char* name;
}person;

int main()
{
	struct student;

	person.result.NativeLanguage = 80;
	printf("%d\n", person.result.NativeLanguage);
}