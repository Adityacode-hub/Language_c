#include<stdio.h>
int main()
{
    int a[10];
    int i,sum;
    printf("enter the values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of the number :%d",sum);
}