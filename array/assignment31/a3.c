#include<stdio.h>
int smallest(int a[10],int n)
{
    int i;
    int small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }

    }
return small;
}
int main()
{
    int a[10], size, i;
    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &size);
    if (size > 10 || size <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int show=smallest(a,size);
    printf("the smallest element %d",show);
 return 0;
}