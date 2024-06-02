//write a program which take the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number month");
    scanf("%d",&x);
    if(x==1|| x==3 ||x==5 ||x==7||x==8||x==10||x==12)
    {
        printf("31 days");
    }
    else if(x==4 ||x==6 ||x==9||x==11)
    {
        printf("30days");
    }
    else if(x==2)
    {
        printf("28/29 days");
    }
    else{
        printf("invalid month");
    }

}