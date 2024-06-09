#include<stdio.h>
int factorial(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=factorial(x);
    printf("%d",y);
    return 0;
}
int factorial(int n)
{   if(n==0)
      return 1;
    return n*factorial(n-1);
}
  