#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int stuffs[], int stuffs_len)
{
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for (int i = 0; i < stuffs_len; i++)
    {
        if (stuffs[i] > 3) //물건이 4개 이상일 떄 일반 카운터에서 계산
        {
            general_counter += stuffs[i]; // 물건 하나당 1분이 걸리고 4개 이상은 4,5로 총 2개로 9분이 걸림
        }
        else
        {
            small_counter += stuffs[i]; // 3개 이하일때는 작은 카운터를 쓰는데 총합은 10분이 걸림
        }
    }

    if (small_counter > general_counter) //일반카운터랑 작은카운터를 비교해서 더 많이 나온 시간이 답
    {
        answer = small_counter;
    }
    else
    {
        answer = general_counter;
    }

    return answer;
}

int main() 
{
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}