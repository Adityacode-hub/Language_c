#include<stdio.h>
int even(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    even(x);
    return 0;
}
int even(int n)
{ 
    if (n==0)
       {
         return 1;
       }
    else
    {
    even(n-1);
    printf("%d ",2*n);
      }
      
}