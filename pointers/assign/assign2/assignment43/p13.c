#include<stdio.h>
#include<string.h>
void convert(char *s)
{
int i;
char *vp;
vp=s;
for(i=0;s[i];i++)
{
 if (s[i] == ' ')
{
  continue; 
 }
printf("%c ", *((vp) + i) - 32);
}
printf("\n");
}

int main()
{
char  first[100];
printf("enter the string");
fgets(first,sizeof(first),stdin);
size_t len = strlen(first);
if (len > 0 && first[len - 1] == '\n') {
    first[len - 1] = '\0';
 }
 convert(first);
return 0;
}
