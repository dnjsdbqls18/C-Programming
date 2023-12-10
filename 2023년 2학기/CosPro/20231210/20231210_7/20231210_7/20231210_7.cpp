#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k)
{
    int answer = 0; // ���� ����

    if (num_apple < 3 * num_carrot)  // ����� ������ ����� 3�躸�� ���� ���
    {
        answer = num_apple; // ��� ����� ���
    }
    else
    {
        answer = num_carrot; // ��� ����� ���
    }

    num_apple -= 3 * answer;     // ����� ����� ���� ��
    num_carrot -= answer;

    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)     // ���ᰡ k���� ���� ������ �ݺ�
    {
        if (i % 4 == 0)         // �� 4��° �ݺ�����
        {
            answer--; // �ֽ� �ϳ� ����
        }
    }

    return answer;
}


int main() 
{        // �ֽ� 1�ܿ� ��� 3�� ��� 1�� // Ű��� �䳢���� ��� ��� ���� ������� k��
    int num_apple1 = 5; //��� 3 ��� 1 �ϳ� �Ἥ ���� ��� 2�� �䳢���� �ֱ�
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1); // 1��

    int num_apple2 = 10;    //�ִ� ���9�� ��� 3�� �Ἥ �ֽ� 3���� ���� �� ������ �̷��� �Ǹ� ���1�� ��� 2�� ���Ƽ� �䳢���� 4���� ����
    int num_carrot2 = 5;    // ��� 6�� ��� 2���Ἥ �ֽ� 2�ܿ� ���� ���4�� ��� 3���� �䳢���� ������ 4���� ��
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2); // 2��
}
