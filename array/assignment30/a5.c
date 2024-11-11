#include<stdio.h>
int main()
{
    int i,a[10],b[10];
    printf("enter the number of elements");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
      b[i]=a[i];
    }
for(i=0;i<=9;i++)
{
    printf("%d ",b[i]);
}
return 0;
}