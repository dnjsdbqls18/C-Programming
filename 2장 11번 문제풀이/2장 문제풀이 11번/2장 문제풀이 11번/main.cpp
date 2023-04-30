#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_11(int solution, int answer)//�Ѷ���б� �̷������Ƽ���а� ������
{
	double velocity_m_s = 0.0;
    double acceleration = 0.0;
	double velocity_i = 90.0;
	double velocity_f = 0.0;
	double x_displacement = 50.0;

	printf("\n\n");
	printf("2-11 \n");
	printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
	printf("�� ������ī�� %6.2lf km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ���� ��\n", velocity_i);
	printf("%6.2lf m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", x_displacement);
	printf("(a) �� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n");

		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �̴�.\n");
		printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x :�Ÿ���ȭ��\n\n");

		velocity_m_s = velocity_i * 1000 / 3600;

		printf("������ �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s �� ������ ������� �Ѵ�.\n");
		printf("1 km = 1000 m�� *1000 �� ���ְ� h = 3600 s �̹Ƿ� /3600 s �� ���ش�.\n");
		printf("%6.2lf km/h = (%6.2lf * 1000 / 3600) m/s = %6.2lf m/s �̴�.\n\n", velocity_i, velocity_i, velocity_m_s);

    	printf("v�� ���߼ӵ��� �극��ũ�� ���� �� �������� �� �ӵ��̹Ƿ� v = %6.2lf m/s �̴�.\n", velocity_f);
		printf("v0�� ó���ӵ��� �޸��� �ڵ����� �ӵ��� v = %6.2lf m/s �̴�.\n",velocity_m_s);
		printf("��x�� �Ÿ���ȭ������ (������ġ - ó����ġ)�� ���ָ� ��x = %6.2lf m �̴�.\n",x_displacement);
		printf("���� ���� v^2 - v0^2 = 2 * a * ��x�� �����ϸ� ���ӵ� a �� ������ �� �ִ�.\n");
		printf("�� �Ŀ� �����ϸ� (%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a m/s^2 * %6.2lf m �̴�.\n", velocity_f, velocity_m_s, x_displacement);

	}

	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   �� ��   =============================\n");

		acceleration = (velocity_f * velocity_f) - (velocity_m_s * velocity_m_s) / (2 * x_displacement);

		printf("���� ���ӵ� a �� ���� ������ �ϸ� ���ӵ� a = %6.2lf m/s^2 �̴�\n", acceleration);

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


