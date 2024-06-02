#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%5==0)
    printf("number is divisible by 5");
    else
    printf("not divisible by 5");
    printf("\n");
    return 0;
}