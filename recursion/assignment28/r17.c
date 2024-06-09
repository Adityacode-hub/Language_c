#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,p;
    printf("enter the number");
    scanf("%d",&x);
    y=hcf(x,p);
    printf("%d",y);
    return 0;
}
int hcf(int a,int b)
{ int z;
    if (a>b)
    {
        if(a%b==0)
          return b;
        return hcf(a%b,b);

    }
    else{
        if(b%a==0)
          return a;
        return hcf(a,b%a);
    }
}
  
  
// Formal description of the Euclidean algorithm
// Input Two positive integers, a and b.
// Output The greatest common divisor, g, of a and b.
// Internal computation
// If a<b, exchange a and b.
// Divide a by b and get the remainder, r. If r=0, report b as the GCD of a and b.
// Replace a by b and replace b by r. Return to the previous step.