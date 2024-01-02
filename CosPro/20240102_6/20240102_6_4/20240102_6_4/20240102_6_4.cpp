#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* cards[][2], int cards_len)
{
    int answer = 0; 
    int count = 0;  

    // 첫 번째와 두 번째 카드의 색상이 같은지 확인
    if (!strcmp(cards[0][0], cards[1][0]))
    {
        count++;
    }
    // 두 번째와 세 번째 카드의 색상이 같은지 확인
    else if (!strcmp(cards[1][0], cards[2][0]))
    {
        count++;
    }
    // 첫 번째와 세 번째 카드의 색상이 같은지 확인
    else if (!strcmp(cards[0][0], cards[2][0]))
    {
        count++;
    }

    // 카드 값의 합을 계산
    for (int i = 0; i < cards_len; i++)
    {
        answer += atoi(cards[i][1]); // 문자열을 정수로 변환하고 총합에 추가
    }

    // 일치하는 색상의 개수에 따라 결과를 조정
    if (count >= 3)
    {
        answer *= 3; // 모든 세 카드가 같은 색상이면 합을 세 배로 증가
    }
    else if (count >= 1)
    {
        answer *= 2; // 최소한 한 쌍의 카드가 같은 색상이면 합을 두 배로 증가
    }

    return answer; 
}

int main() 
{
	char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
	int cards_len1 = 3;
	int ret1 = solution(cards1, cards_len1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
	int cards_len2 = 3;
	int ret2 = solution(cards2, cards_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}