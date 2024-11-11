#include<stdio.h>
int main()
{
    int a[10];
    int i,sum;
    float avg;
    printf("enter the values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
       
    }
     avg=sum/10;
    printf("the avg of the number :%.2lf",avg);
}