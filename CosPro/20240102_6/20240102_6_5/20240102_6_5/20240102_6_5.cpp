#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int money, int price, int n)
{
	int answer = 0; // 최종 결과를 저장하는 변수

	int empty_bottle = answer = money / price; // 초기 빈 병 수를 계산하고 answer에 할당

	// 빈 병이 교환 가능한 최소 개수(n)보다 많을 때까지 반복
	while (n <= empty_bottle)
	{
		empty_bottle = empty_bottle - n; // 빈 병 교환 후 남은 빈 병 수 계산
		answer++; // 교환한 제품 수 증가
		empty_bottle++; // 교환으로 생긴 새로운 빈 병 추가
	}

	return answer; 
}

int main() 
{
	int money1 = 8;
	int price1 = 2;
	int n1 = 4;
	int ret1 = solution(money1, price1, n1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int money2 = 6;
	int price2 = 2;
	int n2 = 2;
	int ret2 = solution(money2, price2, n2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}