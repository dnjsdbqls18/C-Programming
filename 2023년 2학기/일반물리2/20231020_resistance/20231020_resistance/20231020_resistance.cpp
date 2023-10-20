#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    int num;

    printf("저항값 구하기\n");
    printf("4색띠 라면 4, 5색띠 라면 5를 입력하세요: ");
    scanf("%d", &num);

    if (num == 4) {
        double color1, color2, color3, color4;
        double ohm = 0;
        double ans = 1;
        double tolerance = 0;

        printf("흑 = 0, 갈 = 1, 적 = 2, 등 = 3, 황 = 4, 록 = 5, 청 = 6, 자 = 7, 회 = 8, 백 = 9, 금 = 10, 은 = 11, 없음 = 12\n");
        printf("첫 번째 색을 입력하세요: ");
        scanf("%lf", &color1);
        printf("두 번째 색을 입력하세요: ");
        scanf("%lf", &color2);
        printf("세 번째 색을 입력하세요: ");
        scanf("%lf", &color3);
        printf("네 번째 색을 입력하세요 (1: 갈색, 2: 빨간색, 5: 초록색, 6: 파란색, 7: 보라색, 8: 회색, 10: 금색, 11: 은색, 12: 없음): ");
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
            printf("유효하지 않은 오차 값입니다.\n");
            return 1;
        }

        ohm = (color1 * 10 + color2) * ans;

        if (ohm >= 1 && ohm < 1000) {
            printf("저항값 = %.1lfΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000 && ohm < 1000000) {
            ohm /= 1000;
            printf("저항값 = %.1lfKΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else if (ohm >= 1000000 && ohm < 1000000000) {
            ohm /= 1000000;
            printf("저항값 = %.1lfMΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
        else {
            ohm /= 1000000000;
            printf("저항값 = %.1lfGΩ, 오차 = ±%.1lf%%\n", ohm, tolerance);
        }
    }
    else if (num == 5) {
        // 5색 띠의 처리 코드는 그대로 유지합니다.
    }
    else {
        printf("올바른 숫자를 입력하세요 (4 또는 5).\n");
    }

    return 0;
}
