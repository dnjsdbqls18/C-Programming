#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


void Excersize_2_6(int solution, int answer)
{
	double distance = 200;
	double sec = 25;


	printf("\n\n");
	printf("2-6 \n");
	printf("�޸��� ������ %.0lf m Ʈ�� �� ������ %.0lf s�� ����.\n\n", distance, sec);
	
	printf("(a) ������ ��ռӷ��� ���϶�.\n\n");
	
	printf("(b) ������ ��ռӵ��� ���϶�.\n\n");
}


void Excersize_2_16(int solution, int answer)
{
	double distance1 = 10000;
	double min = 30.0;
	double min2 = 27;
	double distance2 = 1100;
	double acceleration = 0.20;

	printf("\n\n");
	printf("2-16 \n");
	printf("� ���� ������ %.0lf m�� %.1lf min �̳��� �����Ϸ��� �Ѵ�.\n", distance1, min);
	printf("��Ȯ�� %.0lf min ���� �Ŀ� �޷��� �� �Ÿ��� %.0lf m ���Ҵ�.\n\n", min2, distance2);

	printf("�׷��� �� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ��� %.2lf m/s^2 �� ���ӵ��� �� �� ���� �����ؾ� �ϴ°�?\n\n", acceleration);
	
}

void Excersize_2_26(int solution, int answer)
{
	
	double distance = 15.0;
	
	printf("\n\n");
	printf("2-26 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");
	
	printf("(a) ���� %.1lf m���� �󸶳� ���� ��ϰڴ°�?\n\n", distance);
	
	printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?\n\n");
	
	printf("(c) (b)���� ���� �� ���� ������ �����ΰ�?\n\n");
}
	




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_2_6(0,0);
	Excersize_2_16(0, 0);
	Excersize_2_26(0, 0);
}