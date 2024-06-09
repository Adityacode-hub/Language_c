#include<stdio.h>
int binary(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    binary(x);
    return 0;
}
int binary(int n)
{ 
    if (n>0)
     {
        binary(n/2);
        printf("%d",n%2);
     }
      
}