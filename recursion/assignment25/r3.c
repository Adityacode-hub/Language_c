#include<stdio.h>
int oddnatural(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    oddnatural(x);
    return 0;
}
int oddnatural(int n)
{ 
    if (n==0)
       {
         return 1;
       }
    else
    {
    oddnatural(n-1);
    printf("%d ",2*n-1);
      }
      
}