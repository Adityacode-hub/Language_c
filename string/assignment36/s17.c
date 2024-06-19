#include<stdio.h>
#include<string.h>
 int compare(char str1[],char str2[])
 {
    int i;
    if(strlen(str1)==strlen(str2))
    {
        return 0;
    
    }
    for(i=0;str1[i];i++)
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    return 1;
    }
   
    
 }
 int main() 
 {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);


    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

 
    if (compare(str1, str2)) {
        printf("The strings are equal.\n");
    } 
    else {
        printf("The strings are not equal.\n");
    }

    return 0;
}