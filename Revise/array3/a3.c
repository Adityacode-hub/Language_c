//tsrn nature of the function
#include<stdio.h>
void sort(int [],int);
void sort(int b[],int n)
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
    printf("the new sorted array we got: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
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
    sort(a,size);
    return 0;
}