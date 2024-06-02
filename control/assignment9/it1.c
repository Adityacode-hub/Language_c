#include<stdio.h>
int main()
{
    float cp ,sp,profit,loss;
    printf("enter the selling price");
    scanf("%f",&sp);
    printf("enter the cost price");
    scanf("%f",&cp);
    if(sp>cp)
    {
    profit=sp-cp;
    printf("profit =%f ",(profit/cp)*100);
    }
    else
    {
    loss=cp-sp;
    printf("loss=%f",(loss/sp)*100);
    }
    printf("\n");
    return 0;

}