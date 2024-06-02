#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
    {
        printf("it is divisible by either 7 or 3 or both");
    }
    else
    {
       printf("it is neither divisible by 7 nor divisible by 3");
    }
    printf("\n");
    return 0;
}