#include<stdio.h>
struct date
{
    int d,m,y;
};
int main()
{
    struct date d1;
    printf("enter the date ");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("\nthe year we get:-");
    printf("%d-%d-%d",d1.d,d1.m,d1.y);
    printf("\n");
    return 0;
    
}
