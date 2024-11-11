#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
   
}
int main()
{
    int a,b;
    printf("enter the integer:\n");
    scanf("%d%d",&a,&b);
    printf("the number before swapiing is %d %d\n",a,b);
    swap(&a,&b);
    printf(" the number after swapping:%d% d \n",a,b);
    return 0;
}