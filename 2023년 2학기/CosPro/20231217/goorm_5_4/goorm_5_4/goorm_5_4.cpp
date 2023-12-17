#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int taekwondo, int running, int shooting[], int shooting_len)
{
    int answer = 0;

    if (taekwondo >= 25) //25경기이상 승리할 시에 250점
    {
        answer += 250;
    }
    else
    {
        answer += taekwondo * 8; //25경기 이상 승리가 아니면 각 경기마다 *8
    }

    answer += 250 + (60 - running) * 5; //조건이 태권도가 25이상 승리이기 때문에 250 + 1분 초과시 -5 1분 단축시 +5

    int count = 0;
    for (int i = 0; i < shooting_len; i++)
    {
        answer += shooting[i]; //과녁에 맞춘 점수들 다 더 해줌
        if (shooting[i] == 10) //10점 맞춘게 몇번인지 카운트
        {
            count++;
        }
    }

    if (count >= 7) // 10점 맞춘게 7번 이상이면 + 100
    {
        answer += 100;
    }

    return answer;
}

int main()
{
    int taekwondo = 27;
    int running = 63;
    int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
    int shooting_len = 10;
    int ret = solution(taekwondo, running, shooting, shooting_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}