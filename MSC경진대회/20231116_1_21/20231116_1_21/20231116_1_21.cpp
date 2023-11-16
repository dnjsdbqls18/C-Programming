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
    double Θ1 = 51;// +rand() % (10 + 1) - 2;
    double Θ2 = -53;// +rand() % (10 + 1) - 3;
    double x, y, x1, x2, y1, y2, d;
   
    printf("1. 극좌표계에서 (r,Θ) = (%6.2lf m, %6.2lf°)와 (%6.2lf m, %6.2lf°)이다 .\n\n", r1, Θ1, r2, Θ2);
    printf("   (a) 두 점 사이의 거리를 구하라.\n\n\n");

    printf("//////////////////// 풀이 ////////////////////\n\n");
    printf("각 끝의 점을 A와 B로 설정\n");
    printf("점 A,B의 좌표 = (r * cosΘ, r * sinΘ)\n");
    printf("공식 : √((x1 - x2)^2 + (y1 - y2)^2)\n\n");

    x1 = r1 * cos(Θ1 * DEG2RAD);
    y1 = r1 * sin(Θ1 * DEG2RAD);

    x2 = r2 * cos(Θ2 * DEG2RAD);
    y2 = r2 * sin(Θ2 * DEG2RAD);

    x = x1 - x2;
    y = y1 - y2;

    d = sqrt(pow(x, 2) + pow(y, 2));

    printf("//////////////////// 정답 ////////////////////\n\n");
    printf("두 점 사이의 거리 = %6.2lf\n", d);

    return 0;
}
