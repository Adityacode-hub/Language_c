#include<stdio.h>
int evennatural(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=evennatural(x);
    printf("%d",y);
    return 0;
}
int evennatural(int n)
{ int z;
    if (n==0)
     return 0;
    z=2*n+evennatural(n-1);
   return z;
}
  