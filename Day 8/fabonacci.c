#include<stdio.h>
int fabonacci(int);
int fabonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    return fabonacci(n-1)+fabonacci(n-2);
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("the value of fabonacci at %d is %d",n,fabonacci(n));
    return 0;
}