/*
2�� 100���̿� �ִ� ��� �Ҽ�(prime number)�� ã�� ���α׷��� �ۼ��϶�.
�й� : 202315024
�а� : �̷������Ƽ���а�
�̸� : ������
��¥ : 2023/04/25
*/

#include <stdio.h>

int main(void) 
{
    int x, y, num;
    
    printf("2���� 100���̿� �ִ� ��� �Ҽ�:\n");

    for (x = 2; x <= 100; x++) 
    {
        num = 1; 
        for (y = 2; y <= x / 2; y++) 
        {
            if (x % y == 0) 
            {
                num = 0; 
            }
        }
        if (num == 1) 
        {
            printf("%d ", x);
        }
    }
  
    return 0;
}