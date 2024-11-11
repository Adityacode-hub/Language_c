#include<stdio.h>
void upper(char*);
void upper(char* s)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>96 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    
}
int main()
{
    char s[100];
    printf("enter the string:-");
    fgets(s,sizeof(s),stdin);
    upper(s);
    return 0;

}