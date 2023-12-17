#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int passed, int non_passed) 
{
    return (passed > 1 && non_passed == 0);
}

int func_b(int scores[3]) 
{
    int answer = 0;
    if (scores[0] < 40) //40점 미만이면 +1
    {
        answer++;
    }
    if (scores[1] < 44)//44점 미만이면 +1
    {
        answer++;
    }
    if (scores[2] < 35)//35점 미만이면 +1
    {
        answer++;
    }
    return answer;
}

int func_c(int scores[3]) 
{
    int answer = 0;
    if (scores[0] >= 80) //80점 이상이면 +1
    {
        answer++;
    }
    if (scores[1] >= 88) //88점 이상이면 +1
    {
        answer++;
    }
    if (scores[2] >= 70) //70점 이상이면 +1
    {
        answer++;
    }
    return answer;
}

int solution(int scores[][3], int scores_len)
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
    {
        int passed = func_c(scores[i]); //각 해당 통과 점수에 해당하는지 확인
        int non_passed = func_b(scores[i]); //통과는 못했지만 통과점수의 반에 해당하는 점수를 넘겨야 됨
        answer += func_a(passed, non_passed); //통과점수 이상이고 통과점수의 반에 해당하는 점수 이상이어야 함
    }
    return answer;
}

int main()
{
    int scores1[2][3] = 
    {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[6][3] =
    {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}