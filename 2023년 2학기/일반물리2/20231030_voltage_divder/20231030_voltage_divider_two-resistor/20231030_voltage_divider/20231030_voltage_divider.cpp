#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double Vin, R1, R2, Vout;

    // ����ڷκ��� �Է� �ޱ�
    printf("�Է� ����(Vin): ");
    scanf("%lf", &Vin);

    printf("ù ��° ������ ���� ��(R1, ��): ");
    scanf("%lf", &R1);

    printf("�� ��° ������ ���� ��(R2, ��): ");
    scanf("%lf", &R2);

    // ���� �й� ���
    Vout = Vin * (R2 / (R1 + R2));

    // ��� ���
    printf("��� ����(Vout): %.2lf\n", Vout);

    return 0;
}
