#include<stdio.h>
int main()
{
    int x;
    printf("enter the year");
    scanf("%d",&x);
    if(x%4==0 || x%400==0)
    printf("leap year");
    else if(x%100==0)
    printf("leap year");
    else
    printf("not a leap year");
    printf("\n");
    return 0;
}