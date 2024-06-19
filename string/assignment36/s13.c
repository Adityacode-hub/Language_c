#include<stdio.h>
#include<string.h>
int main() {
    char input_string[100];
    printf("Please enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    size_t len = find_length_of_string(input_string);
    if (len > 0 && input_string[len - 1] == '\n') {
        input_string[len - 1] = '\0';
    }


    int length = find_length_of_string(input_string);
    printf("The length of the string is: %d\n", length);

    return 0;
}
