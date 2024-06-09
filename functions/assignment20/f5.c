#include<stdio.h>
float area(float);
#define pi 3.14

float area(float r)
{
    float a;
    a=pi*r*r;
    return a;
}
int main()
{
     float x,z;
printf("enter the radius of the circle");
scanf("%f",&x);
z=area(x);
printf("area of the circle =%.2f",z);

}