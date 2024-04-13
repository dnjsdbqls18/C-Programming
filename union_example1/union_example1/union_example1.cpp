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
    u.test = 123.456;
    
    for (int i = 0; i < 4; i++)
    {
        printf("mbyte[%d] = %d\n", i, u.mbyte[i]);
    }
    printf("\n");

    printf("%f\n", u.test);

    return 0;
}
