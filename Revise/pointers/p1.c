//void pointer examples:- rather than making too many  pointer use one pointer and just typecast it as per need 
#include<stdio.h>
int main()
{
    void *vp;
    int a=5;
    float b=7.5;
    char c='0';
    vp=&a;
    printf("%d\n",*(int*)vp);
    vp=&b;
    printf("%f\n",*(float*)vp);
    vp=&c;
    printf("%c\n",*(char*)vp);
  return 0;
}