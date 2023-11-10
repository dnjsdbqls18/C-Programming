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

    printf("�������ڰ� �׸� ���˵��� ������ r = ");
    scanf("%lf", &r);
    printf("\n");

    printf("���������� ���Ϸ� q = 1.6 * 10^(-19) C\n\n");
    printf("���� m = 9.1 * 10^(-31) kg\n\n");
    printf("�ڱ����� ũ�� B = 5.7 * 10^(-5) T\n\n\n");

    printf("(a) �������ڰ� �ڱ��忡 �Ի�� ���� �ӷ��� ���ΰ�?\n");
    printf("���������� �Ի� �ӵ��� ũ�⸦ v, �ڱ�� F = qvB�� �޾� ����ϹǷ� qvB = mv^2/r\n");
    printf("�� v = qBr/m\n");
    v = (charge * magnetic_field * r) / m;
    printf("    = %.1e m/s\n\n", v);

    printf("(b) �ڱ��忡�� �������ڰ� �޴� ���� ���ΰ�?\n");
    printf("  F = qvB\n");
    F = charge * v * magnetic_field;
    printf("    = %.1e N\n", F);

    return 0;
}
