#include<stdio.h>
#include<string.h>
void convert(char *s)
{
int i;
char *vp;
vp=s;
for(i=0;s[i];i++)
{
    printf("%c ",*((vp) +i)-32);
}
printf("\n");
}

int main()
{
  char  *first;
  first="aditya is my name";
 convert(first);
return 0;
}

// #include <stdio.h>
// #include <string.h>

// void convert(char *s) {
//     int i;
//     char *vp;
//     vp = s;
//     for (i = 0; s[i]; i++) {
//         // Check if the character is a lowercase letter
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             printf("%c", s[i] - 32);
//         } else {
//             // If it's not a lowercase letter, print it as is
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n"); // Add a newline for better output formatting
// }

// int main() {
//     char *first;
//     first = "aditya is my name";
//     convert(first);
//     return 0;
// }
