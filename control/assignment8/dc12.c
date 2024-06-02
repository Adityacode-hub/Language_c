//write a program to find the greatest among the three number if the number occur's more than one  time then it should print one
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)//u can write(a>b&&a>c)
      if(a>c)
      printf(" greater=%d",a);
      else
      printf(" greater=%d",c);
    else//else part mei aae bcz a is not grreater
     if(b>c)
     printf("greater=%d",b);
     else
     printf("greater=%d",c);
    printf("\n");
    return 0;
}