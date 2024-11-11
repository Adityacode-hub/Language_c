//write a program in c to count the total number of alphabet ,digit nad special character in a string
#include<stdio.h>
int main()
{

    int i,digit=0,special_charcter=0,aplahbet_count=0;
    char s[100];
    printf("enter the string");
    fgets(s,100,stdin);
  for(i=0;s[i];i++)
  {
    if(s[i]>='a' && s[i]<='z')
    {
        aplahbet_count++;
    }
    else if(s[i]>='0'&& s[i]<='9')
    {
        digit++;
    }
    else 
    {
        special_charcter++;
    }
  }
  printf("aplahbetcount='%d' digit count='%d' special-character=%d",aplahbet_count,digit,special_charcter);
}