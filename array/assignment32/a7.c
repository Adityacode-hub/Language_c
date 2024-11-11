//write a funtion to merge two array of same size in descending order
#include<stdio.h>
void sort1(int a[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void sorttwoarray(int a1[],int a2[],int size)
{
    sort1(a1,size);
    sort1(a2,size);
    
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int a1[10]={11,12,13,14,15,16,17,18,19,20};
    int size=10;
    int a4[10];
    sorttwoarray(a,a1,size);
    printf("Array a sorted in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("Array a1 sorted in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a1[i]);
    }
    printf("\n");
    return 0;
}