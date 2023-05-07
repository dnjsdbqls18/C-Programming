#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main(void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("%d 는 짝수입니다.\n", num);
    }
    else 
    {
        printf("%d 는 홀수입니다.\n", num);
    }

    return 0;
}
*/

/*int main(void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    switch (num % 2) 
    {
    case 0:
        printf("%d 는 짝수입니다.\n", num);
        break;
    case 1:
        printf("%d 는 홀수입니다.\n", num);
        break;
    }

    return 0;
}
*/

/*int main(void)
{
    char eng;
    printf("영문자를 입력하세요: ");
    scanf("%c", &eng);

    if (eng >= 'a' && eng <= 'z') 
    {
        printf("%c 는 소문자입니다.\n", eng);
    }
    else 
    {
        printf("영문자가 아닙니다.\n");
    }

    return 0;
}
*/



/*int main(void)
{
    float score;
    printf("성적을 입력하세요: ");
    scanf("%f", &score);

    if (score >= 90.0) 
    {
        printf("성적은 A입니다.\n");
    }
    else if (score >= 80.0) 
    {
        printf("성적은 B입니다.\n");
    }
    else if (score >= 70.0) 
    {
        printf("성적은 C입니다.\n");
    }
    else if (score >= 60.0) 
    {
        printf("성적은 D입니다.\n");
    }
    else 
    {
        printf("성적은 F입니다.\n");
    }

    return 0;
}
*/


int main(void) 
{
    float score;
    printf("성적을 입력하세요: ");
    scanf("%f", &score);

    int grade = (int)(score / 10);  // 점수를 10으로 나눈 몫을 구합니다.
    switch (grade) 
    {
    case 10:
    case 9:
        printf("성적은 A입니다.\n");
        break;
    case 8:
        printf("성적은 B입니다.\n");
        break;
    case 7:
        printf("성적은 C입니다.\n");
        break;
    case 6:
        printf("성적은 D입니다.\n");
        break;
    default:
        printf("성적은 F입니다.\n");
        break;
    }

    return 0;
}

