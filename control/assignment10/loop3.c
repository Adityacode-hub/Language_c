#include<stdio.h>
int main()
{
    char x;
    printf("enter the character");
    scanf("%c",&x);
    if(x>='a'&& x<='z')
    {
        printf("lowercase");
    }
    else if(x>='A'&& x<='Z')
    {
        printf("upper-case");
    }
    else if(x>='0' && x<='9')
    {
        printf("digit");
    }
    else{
        printf("special character");
    }
    printf("\n");
    return 0;

}