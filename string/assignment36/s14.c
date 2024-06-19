#include<stdio.h>
#include<string.h>
 char* upper(char str[])
 {
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }

    }
    return str;
 }


int main() {
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("LOWERCASE string: %s\n", upper(str));
    return 0;
}
