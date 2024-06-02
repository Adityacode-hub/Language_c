#include<stdio.h>
int main()
{
    int x,sum=0,i;
    printf("enter the number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum=sum+i*i*i;

    }
    printf("sum is %d",sum);
    printf("\n");
    return 0;
}