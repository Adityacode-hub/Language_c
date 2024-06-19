#include<stdio.h>
int main()
{
    char str[20];
    printf("enter the name");
    fgets(str,20,stdin);
    printf("%s",str);
    return 0;
}