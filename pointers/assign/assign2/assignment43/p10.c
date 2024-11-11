//dangling pointers

#include<stdio.h>
#include<stdlib.h>
int* f()
{
    int a=10;
    return &a;
}
void main()
{
    int *ptr=f();
    // int *ptr=(int*)malloc(sizeof(int));
    // *ptr=10;
    // printf("%d\n",*ptr);
    // free(ptr);
    // printf("%d\n",*ptr);//it will show the garbage value
    printf("%d\n",*ptr); //it will show error bcz the value has been vanished.

}