#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int papers[], int papers_len, int K)
{
    int length = papers_len; 

    for (int i = 0; i < papers_len; i++)
    {
        K -= papers[i];     //k 갯수만큼 들어어고 papers 배열에서 받고 싶은 만큼 빼기

		if (K <= 0) // k가 0보다 작거나 같으면 그 배열의 순서 반환
		{
			return i;
		}
    }

    return length;
}

int main() 
{
	int papers1[] = { 2, 4, 3, 2, 1 };
	int papers_len1 = 5;
	int K1 = 10;
	int ret1 = solution(papers1, papers_len1, K1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int papers2[] = { 2, 4, 3, 2, 1 };
	int papers_len2 = 5;
	int K2 = 14;
	int ret2 = solution(papers2, papers_len2, K2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}