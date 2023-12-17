#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int time_table[], int time_table_len) 
{
    int answer = 0;
    for (int i = time_table_len - 1; i >= 0; i--)  //끝수업부터 첫수업까지 -1을 해가며 계산
    {
        if (time_table[i] == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int func_b(int time_table[], int class1, int class2) 
{
    int answer = 0;
    for (int i = class1; i < class2; i++) //첫수업부터 끝수업까지만 계산 -> 그래야 뒤에 수업없는건 계산 안함
    {
        if (time_table[i] == 0)
        {
            answer++; //공강이면 ++
        }
    }

    return answer;
}

int func_c(int time_table[], int time_table_len)
{
    int answer = 0;
    for (int i = 0; i < time_table_len; i++) //첫수업부터 끝 수없까지 +1을 해가며 계산
    {
        if (time_table[i] == 1) 
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int solution(int time_table[], int time_table_len) 
{
    int answer = 0;
    int first_class = func_c(time_table, time_table_len); //첫수업 시간부터 끝 수업까지 언제언제 있는지 확인
    int last_class = func_a(time_table, time_table_len); //끝수업 시간부터 첫수업까지 언제언제 있는지 확인
    answer = func_b(time_table, first_class, last_class); // 공강 제외 뒤에 아예 수업없는건 제외
    return answer;
}

int main()
{
    int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
    int time_table_len = 10;
    int ret = solution(time_table, time_table_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}