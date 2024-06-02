#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    for(c=a<b?a:b;c>=1;c--)
    {
        if(a%c==0 && b%c==0)
        break;

    }
    printf("%d",c);
    return 0;
}