#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int angle_180;
    int angle;
    int Cadinal_Points = 0 + rand() % 12;

    printf("0. ����  1. �ϵ���  2. ����  3. �ϼ���  4. ����  5. ������  6. ����  7. ������   8. ������  9. ������  10. ������  11. ������\n\n");
    switch (Cadinal_Points) {
    case 0:
        printf("0. ���� %d��, �� = %d\n\n", 0,angle_180  = 0);
        break;
    case 1:
        angle = rand() % 89 + 1;
        printf("1. �ϵ��� %d��, �� = %d\n\n", angle, angle_180 = 90 - angle);
        break;
    case 2:
        printf("2. ���� %d��, �� = %d\n\n", 90, angle_180 = 90);
        break;
    case 3:
        angle = rand() % 89 + 1;
        printf("3. �ϼ��� %d��, �� = %d\n\n", angle, angle_180 = 90 + angle);
        break;
    case 4:
        printf("4. ���� %d��, �� = %d\n\n", 180, angle_180 = 180);
        break;
    case 5:
        angle = rand() % 89 + 1;
        printf("5. ������ %d��, �� = %d\n\n", angle, angle_180 = -90 - (90 - angle));
        break;
    case 6:
        printf("6. ���� %d��, �� = %d\n\n", 270, angle_180 = -90);
        break;
    case 7:
        angle = rand() % 89 + 1;
        printf("7. ������ %d��, �� = %d\n\n", angle, angle_180 = -90 + angle);
        break;
    case 8:
        angle = rand() % 89 + 1;
        printf("8. ������ %d��, �� = %d\n\n", angle, angle_180 = angle);
        break;
    case 9:
        angle = rand() % 89 + 1;
        printf("9. ������ %d��, �� = %d\n\n", angle, angle_180 = 180 - angle);
        break;
    case 10:
        angle = rand() % 89 + 1;
        printf("10. ������ %d��, �� = %d\n\n", angle, angle_180 = -90 - angle);
        break;
    case 11:
        angle = rand() % 89 + 1;
        printf("11. ������ %d��, �� = %d\n\n", angle, angle_180 = -angle);
        break;
    }
}