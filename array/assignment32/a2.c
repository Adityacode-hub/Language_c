#include<stdio.h>
void swap(int a[],int size)
{
    int i,temp;
    int start=0,end;
    printf("enter the starting index:-");
    scanf("%d",&start);
    printf("enter the ending address:-");
    scanf("%d",&end);
    for(i=0;i<=size-1;i++)
    
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    for(i=0;i<=size-1;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[]={1,2,3,4,5},size;
    size=sizeof(a)/sizeof(a[0]);
    swap(a,size);
    return 0;
}