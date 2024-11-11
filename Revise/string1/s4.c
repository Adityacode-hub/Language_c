//write a program to count spaces in a gievn string
#include<stdio.h>
int cspace(char*);
int cspace(char* s)
{
    int i,count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==32)
        {
           count++;
        }
    }
    return count;
}

int main()
{
    char s[100];
    printf("enter the string:-");
    fgets(s,100,stdin);
    int y=cspace(s);
    printf("the spaces we get=%d",y);
    return 0;

}