#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len)
{
    int* answer;
    answer = (int*)malloc(sizeof(int) * score_len);

    for (int i = 0; i < score_len; i++)
    {
        answer[i] = 1;        // 대소 비교해서 +1을 해주기 위해 일단 모든 답(?)을 1로 설정
    }

    for (int i = 0; i < score_len; i++)
    {
        for (int j = i + 1; j < score_len; j++)  // score 배열에 맞춰서 비교하며 answer++
        {
            if (score[i] < score[j])                // 비교 대상보다 작으면 자신을 +
            {
                answer[i]++;
            }
            else if (score[i] > score[j])   // 비교 대상보다 크면 비교대상을 +
            {
                answer[j]++;
            }
            else                        // ex) score[0] = 90이 기준이고 나머지 score[1~7]은 90보다 작으니까 answer[1~7]은 2로 올라가 있음
            {                           //     그럼 score[1] = 87로 2이고 score[2] = 87로 2로 나오고 나머지는 87보다 작으니까 3으로 올라감
                answer[i];              //     이런 식으로 계속 비교하면 자신보다 비교대상이 크면 자신을 더하고 자신보다 비교대상이 작으면 비교대상을 더해서 값이 나옴 
            }

        }
    }
    return answer;
}

int main() 
{
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len1; i++)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", ret1[i]);
    }
    printf("] 입니다.\n");

    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len2; i++)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", ret2[i]);
    }
    printf("] 입니다.\n");
}