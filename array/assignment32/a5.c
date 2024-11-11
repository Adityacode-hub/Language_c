#include<stdio.h>
void sort(int a[],int size)
{
    int i,temp,j;
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
void duplicate(int a[],int size)
{
    int i;
    printf("the duplicate elements:\n");
    for(i=0;i<size-1;i++)
    {
        if(a[i]==a[i+1])
        {
            printf("%d\n",a[i]);
            while(a[i]==a[i+1])
            {
                i++;
            }
        }
    }
}

int main()
{
    int a[11]={4, 2, 3, 2, 3, 1, 4, 5, 4, 3,1};
    int size=11;
    sort(a,size);
    duplicate(a,size);
    return 0;
}