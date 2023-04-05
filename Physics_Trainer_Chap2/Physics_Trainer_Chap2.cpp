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
	printf("달리기 선수가 %.0lf m 트랙 한 바퀴를 %.0lf s에 돈다.\n\n", distance, sec);
	
	printf("(a) 선수의 평균속력을 구하라.\n\n");
	
	printf("(b) 선수의 평균속도를 구하라.\n\n");
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
	printf("어떤 육상 선수가 %.0lf m를 %.1lf min 이내에 주파하려고 한다.\n", distance1, min);
	printf("정확히 %.0lf min 지난 후에 달려야 할 거리가 %.0lf m 남았다.\n\n", min2, distance2);

	printf("그런데 이 육상 선수가 원하는 시간 내에 주파하기 위해서는 %.2lf m/s^2 의 가속도로 몇 초 동안 가속해야 하는가?\n\n", acceleration);
	
}

void Excersize_2_26(int solution, int answer)
{
	
	double distance = 15.0;
	
	printf("\n\n");
	printf("2-26 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");
	
	printf("(a) 돌은 %.1lf m에서 얼마나 빨리 운동하겠는가?\n\n", distance);
	
	printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?\n\n");
	
	printf("(c) (b)에서 답이 두 개인 이유가 무엇인가?\n\n");
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