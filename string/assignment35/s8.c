//to change in the small letter
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,j;
    printf("enter the string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    return 0;
}