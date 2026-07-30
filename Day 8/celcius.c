#include <stdio.h>
float c2f(float);
float c2f(float c){
    return ((9*c)/5)+32;
}
int main ()
{
    float c;
    printf("enter celcius temp");
    scanf("%f",&c);
    printf ("celcius to farenheit for %f is %.2f",c,c2f(c));
    return 0;
}