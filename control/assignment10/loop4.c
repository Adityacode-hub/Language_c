#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    printf("the triangle is valid");
    else{
        printf("invalid triangle ");
    }
}