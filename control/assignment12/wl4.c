#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",2*n+1);
        n--;
    }
    printf("\n");
    return 0;
}