#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ladders[][2], int ladders_len, int win) 
{
    int answer = 0;

    int player[6] = { 1, 2, 3, 4, 5, 6 }; //사다리의 각 번호가 담긴 배열 players를 선언

    for (int i = 0; i < ladders_len; i++)
    {
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = player[ladders[i][0]]; //i=0 부터 i=사다리의 길이 만큼 반복
        player[ladders[i][0]] = temp; //  임시변수 temp를 사용하여 player[ladders[i][0] - 1]과 player[ladders[i][0]의 값을 교환
    }

    answer = player[win - 1]; //win의 위치에 있는 player가 승자
                              //player의 win번방-1에 있는 번호가 승자
    return answer;
}

int main()
{
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;
    int win = 3;
    int ret = solution(ladders, ladders_len, win);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}