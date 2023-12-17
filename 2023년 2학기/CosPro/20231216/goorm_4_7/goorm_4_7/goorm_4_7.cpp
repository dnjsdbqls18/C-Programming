#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len) 
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
    {
        if (answer < scores2[i] - scores1[i])  //기말에서 중간점수를 뺀 값이 0보다 클 때
        {
            answer = scores2[i] - scores1[i];  //점수가 가장 많이 오른 사람의 점수를 알 수 있음
        }
    }

    return answer;
}

int func_b(int scores1[], int scores2[], int scores_len) 
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
    {
        if (answer > scores1[i] - scores2[i]) //기말에서 중간점수를 뺀 값이 0보다 작을 때
        {
            answer = scores1[i] - scores2[i]; // 점수가 가장 많이 떨어진 사람의 점수를 알 수 있음
        }
    }

    return answer;
}


int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    int* answer = (int*)malloc(sizeof(int) * 2); //answer동적할당 및 배열
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len); //최대점수
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len); //최소점수
    return answer;
}

int main() 
{
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };
    int* ret = solution(mid_scores, 3, final_scores, 3);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++)
    {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}