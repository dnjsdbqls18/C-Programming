#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double r;
    double charge = 1.6 * pow(10, -19);
    double m = 9.1 * pow(10, -31);
    double magnetic_field = 5.7 * pow(10, -5);
    double v;
    double F;

    printf("대전입자가 그린 원궤도의 반지름 r = ");
    scanf("%lf", &r);
    printf("\n");

    printf("대전입자의 전하량 q = 1.6 * 10^(-19) C\n\n");
    printf("질량 m = 9.1 * 10^(-31) kg\n\n");
    printf("자기장의 크기 B = 5.7 * 10^(-5) T\n\n\n");

    printf("(a) 대전입자가 자기장에 입사될 때의 속력은 얼마인가?\n");
    printf("대전입자의 입사 속도의 크기를 v, 자기력 F = qvB를 받아 원운동하므로 qvB = mv^2/r\n");
    printf("∴ v = qBr/m\n");
    v = (charge * magnetic_field * r) / m;
    printf("    = %.1e m/s\n\n", v);

    printf("(b) 자기장에서 대전입자가 받는 힘은 얼마인가?\n");
    printf("  F = qvB\n");
    F = charge * v * magnetic_field;
    printf("    = %.1e N\n", F);

    return 0;
}
