#include<stdio.h>
int duplicate(int b[],int n)
{
 int i,j,count=0;;
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
        if(b[i]==b[j])
        {
           return b[i];
        }
    }
 }  
 return -1;
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
    int found=duplicate(a,size);
      if (found != -1) {
        printf("First duplicate element is: %d\n", found);
    } else {
        printf("No duplicate elements found.\n");
    }
    return 0;

}