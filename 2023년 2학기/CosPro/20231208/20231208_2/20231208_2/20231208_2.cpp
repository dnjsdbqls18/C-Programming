#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int money, int price, int n) //8 2 4   6 2 2 
{ 
    int answer = 0;

    int empty_bottle = answer = money / price; // 8/2 = 4   6/2 = 3 

    while (n <= empty_bottle)  // 빈병 교환 시스템 4 <= 4       2 <= 3        2<=2
    {
        empty_bottle = empty_bottle - n;    // 3 - 2 = 1            0
        answer++;     // 5                          4           5
        empty_bottle++; // 9           2         1
    }

    return answer;
}

int main() {
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
