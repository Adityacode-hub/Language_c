#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*) malloc (sizeof(int));
    printf("%d",*p);
    free(p);//dangling pointer
    
}