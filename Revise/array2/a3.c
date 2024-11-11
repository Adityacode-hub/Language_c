#include<stdio.h>
void copy(int b[],int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=b[i];
    }
    printf("the copied elements:");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);

    }
    
}
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    int b[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    copy(a,b,size);
    return 0;
}