#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x>0)
    printf("positive number");
    else if(x==0)
    printf("zero");
    else
      printf("negative number");
    printf("\n");
    return 0;
}