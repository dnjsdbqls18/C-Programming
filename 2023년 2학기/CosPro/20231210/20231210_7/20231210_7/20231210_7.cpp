#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k)
{
    int answer = 0; // 음료 개수

    if (num_apple < 3 * num_carrot)  // 사과의 개수가 당근의 3배보다 적을 경우
    {
        answer = num_apple; // 모든 사과를 사용
    }
    else
    {
        answer = num_carrot; // 모든 당근을 사용
    }

    num_apple -= 3 * answer;     // 사과와 당근의 양을 뺌
    num_carrot -= answer;

    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)     // 음료가 k보다 작을 때까지 반복
    {
        if (i % 4 == 0)         // 매 4번째 반복마다
        {
            answer--; // 주스 하나 감소
        }
    }

    return answer;
}


int main() 
{        // 주스 1잔에 사과 3개 당근 1개 // 키우는 토끼에게 사과 당근 종류 상관없이 k개
    int num_apple1 = 5; //사과 3 당근 1 하나 써서 남은 사과 2개 토끼에게 주기
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1); // 1잔

    int num_apple2 = 10;    //최대 사과9개 당근 3개 써서 주스 3잔을 만들 수 있으나 이렇게 되면 사과1개 당근 2개 남아서 토끼에게 4개를 못줌
    int num_carrot2 = 5;    // 사과 6개 당근 2개써서 주스 2잔에 남은 사과4개 당근 3개를 토끼에세 무작위 4개를 줌
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2); // 2잔
}
