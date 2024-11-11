//null pointer unintitalised pointer contains the garbage value so to avoid it we use the null pointer
#include<stdio.h>
int main()
{
    int *ptr=NULL;
    int a=3;
    if(ptr==NULL)
    {
        printf("this is null pointer");
    }
    else{
        printf("%d",*ptr);
    }
}