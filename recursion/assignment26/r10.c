#include<stdio.h>
int reverse(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    reverse(x);
    return 0;
}
int reverse(int n)
{ 
    if (n>0)
     {
         printf("%d",n%10);
        reverse(n/10);
       
     }
      
}