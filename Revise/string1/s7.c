//write a program to reverse a string.
#include<stdio.h>
#include<string.h>
void reverse(char*,int);
void reverse(char* s,int size)
{
    int i,j;
    char p[size+1];
    for(i=0,j=size-1;j>=0;i++,j--)
    {
    
        {
            p[i]=s[j];
        }

    }
     p[i]='\0';
    printf("%s",p);
}

int main()
{
int size;
char n[100];
printf("enter the string:-");
scanf("%s",n);
size=strlen(n);
reverse(n,size);
return 0;

}