#include<stdio.h>
int oddnatural(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=oddnatural(x);
    printf("%d",y);
    return 0;
}
int oddnatural(int n)
{ int z;
    if (n==1)
     return 1;
    z=2*n-1+oddnatural(n-1);
   return z;
}
      