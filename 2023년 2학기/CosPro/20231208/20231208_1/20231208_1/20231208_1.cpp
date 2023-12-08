#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int number1, int number2)  // (수 -  뒤집은 수) 함수
{
    int ret = 0;

    if (number1 > number2) 
        ret = number1 - number2;
    else
        ret = number2 - number1;

    return ret; 
}

int func_b(int number) //120       23
{
    int ret = 0;

    while (number != 0)       23
    {
        number = number / 10;
        ret++;
    }

    return ret; //1 = 0
}

int func_c(int number, int digit) // 120 3         23  2
{
    int ret = 0;

    for (int i = 0; i < digit; i++) //0 1 2       0 1 
    {
        int temp = number % 10; // 0 2 1             3              2
        number = number / 10; // 12         12/ 10 = 1  0                          2     0
        ret = ret * 10 + temp; //ret = 0*10+0 0    2    2*10+1   21                  3    3*10+2
    }

    return ret;
}

int solution(int number) //120
{
    int answer = 0;

    int digit = func_b(number); // 주어진 자릿수 //3             2
    int convert_number = func_c(number,digit); //숫자 뒤집기

    answer = func_a(number,convert_number);

    return answer;
}

int main() 
{
    int number1 = 120;
    int ret1 = solution(number1);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int number2 = 23;
    int ret2 = solution(number2);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
