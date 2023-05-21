#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_11(int solution, int answer)//한라대학교 미래모빌리티공학과 원유빈
{
	double velocity_m_s = 0.0;
	double acceleration = 0.0;
	double velocity_i = 90.0;
	double velocity_f = 0.0;
	double x_displacement = 50.0;

	printf("\n\n");
	printf("2-11 \n");
	printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
	printf("이 스포츠카는 %6.2lf km/h의 속도로 달리다가 브레이크를 밟은 후\n", velocity_i);
	printf("%6.2lf m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", x_displacement);
	printf("(a) 이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n");

		printf("관련 공식 : v^2 - v0^2 = 2 * a * Δx\n");
		printf("v:나중속도, v0:처음속도, a:가속도, Δx :거리변화량\n\n");

		velocity_m_s = velocity_i * 1000 / 3600;

		printf("km/h 를 m/s 로 단위 변환\n");
		printf("%6.2lf km/h = (%6.2lf * 1000 / 3600) m/s = %6.2lf m/s\n\n", velocity_i, velocity_i, velocity_m_s);

		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n", velocity_f, velocity_m_s, x_displacement);

	}

	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   정 답   =============================\n");

		acceleration = (velocity_f * velocity_f) - (velocity_m_s * velocity_m_s) / (2 * x_displacement);

		printf("가속도 a = %6.2lf m/s^2\n", acceleration);

	}

}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");



	Excersize_2_11(Show_Solution, Answer);




}
