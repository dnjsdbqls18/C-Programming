#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ladders[][2], int ladders_len, int win) 
{
    int answer = 0;

    int player[6] = { 1, 2, 3, 4, 5, 6 }; //��ٸ��� �� ��ȣ�� ��� �迭 players�� ����

    for (int i = 0; i < ladders_len; i++)
    {
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = player[ladders[i][0]]; //i=0 ���� i=��ٸ��� ���� ��ŭ �ݺ�
        player[ladders[i][0]] = temp; //  �ӽú��� temp�� ����Ͽ� player[ladders[i][0] - 1]�� player[ladders[i][0]�� ���� ��ȯ
    }

    answer = player[win - 1]; //win�� ��ġ�� �ִ� player�� ����
                              //player�� win����-1�� �ִ� ��ȣ�� ����
    return answer;
}

int main()
{
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;
    int win = 3;
    int ret = solution(ladders, ladders_len, win);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}