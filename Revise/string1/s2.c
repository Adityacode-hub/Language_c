//write the program to count the occurance of given character in a given string
#include<stdio.h>
int count(char*,char);
int count(char* s,char c)
{ int i,cn=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==c)
        {
            cn++;
        }
    }
    return cn;
}
int main()
{ char s[]="aditya";
  char t;
  printf("enter the character");
  t=getchar();
  int occur=count(s,t);
  printf("the charcater '%c' occurs %d times in string.\n",t,occur);
  return 0;

}