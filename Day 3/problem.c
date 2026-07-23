#include<stdio.h>
int main()
{
    int a=10;
    /*i am 11 because a=11 is an assignment operator and gives answer true*/
    if(a=11)
        printf("i am 11");
    else
        printf("i am not 11");
    return 0;
}