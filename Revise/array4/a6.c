#include <stdio.h>

int find_duplicate(int arr[], int size) {

    for (int i = 0; i < size; i++) {
       
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
             {
                return arr[i];
            }
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicate = find_duplicate(arr, size);

    if (duplicate != -1) {
        printf("Duplicate element: %d\n", duplicate);
    } else {
        printf("-1\n");
    }

    return 0;
}
