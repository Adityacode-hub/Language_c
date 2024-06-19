#include<stdio.h>
#include<string.h>
 int lenght(char str[])
 {
    int i;
    for(i=0;str[i];i++);
    {
       return i;
    }
    
 }

 int main()
 {
    char str[20];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    printf("%d",str);
 }