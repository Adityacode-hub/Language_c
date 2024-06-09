//programm  to print the  avg of hundred number 
#include<stdio.h>
int main()
{
    int i,a[20],sum;
    float avg;
    printf("enter the hundred number");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=19;i++)
    {
        sum=sum+a[i];
    
    }
    avg=sum/20.0;
    printf("avg of the hundred number %.2f",avg);
    printf("\n");
    return 0;
   

}