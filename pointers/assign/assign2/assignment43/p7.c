//void pointer's
#include<stdio.h>
int main()
{
    void *vp;
    int a=5;
    char c='a';
    float d= 7.5;
    vp=&a;
    printf("%d\n",*(int*)vp);//type casting the pointer.
    vp=&c;
    printf("%c\n",*(char*)vp);
    vp=&d;
    printf("%f ",*(float*)vp);
    return 0;

}