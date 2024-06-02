#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
    {
        printf("divisible by 3 and 2");
    }
    else
    printf(" not divisible by 3 and 2");
    printf("\n");
    return 0;
}