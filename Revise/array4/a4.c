#include<stdio.h>
void frequency(int b[],int n)
{
int i,j,count=0;
for(i=0;i<n;i++)
{
   if(b[i]==b[i+1])
    {
     count++;
      for(j=i;i<n&&b[j]==b[i];i++);
    }
    else
  {
    i++;
   }

}
}

int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int a[size];
    printf("enter the array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    frequency(a,size);
    return 0;
}