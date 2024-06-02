#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=4;j++)
        {
           if(j<=i)
           {
            printf("%d",k--);//i.e k=k-1 23post decrement i.e first will print the value then it will decrement the value of the variable
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}