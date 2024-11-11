#include<stdio.h>
int first(int a[],int size)
{
    int left,right,loc,temp;
    left=0;
    right=size-1;
    loc=0;

   while(left<right)
   {
     while(left<right&&a[loc]<a[right])
     right--;
    if(left==right)
        break;
    temp=a[right];
    a[right]=temp;
    loc=temp;
    while(left<right&&a[left]<a[loc])
    left++;
    if(left==right)
    break;
    temp=a[left];
    a[left]=a[loc];
    a[loc]=temp;
    loc=left;
   }
 return loc;   
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = first(arr, size);

    printf("Array after partitioning:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nPivot index: %d\n", pivotIndex);

    return 0;
}