#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double dt = 0.1;  // 시간 간격
double t_end = 5.0; // 시뮬레이션 종료 시간

double R, L, V;


double calculate_current(double I, double t)
{
    double dI_dt = (V - R * I) / L;
    return I + dI_dt * dt;
}

int main() 
{
    printf("R (resistance): ");
    scanf("%lf", &R);

    printf("L (inductance): ");
    scanf("%lf", &L);

    printf("V (voltage): ");
    scanf("%lf", &V);

    double I = 0.0;
    double t = 0.0;

    while (t <= t_end)
    {
        printf("Time: %.3f, Current: %.6f\n", t, I);

        I = calculate_current(I, t);
        t += dt;
    }

    return 0;
}