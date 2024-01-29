/*
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main()
{
    FILE* fp = fopen("test1.txt", "w"); //test������ w(����) ���� ����

    fputs("�Ѷ���б� �̷������Ƽ���а� 202315024", fp);

    fclose(fp); //���� ������ �ݱ�

    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#include <stdio.h>

void main()
{
    FILE* fp = fopen("test1.txt", "r");  //test������ r(�б�) ���� ����
    char buffer[MAX] = { 0, };

    fread(buffer, 1, MAX, fp); //��ü �б�
    printf("%s", buffer);

    fclose(fp); //���� ������ �ݱ�
}
