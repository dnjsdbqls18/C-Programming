// 2023.05.24   �̷������Ƽ���а� 202315024 ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 4. ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha(char c)�� �ۼ��ϰ� 
//    �̰��� ȣ���Ͽ��� ����ڰ� �Է��� ���ڰ� ���ĺ�('a'���� 'z'����)������ �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.

int check_alpha(char c) 
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
    {
        return 1; 
    }
    else 
    {
        return 0; 
    }
}

int main(void) 
{
    char ch;
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &ch);

    if (check_alpha(ch) == 1) 
    {
        printf("%c�� ���ĺ��Դϴ�.\n", ch);
    }
    else 
    {
        printf("%c�� ���ĺ��� �ƴմϴ�.\n", ch);
    }

    return 0;
}



