//wild pointer's
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr;
printf("%d\n",*ptr);
//here it will act as the wild pointer;
//int *ptr=(int*)malloc(sizeof(int));
//*ptr=67;
//printf("%d\n",*ptr);



return 0;

}