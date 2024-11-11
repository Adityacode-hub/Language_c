#include<stdio.h>
void sorting(int b[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }
    }
}

}
int sum(int b[],int n)
{
    int i,sum=0;
   for(i=0;i<n;i++)
   {
    sum=sum+b[i];
   }
   return sum;

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
    sorting(a,size);
    int finalsum=sum(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("the sum of the sorted array is:%d\n",finalsum);
    return 0;
}