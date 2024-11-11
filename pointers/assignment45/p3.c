#include <stdio.h>
void mergeArrays(int *arr1, int size1, int *arr2, int size2, int *mergedArr)
{

    for (int i = 0; i < size1; i++)
    {
        *(mergedArr + i) = *(arr1 + i);
    }

    for (int j = 0; j < size2; j++)
    {
        *(mergedArr+size1  + j) = *(arr2 + j);
    }
}

int main()
{
    int size1, size2;


    printf("Enter the size of array 1: ");
    scanf("%d", &size1);

  
    int arr1[size1];
    printf("Enter elements of array 1:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter the size of array 2: ");
    scanf("%d", &size2);

 
    int arr2[size2];
    printf("Enter elements of array 2:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

  
    int sizeMerged = size1 + size2;

    
    int mergedArr[sizeMerged];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

  
    printf("Merged array:\n");
    for (int i = 0; i < sizeMerged; i++)
    {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
