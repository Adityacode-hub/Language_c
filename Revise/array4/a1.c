//write a program to swap two elements of given array with specified indices.
#include<stdio.h>
void swap(int [],int ,int);
void swap(int b[],int start,int end)
{
    int temp;
    temp=b[start];
    b[start]= b[end];
    b[end]=temp;
    for(int i=0;i<=end;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
}
int main()
{
    int size,i,beg,end;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements of the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the beginning:");
    scanf("%d",&beg);
    printf("enter the end of the array:");
    scanf("%d",&end);
    swap(a,beg,end);
    return 0;
}