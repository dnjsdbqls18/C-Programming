#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int num;

    printf("���װ� ���ϱ�\n");
    printf("4���� ��� 4, 5���� ��� 5�� �Է��ϼ���: ");
    scanf("%d", &num);

    if (num == 4) {
        double color1, color2, color3, color4;
        double ohm = 0;
        double ans = 1;
        double tolerance = 0;

        printf("�� = 0, �� = 1, �� = 2, �� = 3, Ȳ = 4, �� = 5, û = 6, �� = 7, ȸ = 8, �� = 9, �� = 10, �� = 11, ���� = 12\n");
        printf("ù ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color1);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color2);
        printf("�� ��° ���� �Է��ϼ���: ");
        scanf("%lf", &color3);
        printf("�� ��° ���� �Է��ϼ��� (1: ����, 2: ������, 5: �ʷϻ�, 6: �Ķ���, 7: �����, 8: ȸ��, 10: �ݻ�, 11: ����, 12: ����): ");
        scanf("%lf", &color4);

        for (int i = 0; i < color3; i++) {
            ans *= 10;
        }

        switch ((int)color4) {
        case 1:
            tolerance = 1;
            break;
        case 2:
            tolerance = 2;
            break;
        case 5:
            tolerance = 0.5;
            break;
        case 6:
            tolerance = 0.25;
            break;
        case 7:
            tolerance = 0.1;
            break;
        case 8:
            tolerance = 0.05;
            break;
        case 10:
            tolerance = 5;
            break;
        case 11:
            tolerance = 10;
            break;
        case 12:
            tolerance = 20;
            break;
        default:
            printf("��ȿ���� ���� ���� ���Դϴ�.\n");
            return 1;
        }

        ohm = (color1 * 10 + color2) * ans;

        if (ohm >= 1 && ohm < 1000) {
            printf("���װ� = %.1lf��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000 && ohm < 1000000) {
            ohm /= 1000;
            printf("���װ� = %.1lfK��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000000 && ohm < 1000000000) {
            ohm /= 1000000;
            printf("���װ� = %.1lfM��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
        else {
            ohm /= 1000000000;
            printf("���װ� = %.1lfG��, ���� = ��%.1lf%%\n", ohm, tolerance);
        }
    }
    else if (num == 5) {
        // 5�� ���� ó�� �ڵ�� �״�� �����մϴ�.
    }
    else {
        printf("�ùٸ� ���ڸ� �Է��ϼ��� (4 �Ǵ� 5).\n");
    }

    return 0;
}
