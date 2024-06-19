#include<stdio.h>
int main()
{
    int i,j,acount=0,dcount=0,scount=0;
    char str[20];
    printf("enter the string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=67 && str[i]<=122)
        {
            acount++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            dcount++;
        }
        else

        {
            scount++;
        }
    }
    printf("alphabet-count=%d",acount);
    printf("\n");
    printf("digit-count=%d",dcount);
    printf("\n");
    printf("special-character-count=%d\n",scount);
    printf("\n");
   return 0; 
}