#include <stdio.h>
#include <stdlib.h>
void mergearray(int *arr1, int size1, int *arr2, int size2, int *arr3) //function for the mergearray with two array with different size
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {//for(i=0;j=0,k=0;i<size1&&j<size2;k++) this coulb be the condition also
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < size1) { // Copy remaining elements of arr1 bcz values are left in arr1
        arr3[k++] = arr1[i++];
    }
    while (j < size2) { // Copy remaining elements of arr2
        arr3[k++] = arr2[j++];//keeping track of the variables basically it is done for iteration type.
    }
}

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int *arr1 = (int *)malloc(size1 * sizeof(int));
    if (arr1 == NULL) //here we are checking for the dangling pointer where it is null or not
    {
        printf("Memory allocation failed for arr1\n");
        return 1;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    int *arr2 = (int *)malloc(size2 * sizeof(int));// basically we are making a dangling pointer.
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2\n");
        free(arr1);//to prevent from the memory leak
        return 1;
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int *arr3 = (int *)malloc((size1 + size2) * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory allocation failed for arr3\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    mergearray(arr1, size1, arr2, size2, arr3);//

    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}
