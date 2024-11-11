#include<stdio.h>
void transpose();
void transpose()
{
    int i,j,size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size][size],t[size][size];
    printf("enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
              scanf("%d",&a[i][j]);
        }
      
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i]=a[i][j];
        }
    }

     printf("Original matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of the matrix would be:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    transpose();
    return 0;
}