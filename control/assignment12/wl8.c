#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
    printf("\n");
    return 0;
}