#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int a, int b)
{
    int answer = 0;

    for (int i = 1; i <= b; i++) //시작이 1일부터 열리기 때문에 +1을 해줘서 편하게 계싼
    {
        if ((a * i) % b == 0) // a에 i곱해주고 %6을 해서 나머지가 0으로 만들어 최소공배수 만들기
        {
            answer = a * i;
            break;
        }
    }

    return answer;
}

int main()
{
    int a = 4;
    int b = 6;
    int ret = solution(a, b);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}