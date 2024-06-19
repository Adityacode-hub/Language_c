#include<stdio.h>
int main()
{
    int i,a[10],sumodd=0,sumeven=0;
    printf("enter the ten number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
            sumeven=sumeven+a[i];
        }   
       
        else
        {
          sumodd=sumodd+a[i];
        }

    
    }
    printf("sum of the even number %d",sumeven);
    printf("\n");
    printf("sum of odd number is %d",sumodd);
    printf("\n");
    return 0;
}