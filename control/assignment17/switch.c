#include<stdio.h>
int main()
{
    int x;
    printf("1.multiplication\n");
    printf("2.addition\n");
    printf("3.substraction\n");
    printf("4.division\n");
    printf("enter your choice");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("multiplication");
        break;
        case 2:
        printf("addition");
        break;
        case 3:
        printf("substraction");
        break;
        case 4:
        printf("division");
        break;
        default:
        printf("default case");
        return 0;
    }
}