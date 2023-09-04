#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Node {

	int a;

	double b;

};



int main()

{

	struct Node* print;

	FILE* fp;

	fp = fopen("data.txt", "wb"); // 바이너리값으로 저장



	print = (struct Node*)malloc(sizeof(struct Node));

	print->a = 1;

	print->b = 3.14;

	fwrite((void*)print, sizeof(struct Node), 1, fp);



	fclose(fp); // 파일 닫기

	free(print); // 메모리반환

}