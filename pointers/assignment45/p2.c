#include<stdio.h>
#include<string.h>
void swap(char s[],char s1[],int size)
{
char *p,*q;
p=s;
q=s1;
char temp;
int i;
for(i=0;i<size&&s[i]&&s1[i];i++)

{
    temp=*(p+i);
    *(p+i)=*(q+i);
    *(q+i)=temp;
}
  printf("%s ",p);
  printf("%s ",q);

}
int main()
{
 int size1, size2;

    printf("Enter the size of string 1: ");
    scanf("%d", &size1);
    printf("Enter the size of string 2: ");
    scanf("%d", &size2);

    char str1[size1], str2[size2];

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
    swap(str1,str2,(size1>size2)?size1:size2);
    return 0;
}