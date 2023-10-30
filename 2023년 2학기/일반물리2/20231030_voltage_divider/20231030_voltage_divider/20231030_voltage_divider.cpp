#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double Vin, R1, R2, Vout;

    // 사용자로부터 입력 받기
    printf("입력 전압(Vin): ");
    scanf("%lf", &Vin);

    printf("첫 번째 저항의 저항 값(R1, 옴): ");
    scanf("%lf", &R1);

    printf("두 번째 저항의 저항 값(R2, 옴): ");
    scanf("%lf", &R2);

    // 전압 분배 계산
    Vout = Vin * (R2 / (R1 + R2));

    // 결과 출력
    printf("출력 전압(Vout): %.2lf\n", Vout);

    return 0;
}
