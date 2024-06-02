//lcm logic 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    for(c=a<b?a:b;c<=a*b;c++)
    {
        if(c%a==0 && c%b==0)
        break;
    }
    printf("%d",c);
    printf("\n");
    return 0;
}