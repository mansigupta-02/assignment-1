#include <stdio.h>
int main(){
    int arr[10],j;
    printf("enter no. for table");
    scanf("%d",&j);
    for (int i =0; i < 10; i++)
    {
        arr[i]= j* (i+1);
    }
    for ( int i=0; i<10 ;i++)
    {
        printf("the table of %d x %d = %d\n",j,i+1,arr[i]);
    }
    return 0;

}