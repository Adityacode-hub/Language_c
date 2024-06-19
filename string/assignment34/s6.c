#include<stdio.h>
int main()
{
    int i,j,count=0;
    char str[20];
    printf("enter the string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]==32)
        {
            count++;
        }
     
    }
     printf("%d",count);
}