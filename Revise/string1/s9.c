#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],p[20];
    printf("enter the string:-");
    fgets(s,20,stdin);
    
    strcpy(p,s);
    printf("the source was:-'%s'\n ",s);
    printf("%s",p);
    return 0;

}