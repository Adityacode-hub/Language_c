#include <stdio.h>

void swap(int a[], int size) {
    int i, temp, j;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int great(int a[], int size) {
    if (size <= 0) {
        printf("Size should be greater than 0\n");
        return -1; 
    }
    return a[size - 1];
}

int main() {
    int a[10], size, i;
    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &size);
    if (size > 10 || size <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    swap(a, size);
    int greatest = great(a, size);
    if (greatest != -1) {
        printf("The greatest element in the array is %d\n", greatest);
    }

    return 0;
}
