#include<stdio.h>
int square(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    square(x);
    return 0;
}
int square(int n)
{ 
    if (n==0)
       {
         return 1;
       }
    else
    {
    square(n-1);
    printf("%d ",n*n);
    
      }
      
}