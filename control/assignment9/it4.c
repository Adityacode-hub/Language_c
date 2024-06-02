#include<stdio.h>
int main()
{
    char x;
    printf("enter the alphabet");
    scanf("%c",&x);
    if(x>='a' && x<='z')
    printf("the lowercase alphabet");
    if(x>='A' && x<='B')
    printf("the uppercase alphabet");
    printf("\n");
    return 0;
}