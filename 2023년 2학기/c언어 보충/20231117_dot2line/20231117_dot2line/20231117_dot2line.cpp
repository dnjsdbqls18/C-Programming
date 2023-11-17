#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, y1;
    double distance, x2, y2;

    // 사용자로부터 a, b, c, x1, y1를 입력받음
    printf("직선의 방정식 ax + by + c = 0에서 a, b, c 값을 입력하세요: ");
    printf("\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("직선 밖의 점의 좌표 (x1, y1)를 입력하세요: ");
    printf("\n");
    scanf("%lf %lf", &x1, &y1);

    // 직선과의 거리 계산
    distance = fabs((a * x1 + b * y1 + c)) / sqrt(a * a + b * b);

    // (x1, y1)에서 수직인 직선 위의 점 계산
    x2 = x1 - (a * (a * x1 + b * y1 + c)) / (a * a + b * b);
    y2 = y1 - (b * (a * x1 + b * y1 + c)) / (a * a + b * b);

    // 결과 출력
    printf("점과 직선 사이의 거리: %lf\n", distance);
    printf("수직인 직선 위의 점의 좌표: (%lf, %lf)\n", x2, y2);

    return 0;
}
a