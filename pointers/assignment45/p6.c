#include<stdio.h>
void sort(int *ptr,int size)//already assigned a pointer
{
    int i,j;
    int temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(ptr+i)> *(ptr+j))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+i);
                *(ptr+i)=temp;
            }
        }
    }
    printf("the sorted array we got:");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }

}

int main()
{ int size,i;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    sort(a,size);
    return 0;
}