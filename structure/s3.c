//create a function in a structure of return type
#include<stdio.h>
struct date
{
    int d,m,y;
};
struct date inputdate(); //function declaration
int main()
{
    struct date d1;
    d1=inputdate();
    printf("%d-%d-%d",d1.d,d1.m,d1.y);
    return 0;
}
struct date inputdate()       //function with takesnothing.
{
    struct date somedate;     //make a variable for user input  bcz d1 is declared in main
    printf("\nenter the date:");
    scanf("%d/%d/%d",&somedate.d,&somedate.m,&somedate.y);
    return somedate;
}