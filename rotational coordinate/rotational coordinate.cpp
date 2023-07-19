#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES //M_PI ����� ���� �߰�
#include <math.h>
#define DEG2RAD(x)  x*M_PI/180.

double x_new;
double y_new;

void rotational_coordinate(double x, double y, double angle_degree)
{
    x_new = cos(DEG2RAD(angle_degree)) * x - sin(DEG2RAD(angle_degree)) * y;
    y_new = sin(DEG2RAD(angle_degree)) * x + cos(DEG2RAD(angle_degree)) * y;
}

void main()
{
    double x;
    double y;
    double angle_degree;

    printf("(x��ǥ, y��ǥ) =  ");
    scanf("%lf %lf", &x,&y);

    printf("ȸ�� ����: ");
    scanf("%lf", &angle_degree);

    rotational_coordinate(x, y, angle_degree);

    printf("��ȯ ��ǥ = (%lf, %lf)\n", x_new, y_new);
}