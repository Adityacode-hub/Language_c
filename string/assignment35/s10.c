#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char str2[20];
    printf("enter the string");
    gets(str);
    strcpy(str2,str);
    printf("copied material -%s",str2);
    return 0;
}