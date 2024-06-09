#include<stdio.h>
int octal(int);
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    octal(x);
    return 0;
}
int octal(int n)
{ 
    if (n>0)
     {
        octal(n/8);
        printf("%d",n%8);
     }
      
}