#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
      
       if(n%i==0)
       {
        printf("not prime number");
       break;
       }
    if(i==n)
    {
        printf("prime=:%d",n);
        printf("\n");

    }
    return 0;

}