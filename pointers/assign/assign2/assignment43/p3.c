//substraction of the pointer
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,56};
    int *p=&a[0];
    int *q=&a[2];
    int d=q-p; //it will substract the address then divide it by 4 bytes then the answer would be 2;
   printf("%d ",d);
   return 0;

}