#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int korean, int english)
{
    int answer = 0;

    int math = 210 - korean - english; //평균 70점 이상이면 되기 때문에 평균 70점일 경우가 210이기 때문에 210에서 국어와 영어를 빼주면 수학의 최소 점수를 알 수 있음

    if (math > 100)
    {
        answer = -1;
    }

    else
    {
        answer = math;
    }

    return answer;
}

int main()
{
    int korean = 70;
    int english = 60;
    int ret = solution(korean, english);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
