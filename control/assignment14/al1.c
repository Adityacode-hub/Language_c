#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    for(max=a>b?a:b; max<=a*b;max++)
    {
        if(max%a==0 && max%b==0)
            break;
        
    printf("lcm =%d",max);
    printf("\n");
    return 0;
    }




}