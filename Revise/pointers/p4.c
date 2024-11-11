//wild pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=9;
int *ptr=(int*)malloc(sizeof(int));
printf("%d",*ptr);
return 0;
}