#include <stdio.h>
void adjacentduplicate(int a[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            printf("Found duplicates: %d at position %d and %d\n", a[i], i, i + 1);
            break;
        }  
        
    }
    
}
int main() {
    int a[] = {3, 4, 1, 4, 1, 6, 6};
    int size = sizeof(a) / sizeof(a[0]);
    adjacentduplicate(a, size);
    return 0;
}
