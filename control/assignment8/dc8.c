#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    x>99 & x<=1000 ?printf("not three digit number"):printf(" three digit number");
    printf("\n");
    return 0;
}