#include<stdio.h>
void unique(int b[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++)
    { count=0;
        for(j=0;j<n;j++)
        {
           if(b[i]==b[j])
           {
            count++;
          
           }

        }
        if(count==1)
        {
            printf("%d ",b[i]);
        }
    }
    printf("\n");
}
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a,size);
    return 0;
}