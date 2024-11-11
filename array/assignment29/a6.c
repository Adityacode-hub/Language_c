#include<stdio.h>

// Function to compare sums of elements from both arrays
void array(int a[], int b[], int s, int t) {
    int i, sum = 0, sumb = 0;

    // Loop through both arrays until the end of either one is reached
    for (i = 0; i < s && i < t; i++) {
        sum += a[i];
        sumb += b[i];

        // If the sums are equal at any point, print "same"
       
        }
     if (sum == sumb) {
            printf("%s","same\n");
    }
    
}

int main() {
    int size, size1, i;

    // Prompt user to enter the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size);

    // Initialize the first array with the user-defined size
    int c[size];
    
    // Prompt user to enter elements of the first array
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &c[i]);
    }

    // Prompt user to enter the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size1);

    // Initialize the second array with the user-defined size
    int d[size1];

    // Prompt user to enter elements of the second array
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &d[i]);
    }
array(c,d,size,size1);
return 0;
}
