//to find the prime number of the given range
#include<stdio.h>
int main()
{
    int i,j,n,m;
    // printf("enter the beginning range");
    // scanf("%d",&n);
    // printf("enter the end range");
    // scanf("%d",&m);
    for(i=1;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
    if(i==j)
      printf("%d",i); 
     printf("\n");
    return 0;
    }
}