#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    for(max=a<b?a:b;max>=1;max--)
    {
        if(a%max==0 && b%max==0)
        break;
    }
    printf("%d",max);
    printf("\n");
    return 0;
}