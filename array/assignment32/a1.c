#include<stdio.h>
int main()
{
    int start=0,a[5]={1,2,3,4,5};
    int end,temp,i;
    printf("enter the starting index:-");
    scanf("%d",&start);
    printf("enter the ending address:-");
    scanf("%d",&end);
    for(i=0;i<5;i++)
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    for(i=0;i<5;i++)
    {
        printf(" swapped array  of specific index:-%d",a[i]);
    }
}