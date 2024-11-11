#include <stdio.h>
void sort(int a[], int size) {
    int i, j, temp;
    for(i = 0; i < size; i++) 
    {
        for(j = i + 1; j < size; j++) 
        {
            if(a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void findDuplicates(int a[], int size) {
    int i;
    printf("Duplicate elements:\n");
    for (i = 0; i < size - 1; i++) {//as we have incremented the value of i in while loop after the iteration the value of i will update from the new one.
        if (a[i] == a[i + 1]) {
            printf("%d\n", a[i]);
          
            while (i < size - 1 && a[i] == a[i + 1]) {
                i++;
            }
        }
    }
}
int main() {
    int a[10] = {4, 2, 3, 2, 3, 1, 4, 5, 4, 3};
    int size = 10;
    sort(a, size);
    findDuplicates(a, size);
    return 0;
}
