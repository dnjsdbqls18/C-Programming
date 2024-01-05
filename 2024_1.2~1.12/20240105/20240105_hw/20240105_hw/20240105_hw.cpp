#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENT 20
#define CATEGORY 7

void score_func(double score[][CATEGORY])
{
     srand(time(NULL));

    for (int i = 0; i < STUDENT; i++)
    {
        score[i][0] = i + 1;

        for (int j = 1; j < CATEGORY - 1; j++)
        {
            score[i][j] = rand() % 100 + 1;
        }
    }
}

void total_score_func(double score[][CATEGORY])
{
    for (int i = 0; i < STUDENT; i++)
    {
        score[i][5] = ((score[i][1] * 0.3) + (score[i][2] * 0.4) + (score[i][3] * 0.2) + (score[i][4] * 0.1));
    }
}

void rank_num(double score[][CATEGORY], int rank_sort[])
{
    for (int i = 0; i < STUDENT; i++)
    {
        rank_sort[i] = (int)score[i][5];
    }

    for (int i = 0; i < STUDENT - 1; i++)
    {
        for (int j = 0; j < STUDENT - i - 1; j++)
        {
            if (rank_sort[j] < rank_sort[j + 1])
            {
                int temp = rank_sort[j];
                rank_sort[j] = rank_sort[j + 1];
                rank_sort[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < STUDENT; i++)
    {
        for (int j = 0; j < STUDENT; j++)
        {
            if ((int)score[i][5] == rank_sort[j])
            {
                score[i][6] = j + 1; 
                break;
            }
        }
    }
}

void print(double score[][CATEGORY])
{
    printf("번호   중간   기말   과제   출석   점수   등수\n");
    printf("==============================================\n");
    for (int i = 0; i < STUDENT; i++)
    {
        printf("%2.0lf번 %5.0lf %6.0lf %6.0lf %6.0lf %6d %6d\n", score[i][0], score[i][1], score[i][2],score[i][3], score[i][4], (int)score[i][5], (int)score[i][6]);
    }
}

int main()
{
    double score[STUDENT][CATEGORY] = { 0 };
    int rank_sort[20] = { 0 };

    score_func(score);
    total_score_func(score);
    rank_num(score,rank_sort);
    print(score);

    return 0;
}
