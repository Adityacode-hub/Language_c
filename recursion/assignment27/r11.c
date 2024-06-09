#include<stdio.h>
int natural(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=natural(x);
    printf("%d",y);
    return 0;
}
int natural(int n)
{ int z;
    if (n==1)
     return 1;
    z=n+natural(n-1);
   return z;
}
      
    