//tsrs nature of the program
#include<stdio.h>
int greatest(int [],int);
int greatest(int b[],int n)
{
    int i,great;
    great=b[0];
    {
        for(i=1;i<n-1;i++)
        {
            if(b[i]>great)
            {
                great=b[i];
            }
        }
       
    }
return great;
}
int main()
{
    int size,i;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
         scanf("%d",&a[i]);
    }
    int g=greatest(a,size);
    printf("the greatest element of the array:%d",g);
    return 0;
}