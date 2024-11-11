#include<stdio.h>
#include<string.h>
void length(char*);
void length(char*s)
{
    int i;
    for(i=0;s[i];i++);
    {
       printf("%d",i);
    }

}
int main()
{
 char s[100];
 printf("enter the string:-");
 fgets(s,sizeof(s),stdin);
 s[strcspn(s, "\n")] = '\0';
 length(s);
 return 0;

}