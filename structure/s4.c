#include<stdio.h>
struct date 
{
    int d,m,y;

};
struct date inputdate();
void showdate(struct date);
int main()
{
    struct date d1;
    d1=inputdate();
    showdate(d1);
}

void showdate(struct date somedate)
{
printf("%d-%d-%d",somedate.d,somedate.m,somedate.y);
}
struct date inputdate()
{
    struct date somedate;
    printf("enter some date");
    scanf("%d/%d/%d",&somedate.d,&somedate.m,&somedate.y);
    return somedate;
}

