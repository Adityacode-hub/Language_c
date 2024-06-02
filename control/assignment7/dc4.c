#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x&1) //it will give non-zero number i.e true that why we dont used equal sign
    printf("odd number");
    else
    printf("even number");
    printf("\n");
    return 0;
}