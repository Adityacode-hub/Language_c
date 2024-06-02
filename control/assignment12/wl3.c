#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i+1);
        i++;
    }
    printf("\n");
    return 0;
}