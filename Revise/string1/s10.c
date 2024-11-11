#include <stdio.h>
int find_first_occurrence(char *str, char ch) 
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    char str[100]; 
    char ch;       
    int index;     

    printf("Enter a string: ");
    scanf("%99s", str); 

    printf("Enter the character to find: ");
    scanf(" %c", &ch); 

    index = find_first_occurrence(str, ch);

    if (index != -1) {
        printf("The first occurrence of '%c' is at index %d.\n", ch, index);
    } else {
        printf("The character '%c' was not found in the string.\n", ch);
    }

    return 0;
}
