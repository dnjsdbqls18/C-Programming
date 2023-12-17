#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int a, int b)
{
    int answer = 0;

    for (int i = 1; i <= b; i++) //������ 1�Ϻ��� ������ ������ +1�� ���༭ ���ϰ� ���
    {
        if ((a * i) % b == 0) // a�� i�����ְ� %6�� �ؼ� �������� 0���� ����� �ּҰ���� �����
        {
            answer = a * i;
            break;
        }
    }

    return answer;
}

int main()
{
    int a = 4;
    int b = 6;
    int ret = solution(a, b);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}