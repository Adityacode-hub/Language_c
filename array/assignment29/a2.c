#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    printf("enter the ten number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    
    }
    printf("sum of the hundred number %d",sum);
    printf("\n");
    return 0;
   

}