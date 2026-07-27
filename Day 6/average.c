#include<stdio.h>

float average(int a,int b,int c);
float average(int a,int b,int c){
    return (a+b+c)/3;
}
int main(){
int a,b,c;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("enter c");
scanf("%d",&c);
printf("the average of a,b,c is %.2f",average(a,b,c));
return 0;
}


