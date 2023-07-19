#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_3_8(int solution, int answer) //한라대학교 미래모빌리티공학과 원유빈
{
    srand(time(NULL));

    double Ai = 3; //+rand() % (8 + 1) - 2;
    double Aj = 2; //+rand() % (8 + 1) - 2;
    double Ak = 0;
    double Bi = -2; //+rand() % (8 + 1) - 2;
    double Bj = 1; //+rand() % (8 + 1) - 2;
    double Bk = 0;
    double i, j, k = 0;
    double i_cal = (Aj * Bk) - (Ak * Bj);
    double j_cal = (Ai * Bk) - (Ak * Bi);
    double k_cal = (Ai * Bj) - (Aj * Bi);

    printf("\n\n");
    printf("3-8 \n");
    printf("xy평면에 놓인 두 벡터 A = 3i + 2j와 B = -2i + j가 있다.\n\n");
    printf("(a) A x B를 계산하라.\n\n");
    printf("(b) A x B = -B x A임을 증명하라.\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) A x B를 계산하라.\n\n");

        printf("관련 공식 : 벡터의 외적 \n\n");
        printf("벡터 A의 성분 = (%6.2lf ,%6.2lf ,%6.2lf)\n",Ai,Aj,Ak);
        printf("벡터 B의 성분 = (%6.2lf ,%6.2lf ,%6.2lf)\n\n",Bi,Bj,Bk);

        printf("벡터 A x 벡터 B = |   i      j      k  |\n");
        printf("                  |%6.2lf %6.2lf %6.2lf|\n",Ai, Aj, Ak);
        printf("                  |%6.2lf %6.2lf %6.2lf|\n\n",Bi, Bj, Bk);
        
        printf("                = |%6.2lf %6.2lf|i - |%6.2lf %6.2lf|j + |%6.2lf %6.2lf|k\n",Aj,Ak,Ai,Ak,Ai,Aj);
        printf("                  |%6.2lf %6.2lf|    |%6.2lf %6.2lf|    |%6.2lf %6.2lf|\n\n",Bj,Bk,Bi,Bk,Bi,Bj);
        
        printf("((%6.2lf * %6.2lf) - (%6.2lf * %6.2lf))i - ((%6.2lf * %6.2lf) - (%6.2lf * %6.2lf))j + ((%6.2lf * %6.2lf) - (%6.2lf * %6.2lf))k\n\n",Aj,Bk,Ak,Bj,Ai,Bk,Ak,Bi,Ai,Bj,Aj,Bi);
        printf("=(%6.2lf)i - (%6.2lf)j + (%6.2lf)k\n\n", i_cal,j_cal,k_cal);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("벡터 A x 벡터 B = (%6.2lf)i - (%6.2lf)j + (%6.2lf)k\n\n", i_cal, j_cal, k_cal);
    }

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(b) A x B = -B x A임을 증명하라.\n\n");

        printf("관련 공식 : 벡터의 외적 \n\n");
        printf("벡터  A의 성분 = (%6.2lf ,%6.2lf ,%6.2lf)\n", Ai, Aj, Ak);
        printf("벡터 -B의 성분 = (%6.2lf ,%6.2lf ,%6.2lf)\n\n", -Bi, -Bj, Bk);

        printf("벡터 -B x 벡터 A = |   i      j      k  |\n");
        printf("                   |%6.2lf %6.2lf %6.2lf|\n", -Bi, -Bj, Bk);
        printf("                   |%6.2lf %6.2lf %6.2lf|\n\n", Ai, Aj, Ak);

        printf("                 = |%6.2lf %6.2lf|i - |%6.2lf %6.2lf|j + |%6.2lf %6.2lf|k\n", -Bj, Bk, -Bi, Bk, -Bi, -Bj);
        printf("                   |%6.2lf %6.2lf|    |%6.2lf %6.2lf|    |%6.2lf %6.2lf|\n\n", Aj, Ak, Ai, Ak, Ai, Aj);
      

        printf("((%6.2lf * %6.2lf) - (%6.2lf * %6.2lf))i - ((%6.2lf * %6.2lf) - (%6.2lf * %6.2lf))j + ((%6.2lf * %6.2lf) - (%6.2lf * %6.2lf))k\n\n", Aj, Bk, Ak, Bj, Ai, Bk, Ak, Bi, Ai, Bj, Aj, Bi);
        printf("(%6.2lf)i - (%6.2lf)j + (%6.2lf)k\n\n", i_cal, j_cal, k_cal);

        printf("(b) A x B = -B x A임을 증명하라.\n\n");

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("R' = \n");
    }
}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_3_8(1, 1);


}