#include<stdio.h>
int main()
{
    int a[10];
    int i;
   int smallest=a[0];
    printf("enter the values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<10;i++)
   {
     if(a[i]<smallest)
     {
        smallest=a[i];
     }
   }
   printf("the smallest of the number :%d",smallest);
   return 0;
}