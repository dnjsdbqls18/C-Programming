#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main(void)
{
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("%d �� ¦���Դϴ�.\n", num);
    }
    else 
    {
        printf("%d �� Ȧ���Դϴ�.\n", num);
    }

    return 0;
}
*/

/*int main(void)
{
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    switch (num % 2) 
    {
    case 0:
        printf("%d �� ¦���Դϴ�.\n", num);
        break;
    case 1:
        printf("%d �� Ȧ���Դϴ�.\n", num);
        break;
    }

    return 0;
}
*/

/*int main(void)
{
    char eng;
    printf("�����ڸ� �Է��ϼ���: ");
    scanf("%c", &eng);

    if (eng >= 'a' && eng <= 'z') 
    {
        printf("%c �� �ҹ����Դϴ�.\n", eng);
    }
    else 
    {
        printf("�����ڰ� �ƴմϴ�.\n");
    }

    return 0;
}
*/



/*int main(void)
{
    float score;
    printf("������ �Է��ϼ���: ");
    scanf("%f", &score);

    if (score >= 90.0) 
    {
        printf("������ A�Դϴ�.\n");
    }
    else if (score >= 80.0) 
    {
        printf("������ B�Դϴ�.\n");
    }
    else if (score >= 70.0) 
    {
        printf("������ C�Դϴ�.\n");
    }
    else if (score >= 60.0) 
    {
        printf("������ D�Դϴ�.\n");
    }
    else 
    {
        printf("������ F�Դϴ�.\n");
    }

    return 0;
}
*/


int main(void) 
{
    float score;
    printf("������ �Է��ϼ���: ");
    scanf("%f", &score);

    int grade = (int)(score / 10);  // ������ 10���� ���� ���� ���մϴ�.
    switch (grade) 
    {
    case 10:
    case 9:
        printf("������ A�Դϴ�.\n");
        break;
    case 8:
        printf("������ B�Դϴ�.\n");
        break;
    case 7:
        printf("������ C�Դϴ�.\n");
        break;
    case 6:
        printf("������ D�Դϴ�.\n");
        break;
    default:
        printf("������ F�Դϴ�.\n");
        break;
    }

    return 0;
}

