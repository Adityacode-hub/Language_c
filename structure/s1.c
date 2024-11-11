#include <stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int roll;
    char section[5];
    float marks;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();
    struct Student students[n];
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;//removing the null character
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        getchar();
        printf("Section: ");
        fgets(students[i].section, sizeof(students[i].section), stdin);
        students[i].section[strcspn(students[i].section, "\n")] = 0;
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();
    }

    
    printf("\nEntered details of students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:", i + 1);
        printf("Name: %s ", students[i].name);
        printf("Roll: %d ", students[i].roll);
        printf("Section: %s ", students[i].section);
        printf("Marks: %.2f ", students[i].marks);
    }

    return 0;
}
