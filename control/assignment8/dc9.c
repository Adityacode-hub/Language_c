#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the 1st number");
    scanf("%d",&x);
    printf("enter the 2nd number");
    scanf("%d",&y);
    if(x>y)
    printf("greatest is = %d",x);
    else if (x==y)
    {
        printf("%d",x);
    }
    else
    printf("greatest is = %d",y);
    printf("\n");
    return 0;
}