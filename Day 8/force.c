#include<stdio.h>
float force(float);
float force(float mass){
    return mass*9.8;
}
int main(){
    float mass;
    printf("enter mass");
    scanf("%f",&mass);
    printf("the mass is %f and force is %.2f",mass,force(mass));
    return 0;
}