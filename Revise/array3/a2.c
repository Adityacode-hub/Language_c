//tsrs nature of the program
#include<stdio.h>
int small(int [],int);
int small(int b[],int n)
{
int i;
int smallest=b[0];
for(i=1;i<=n-1;i++)
{
    
    if(b[i]<smallest)
    {
        smallest=b[i];
    }
   
}
 return smallest;
}
int main()
{
    int size,i;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
      scanf("%d",&a[i]);
    }
 int s= small(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("the smallest element in the array %d\n",s);
    return 0;
}