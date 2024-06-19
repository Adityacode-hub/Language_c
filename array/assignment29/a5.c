#include<stdio.h>
int main()
{
    int i,a[10],n;
    printf("enter the ten number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=n;i++)
    {
      
        if(a[0]>a[i])
        {
            a[0]=a[i];
        }
    
    }
    printf("smallest number is  %d",a[0]);
    printf("\n");
    return 0;
}