#include<stdio.h>
int sum(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=sum(x);
    printf("%d",y);
    return 0;
}
int sum(int n)

{
    if(n==0)
      return 0;
    return n%10+sum(n/10);
}
  