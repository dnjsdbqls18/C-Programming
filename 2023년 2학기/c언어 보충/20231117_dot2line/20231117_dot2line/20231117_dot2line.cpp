#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, y1;
    double distance, x2, y2;

    // ����ڷκ��� a, b, c, x1, y1�� �Է¹���
    printf("������ ������ ax + by + c = 0���� a, b, c ���� �Է��ϼ���: ");
    printf("\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("���� ���� ���� ��ǥ (x1, y1)�� �Է��ϼ���: ");
    printf("\n");
    scanf("%lf %lf", &x1, &y1);

    // �������� �Ÿ� ���
    distance = fabs((a * x1 + b * y1 + c)) / sqrt(a * a + b * b);

    // (x1, y1)���� ������ ���� ���� �� ���
    x2 = x1 - (a * (a * x1 + b * y1 + c)) / (a * a + b * b);
    y2 = y1 - (b * (a * x1 + b * y1 + c)) / (a * a + b * b);

    // ��� ���
    printf("���� ���� ������ �Ÿ�: %lf\n", distance);
    printf("������ ���� ���� ���� ��ǥ: (%lf, %lf)\n", x2, y2);

    return 0;
}
a