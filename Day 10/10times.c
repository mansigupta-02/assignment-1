#include<stdio.h>
void change_thirty_times(int*);
void change_thirty_times(int* a){
    *a= *a * 30;
}
int main (){
    int x;
    printf("enter the number");
    scanf("%d",&x);
    printf("the value off x is %d\n",x);
    change_thirty_times(&x);
    printf("the value of x is %d\n",x);
    return 0;
}