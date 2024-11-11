#include<stdio.h>
#include<string.h>
void swap(char *s, int t, int e) 
{
    if (t >= 0 && e >= 0 && s[t] != '\0' && s[e] != '\0') 
    {
        char temp = s[t];
        s[t] = s[e];
        s[e] = temp;
    } else {
        printf("Invalid indices!\n");
        return;
    }
    printf("The new string would be: %s\n", s);
}

int main() {
    char s[100];
    int start, end;
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Enter the start index: ");
    scanf("%d", &start);
    printf("Enter the end index: ");
    scanf("%d", &end);
    swap(s, start, end);

    return 0;
}
