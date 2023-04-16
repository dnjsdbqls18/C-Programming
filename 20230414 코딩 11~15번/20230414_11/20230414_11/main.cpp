// singed -20억 ~ +20억
// unsigned 0 ~ 40억
// 각 기호, 문자에 아스키코드라는 것이 있음. 미국에서 표준화가 추진된 정보교환용 부호임.
// a는 97이라는 아스키코드가 있음

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char x;
	unsigned char y;
	char z; 
	
	x = 200;
	y = 200;
    z = 'a';

	printf("%d \n", x);
	printf("%d \n", y);
	printf("%d \n", z);

	return 0;

}