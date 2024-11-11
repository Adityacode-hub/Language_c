#include<stdio.h>
void sort(int a[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array:-");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void unique(int a[],int size)
{
    int i;
    printf("the unique elements:-");
    for(i=0;i<size;i++)
    
    {
        if(a[i]!=a[i+1])
        {
            printf("%d ",a[i]);
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int a[11]={1,0,2,3,4,5,1,2,3,5,6};
    int size=11;
    sort(a,size);
    unique(a,size);
    return 0;
}