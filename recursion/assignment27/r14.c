#include<stdio.h>
int squares(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=squares(x);
    printf("%d",y);
    return 0;
}
int squares(int n)
{ int z;
    if (n==0)
     return 0;
    z=n*n+squares(n-1);
   return z;
}
  