#include<stdio.h>
int main()
{
    int i,j,a[8]={1,2,3,2,3,4,2};
    for(i=0;i<=7;i++)
    { int count=1;
        for(j=i+1;j<=7;j++)
        {
            if(a[i]==a[j])
            {
                count++;
              printf("%d-%d\n", a[i],count);   
              break;
               
            }
           
        
  
        }
      
    }
     
}