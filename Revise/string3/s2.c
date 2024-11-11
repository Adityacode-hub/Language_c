//write a program to find the character between specified index  start and  end index.
#include<stdio.h>
void character(char*,int ,int);
void character(char*s,int t,int e)
{
int i;
for(i=t;i<e;i++)
{
    printf("%c",s[i]);

}
}
int main()
{
    char s[100];
    int start,end;
    printf("enter the string:");
    fgets(s,sizeof(s),stdin);
    printf("enter the start:");
    scanf("%d",&start);
    printf("enter the end:");
    scanf("%d",&end);
    character(s,start,end);
    return 0;

}