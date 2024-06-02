//write the program to check the roots of the given quadratic equations and real and distinct real equal and imaginary
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d==0)
    printf("real and equal root");
    else if(d>0)
    printf("real and equal root");
    else
    printf("imaginary root");
    printf("\n");
    return 0;
}