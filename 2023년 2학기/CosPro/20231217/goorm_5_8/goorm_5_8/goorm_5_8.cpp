#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int usage)
{
    int answer = 0;

    if (usage > 30) //20�� �Ѿ�� 20������ �׳� 20���Ͻ� ���� *430�� ���ְ� 21���ʹ� ������ŭ�� *570���ְ� 30 �ʰ��� ������ŭ * 840
    {
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    }

    else if (usage > 20) //20�� �Ѿ�� 20������ �׳� 20���Ͻ� ���� *430�� ���ְ� 21���ʹ� ������ŭ�� *570
    {
        answer = 20 * 430 + (usage - 20) * 570;
    }

    else // 20���Ͻ� ���ῡ *430
    {
        answer = usage * 430;
    }

    return answer;
}

int main() 
{
    int usage = 35;
    int ret = solution(usage);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}