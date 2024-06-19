#include<stdio.h>
#include<string.h>
 char* lower(char str[])
 {
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }

    }
    return str;
 }
 int main()
 {
    char str[20];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("uppercase %s\n",lower(str));
    return 0;
 }