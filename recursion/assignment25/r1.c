#include<stdio.h>
int natural(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    natural(x);
    return 0;
}
int natural(int n)
{ 
    if (n>0)
    {
      natural(n-1);
      printf("%d ",n);
    }
      
    


}