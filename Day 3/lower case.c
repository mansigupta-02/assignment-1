#include<stdio.h>
int main()
{
    char ch ;
    printf("enter the character");
    scanf("%c",&ch);
    printf("the character is %c\n",ch);
    printf("the value of character is %d \n",ch);//%d here gives ascii value
    if (ch>=97 && ch<=122){
        printf("the given number is lower case");
    }
    else {
        printf("the given number is not lower case");
    }
    return 0;
}
