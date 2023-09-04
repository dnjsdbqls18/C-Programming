#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>




int main()

{

	int a, b; // 파일에서 읽어올 때 fscanf에 사용할 변수a와 반복문에 사용할 변수 b 선언

	int* data; // 동적메모리에 사용할 정수형 포인터 선언

	FILE* fp; // 파일포인터 fp 선언

	fp = fopen("data.txt", "r"); // "data.txt"파일 열기



	if (fp != NULL) // 파일이 정상적으로 열렸을 때 if문실행

	{

		fscanf(fp, "%d", &a); // "data.txt"파일의 첫번째 값을 입력받아서

		data = (int*)malloc(sizeof(int) * a); // 첫번째 값만큼 동적으로 정수형 배열을 만듭니다.



		for (b = 0; b < a; b++) // 배열의 크기만큼 값을 입력 받음

		{

			fscanf(fp, "%d", &data[b]);

		}



		fclose(fp); // 입력을 받은뒤에 파일닫기



		for (b = 0; b < a; b++) // 입력받은 배열을 출력

		{

			printf("data[%d] : %d \n", b, data[b]);

		}

		free(data); // 메모리 반환

	} //close if()



	else {

		printf("파일 입력받기 실패 \n");

	}

}