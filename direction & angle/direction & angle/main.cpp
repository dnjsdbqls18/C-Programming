#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int angle_180;
    int angle;
    int Cadinal_Points = 0 + rand() % 12;

    printf("0. 悼率  1. 合悼率  2. 合率  3. 合辑率  4. 辑率  5. 辑巢率  6. 巢率  7. 巢悼率   8. 悼合率  9. 辑合率  10. 巢辑率  11. 悼巢率\n\n");
    switch (Cadinal_Points) {
    case 0:
        printf("0. 悼率 %dⅹ, ヨ = %d\n\n", 0,angle_180  = 0);
        break;
    case 1:
        angle = rand() % 89 + 1;
        printf("1. 合悼率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = 90 - angle);
        break;
    case 2:
        printf("2. 合率 %dⅹ, ヨ = %d\n\n", 90, angle_180 = 90);
        break;
    case 3:
        angle = rand() % 89 + 1;
        printf("3. 合辑率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = 90 + angle);
        break;
    case 4:
        printf("4. 辑率 %dⅹ, ヨ = %d\n\n", 180, angle_180 = 180);
        break;
    case 5:
        angle = rand() % 89 + 1;
        printf("5. 辑巢率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = -90 - (90 - angle));
        break;
    case 6:
        printf("6. 巢率 %dⅹ, ヨ = %d\n\n", 270, angle_180 = -90);
        break;
    case 7:
        angle = rand() % 89 + 1;
        printf("7. 巢悼率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = -90 + angle);
        break;
    case 8:
        angle = rand() % 89 + 1;
        printf("8. 悼合率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = angle);
        break;
    case 9:
        angle = rand() % 89 + 1;
        printf("9. 辑合率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = 180 - angle);
        break;
    case 10:
        angle = rand() % 89 + 1;
        printf("10. 巢辑率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = -90 - angle);
        break;
    case 11:
        angle = rand() % 89 + 1;
        printf("11. 悼巢率 %dⅹ, ヨ = %d\n\n", angle, angle_180 = -angle);
        break;
    }
}