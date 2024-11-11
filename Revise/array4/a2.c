#include<stdio.h>
void count(int b[],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                count+=1;
                break;
            }
        }
    }
       printf("Number of duplicate elements: %d\n", count);
}

int main()
{
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    count(a,size);
    return 0;
}


