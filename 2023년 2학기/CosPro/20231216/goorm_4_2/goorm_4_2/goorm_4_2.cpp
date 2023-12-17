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
    if (scores[0] < 40) //40�� �̸��̸� +1
    {
        answer++;
    }
    if (scores[1] < 44)//44�� �̸��̸� +1
    {
        answer++;
    }
    if (scores[2] < 35)//35�� �̸��̸� +1
    {
        answer++;
    }
    return answer;
}

int func_c(int scores[3]) 
{
    int answer = 0;
    if (scores[0] >= 80) //80�� �̻��̸� +1
    {
        answer++;
    }
    if (scores[1] >= 88) //88�� �̻��̸� +1
    {
        answer++;
    }
    if (scores[2] >= 70) //70�� �̻��̸� +1
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
        int passed = func_c(scores[i]); //�� �ش� ��� ������ �ش��ϴ��� Ȯ��
        int non_passed = func_b(scores[i]); //����� �������� ��������� �ݿ� �ش��ϴ� ������ �Ѱܾ� ��
        answer += func_a(passed, non_passed); //������� �̻��̰� ��������� �ݿ� �ش��ϴ� ���� �̻��̾�� ��
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}