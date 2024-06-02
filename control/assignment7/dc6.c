//find odd and even without using modulo operator
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x/2*2==x)
    printf("even");
    else
    printf("odd");
    printf("\n");
    return 0;
}