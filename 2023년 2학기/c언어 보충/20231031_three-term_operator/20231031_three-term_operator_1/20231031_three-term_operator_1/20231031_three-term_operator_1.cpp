#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2;

    if (num1)         
        num2 = 200;   
    else              
        num2 = 300;   

    printf("%d\n", num2); 

    return 0;
}