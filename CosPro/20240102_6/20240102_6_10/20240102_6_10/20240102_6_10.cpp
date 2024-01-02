#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int weight, int boxes[], int boxes_len)
{
    int answer = 0;

    // 각 상자에 대해 주어진 무게 범위 내에 들지 않는 경우를 확인
    for (int i = 0; i < boxes_len; i++)
    {
        // 주어진 무게의 10% 범위를 계산하고, 해당 범위를 벗어나면 answer를 증가
        if (boxes[i] < weight - (weight * 0.1) || boxes[i] > weight + (weight * 0.1))
        {
            answer++;
        }
    }

    return answer;
}

int main() 
{
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}