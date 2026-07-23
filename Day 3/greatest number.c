#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter number1 ");
    scanf("%d",&a);
    printf("enter number2 ");
    scanf("%d",&b);
    printf("enter number3 ");
    scanf("%d",&c);
    printf("enter number4 ");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
    {
        printf("the greatest number is %d",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("the greatest number is %d",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("the greatest number is %d",c);
    }
    else{
        printf("the greatest number is %d",d);
    }
    return 0;
}