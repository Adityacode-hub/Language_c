#include<stdio.h>
int main()
{
    int n,y=0;
    printf("enter the number");
    scanf("%d",&n);
    while (n!=0)
    {
        y=y*10+n%10;
        n=n/10;
    }
    printf("%d",y);
    printf("\n");
    return 0;
    

}