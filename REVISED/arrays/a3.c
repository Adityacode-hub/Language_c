#include<stdio.h>
int main()
{
    int a[10];
    int i,sumeven=0,sumodd=0;
   
    printf("enter the values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<10;i++)
   {
    if(a[i]%2==0)
    {
        sumeven=sumeven+a[i];
    }
    else{
   sumodd=sumodd+a[i];
   }
 
}
 printf("the sum of the even number:%d\n",sumeven);
  printf("the sum of odd number :%d",sumodd);
}