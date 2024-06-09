#include<stdio.h>

int si(float,float,float);
int main()
{
 float x,a,b,c;
 printf("enter the principal,rate.time");
 scanf("%f %f %f",&a,&b,&c);
 x=si(a,b,c);
 printf("si is %f",x);
}
int si(float p,float r ,float t)
{
    float s;
    s=(p*r*t)/100;
    return s;
}