#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int usage)
{
    int answer = 0;

    if (usage > 30) //20을 넘어가면 20전에는 그냥 20이하시 사용료 *430을 해주고 21부터는 넘은만큼만 *570해주고 30 초과시 넘은만큼 * 840
    {
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    }

    else if (usage > 20) //20을 넘어가면 20전에는 그냥 20이하시 사용료 *430을 해주고 21부터는 넘은만큼만 *570
    {
        answer = 20 * 430 + (usage - 20) * 570;
    }

    else // 20이하시 사용료에 *430
    {
        answer = usage * 430;
    }

    return answer;
}

int main() 
{
    int usage = 35;
    int ret = solution(usage);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}