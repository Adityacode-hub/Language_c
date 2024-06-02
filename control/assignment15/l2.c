#include<stdio.h>
int main()
{
    int i,j;
    printf("enter the prime number from where u want the next prime");
    scanf("%d",&i);
    for(i++;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        
      {
        printf("%d ",i);
        break;
      }
    }
    
    return 0;
}