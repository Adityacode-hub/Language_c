#include<stdio.h>
int rnatural(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    rnatural(x);
    return 0;
}
int rnatural(int n)
{ 
    if (n>0)
    {
        printf("%d ",n);
      rnatural(n-1);
      
    }
      
}