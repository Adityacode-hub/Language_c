//write the program to count vowels in a given string
#include<stdio.h>
int vowel(char *);
int vowel(char* s)
{
    int i,vcount=0,j;
    char v[10]="aeiouAEIOU";
    for(i=0;s[i];i++)
    {
      for(j=0;v[j];j++)
      {
        if(s[i]==v[j])
        {
            vcount++;
            break;
        }
      }
    }
    return vcount;
}
int main()
{
    char v[]="aditya";
    int x=vowel(v);
    printf("the vowels is  %d",x);
    return 0;
}