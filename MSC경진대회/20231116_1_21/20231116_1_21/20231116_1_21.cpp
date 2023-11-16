#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define DEG2RAD M_PI / 180.0

int main()  
{
    srand(time(NULL));

    double r1 = 5.00;// + rand() % (5 + 1) - 1;
    double r2 = 4.00;// +rand() % (5 + 1) - 3;
    double ��1 = 51;// +rand() % (10 + 1) - 2;
    double ��2 = -53;// +rand() % (10 + 1) - 3;
    double x, y, x1, x2, y1, y2, d;
   
    printf("1. ����ǥ�迡�� (r,��) = (%6.2lf m, %6.2lf��)�� (%6.2lf m, %6.2lf��)�̴� .\n\n", r1, ��1, r2, ��2);
    printf("   (a) �� �� ������ �Ÿ��� ���϶�.\n\n\n");

    printf("//////////////////// Ǯ�� ////////////////////\n\n");
    printf("�� ���� ���� A�� B�� ����\n");
    printf("�� A,B�� ��ǥ = (r * cos��, r * sin��)\n");
    printf("���� : ��((x1 - x2)^2 + (y1 - y2)^2)\n\n");

    x1 = r1 * cos(��1 * DEG2RAD);
    y1 = r1 * sin(��1 * DEG2RAD);

    x2 = r2 * cos(��2 * DEG2RAD);
    y2 = r2 * sin(��2 * DEG2RAD);

    x = x1 - x2;
    y = y1 - y2;

    d = sqrt(pow(x, 2) + pow(y, 2));

    printf("//////////////////// ���� ////////////////////\n\n");
    printf("�� �� ������ �Ÿ� = %6.2lf\n", d);

    return 0;
}
