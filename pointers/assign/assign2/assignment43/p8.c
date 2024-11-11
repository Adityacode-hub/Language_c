//program to change string of lowercase to uppercase
#include<stdio.h>
int main()
{ int i;
char str[]="aditya kumar ";
char *vp;
vp=str;
for(i=0;str[i];i++)
{
    printf("%c",*((vp) +i)-32);
}
printf("\n");
return 0;
}
