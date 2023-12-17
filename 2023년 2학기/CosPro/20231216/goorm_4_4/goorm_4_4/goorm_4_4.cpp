#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int classes[], int classes_len, int m)
{
    int answer = 0;
    for (int i = 0; i < classes_len; i++)
    {
        answer += classes[i] / m; //조교 1명이 30명이 가능하니까 한 반에 몇명 들어가는지 확인
        if (classes[i] % m != 0) //30의 배수가 아니면 애매하게 떨어지는 수들 계산하기 위함
        {
            answer++;
        }
    }

    return answer;
}

int main()
{
    int classes[] = { 80, 45, 33, 20 };
    int m = 30;
    int ret = solution(classes, 4, m);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}