//write a program to print the transpose of the matrix
#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int b[3][3];
    printf("enter the first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[j][i]=a[i][j];
            }
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
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
  return 0;
}