//address should be passed to the pointer
#include<stdio.h>
#include<string.h>

// int main()
// { int i;
// char str[]="aditya kumar ";
// char *vp;
// int start=7;
// int end=12;
// vp=str;
// for(i=start;i<end&&str[i];i++)
// {
//     printf("%c",*((vp) +i));
// }
// printf("\n");
// return 0;
// }

void extract_string(char *str,int start_index,int end_index,char *result)
{
    int i,j=0;
    char *vp;
    vp=str;
    for(i=start_index;i<end_index&&str[i];i++)
    {
        result[j++]=(*((vp)+i));

    }
}
int main()
{
    char source[]="aditya kumar";
    char result[50];
    int start=7;
    int end=12;
    extract_string(source,start,end,result);
    printf("extracted substring:%s\n",result);
    return 0;
}
