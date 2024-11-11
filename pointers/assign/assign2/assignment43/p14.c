//write the function to search all occurances of a given character in a given string.result of search is a list of indices to be stored in the given array.
#include<stdio.h>
#include<string.h>
void search_all_occurrences(char *str, char ch, int *arr, int *count) {
    int i;
    *count = 0; 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            arr[*count] = i; 
            (*count)++; 
        }
    }
}
int main() {
    char str[100];
    char ch;
    int indices[100]; 
    int count, i;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Enter the character to search for: ");
    scanf("%c", &ch);
    search_all_occurrences(str, ch, indices, &count);
    printf("Character '%c' found at indices: ", ch);
    for (i = 0; i < count; i++) {
        printf("%d ", indices[i]);
    }
    printf("\n");
    return 0;
}