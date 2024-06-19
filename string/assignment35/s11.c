#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int flag,i;
    flag=0;
    printf("\nenter the string");
    gets(str);
    printf("\n enter the character");
    scanf("%c",&ch);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==ch)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n sorry!! we haven't found the character %c",ch);
    }
    else{
        printf("\n the first occurance of the element%d",ch ,i+1);

    }
    return 0;
}