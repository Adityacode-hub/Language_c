//bcz it takes the power a to the power n
#include <stdio.h>
#include <math.h>

int powRec(int a,int b)
{
  if(b==0)
    return 1;
  return a*powRec(a,b-1);
}
int main()
{
  int a = 4,b=3;
  printf("The number %d to the power %d is %d",a,b,powRec(a,b));
}
