#include<stdio.h>
int main()
{
    char  str[20];
    char str2[10]={'a','e','i','o','u'};
    int i,j,count=0;
    printf("enter the name");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        for(j=0;j<=4;j++)
        {
            if(str[i]==str2[j])
            {
                count++;
            }
        }
    }
    printf("vowel count=%d",count);
    return 0;
}