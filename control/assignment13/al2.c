#include<stdio.h>
int main()
{
    int x,sum=0,i;
    printf("enter the number");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        sum=sum+2*i+1;

    }
    printf("sum is %d",sum);
    printf("\n");
    return 0;
}