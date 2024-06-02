 //to find the co-prime number
 #include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    for(c=a<b?a:b;c>=1;c--)
    {
        if(a%c==0 && b%c==0)
        break;
    }
    if(c==1)
    printf("co prime number");
    else
    printf("not co-prime number");
    return 0;
}