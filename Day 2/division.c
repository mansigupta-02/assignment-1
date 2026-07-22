#include<stdio.h>
int main()
{
    float a ;
    printf("enter your percentage");
    scanf("%f",&a);
    if (a<=100 && a>=60){
        printf("first division");
    }
    else if(a<60 && a>=45){
        printf("second division");
    }
    else if (a<45 && a>=35)
    {
        printf("third division");
    }
    else{
        printf("you are fail");}
    return 0;

}