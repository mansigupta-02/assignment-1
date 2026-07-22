#include<stdio.h>
int main()
{
    int num ;
    printf("enter a number");
    scanf("%d",&num);
    if(num%7==0){
        printf("the number %d is buzz number",num);
    }
    else if (num%10==7){
        printf("thhe number %d is a buzz number",num);
    }
    else(printf("the number %d is not a buzz number",num));
    return 0;

}