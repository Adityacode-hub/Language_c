#include<stdio.h>
int main()
{   int i,j;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int transpose[3][3];
    printf("enter the matrix1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    printf("enter the matrix2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     
    printf("the original matrix :\n"); 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
     printf("\n");   
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose[j][i]=c[i][j];
        }
        
    }
     printf("the transpose of the matrix:\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
     }
   return 0; 
}


