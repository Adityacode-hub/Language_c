#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("enter the values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int greatest=a[0]; //here we have initialise the value of the greatest after reading the array.
   for(i=0;i<10;i++)
   {
     if(a[i]>greatest)
     {
        greatest=a[i];
     }
   }
   printf("the greatest of the number :%d",greatest);
   return 0;
}