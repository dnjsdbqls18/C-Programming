#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union UNION
{
    float test;
    char mbyte[4];
};

int main()
{
    union UNION u;

    for (int i = 0; i < 4; i++)
    {
        int temp;
        printf("mbyte[%d]�� ���� �Է��ϼ��� : ", i);
        scanf("%d", &temp);
        u.mbyte[i] = (char)temp;
    }
    printf("\n");

    printf("%f\n", u.test);

    return 0;
}
