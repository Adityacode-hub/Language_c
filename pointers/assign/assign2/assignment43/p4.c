#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *p;
    p=&a[3];
    printf("%d %d\n",*--p,*p++);//right to left associativity.
  
    return 0;
}