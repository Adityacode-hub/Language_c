#include<stdio.h>
#include<string.h>
int character(char*s,char ch)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==ch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char s[100],ch;
    printf("enter the string:-");
    fgets(s,sizeof(s),stdin);
    printf("enter the character:-");
    ch=getchar();
    int x=character(s,ch);
    if(x!=-1)
    {
    printf("the charcter '%c' at index '%d'",ch,x);
    }
    else
    {
     printf("character not found");
    }
    return 0;

}


