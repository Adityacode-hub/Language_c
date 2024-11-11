//null pointer or uninitialized pointer
#include<stdio.h>
int main()
{
    int *p=NULL;
    int a=3;
if(p==NULL)
{
    printf("this is null pointer");
}
else
{
    printf("%d\n",*p);
}
}