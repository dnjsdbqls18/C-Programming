/*
2와 100사이에 있는 모든 소수(prime number)를 찾는 프로그램을 작성하라.
학번 : 202315024
학과 : 미래모빌리티공학과
이름 : 원유빈
날짜 : 2023/04/25
*/

#include <stdio.h>

int main(void) 
{
    int x, y, num;
    
    printf("2부터 100사이에 있는 모든 소수:\n");

    for (x = 2; x <= 100; x++) 
    {
        num = 1; 
        for (y = 2; y <= x / 2; y++) 
        {
            if (x % y == 0) 
            {
                num = 0; 
            }
        }
        if (num == 1) 
        {
            printf("%d ", x);
        }
    }
  
    return 0;
}