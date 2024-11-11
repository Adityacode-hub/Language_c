//dangling pointer the pointer which was pointing it's ex pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)malloc(4);//malloc and calloc  always return void pointer thats why we are type casting it as integer
    *p=100;
    printf("%d\n",*p);
    free(p);
    //after free the memory the best practise is to assign null.
    p=NULL;
    if(p==NULL)
    {
        printf("unable to derefernce it");
    }
    return 0;
}