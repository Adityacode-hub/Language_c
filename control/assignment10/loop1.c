#include<stdio.h>
int main()
{
    int n,chances;
    for(chances=1;chances<=3;chances++)
    {
     printf("enter the number");
     scanf("%d",&n);
       if (n%2==0)
       break;
    }
    if (chances == 4)
    {
        printf("you lost the game");
    }
    else
    {
    printf("you won the game");
    }
    printf("\n");
    return 0;
}