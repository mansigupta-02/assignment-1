#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("enter marks 1\n");
    scanf("%d",&marks1);
    printf("enter marks 2\n");
    scanf("%d",&marks2);
    printf("enter marks 3\n");
    scanf("%d",&marks3);
    printf("The marks are %d %d and %d \n", marks1,marks2,marks3);
    if(marks1<33 || marks2<33 || marks3<33)
    {
      printf("you are fail in individual subject");  
    }
    else if ((marks1+marks2+marks3)/3<33)
    {
        printf("you are fail as you have less percentage");
    }
    else{
        printf("you are pass");
    }
    return 0;
}
