#include<stdio.h>
int main()
{
    int prime =0;
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i=2;i<n;i++)
    {
       if(n%i==0 && n!=2){
        prime=1;
        break;
       } 
    }
    if(prime){
        printf("the number %d is not prime",n);
    }
    else{
        printf("the number %d is prime",n);
    }
    return 0;
}