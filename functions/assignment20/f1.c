#include<stdio.h>
#define pi 3.14
int area(float);
int main()
{
 float x,y;
 printf("enter the radius");
 scanf("%f",&y);
 x=area(y);
 printf("area is %f",x);
}
int area(float r)
{
    float a;
    a=pi*(r*r);
    return a;
}