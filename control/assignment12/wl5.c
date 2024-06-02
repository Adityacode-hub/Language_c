#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",2*n);
        n--;
    }
    printf("\n");
    return 0;
}