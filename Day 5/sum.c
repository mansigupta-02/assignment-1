#include<stdio.h>
int main()
{
   /* int i=1;
    int sum =0;
    do{
        sum +=i;
        i++;
    }
    while (i<=10);
    printf("the sum of first 10 numbers is %d",sum);
    return 0;*/
    int sum=0;
    for (int i=0 ;i<=10;i++)
    {
        sum += i;
    }
    printf("the sum of first 10 digits is %d",sum);
    return 0;
}