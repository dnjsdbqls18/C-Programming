#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int korean, int english)
{
    int answer = 0;

    int math = 210 - korean - english; //��� 70�� �̻��̸� �Ǳ� ������ ��� 70���� ��찡 210�̱� ������ 210���� ����� ��� ���ָ� ������ �ּ� ������ �� �� ����

    if (math > 100)
    {
        answer = -1;
    }

    else
    {
        answer = math;
    }

    return answer;
}

int main()
{
    int korean = 70;
    int english = 60;
    int ret = solution(korean, english);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
