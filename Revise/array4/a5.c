#include<stdio.h>
void sort(int [],int );
void sortarray(int[],int,int[],int);

void sort(int b[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
}
void sortarray(int b[],int n,int c [],int n2)
{
    sort(b,n);
    sort(c,n2);
}
void merge(int d[],int n,int e[],int n2,int f[])
{
int i;
for(i=0;i<n;i++)
{
    f[i]=d[i];
}
for(i=0;i<n2;i++)
{
    f[n+i]=e[i];//it will start form where the first array has stopped itself
}
}

int main()
{
    int size1,size2, merged[size1+size2];;
    printf("enter the size of the array");
    scanf("%d",&size1);
    printf("enter the size of array2:");
    scanf("%d",&size2);
    int a[size1],a2[size2];
    printf("enter the first elements of the array:");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the second elements of the array:");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&a2[i]);
    }
    sortarray(a,size1,a2,size2);
    //size would be the sum of size1 and size2
    merge(a,size1,a2,size2,merged);//merged array is the variable where all the merged array will be stored f is the merged array
    printf("sorted array1:\n");
    for(int i=0;i<size1;i++)
    {
        printf("%d",a[i]);
    }
    printf("sorted array2:\n");
    for(int i=0;i<size2;i++)
    {
        printf("%d",a2[i]);
    }
    printf("\n");
    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}