#include <stdio.h>
void number(int a[], int n){
     int total_sum = (n * (n + 1)) / 2; 
    int array_sum = 0;
    
  
    for (int i = 0; i < n; i++) {
        array_sum += a[i];
    }
    
    int missing_number = total_sum - array_sum;
    printf("The missing number is: %d\n", missing_number);
}

int main() {
    int n;


    printf("Enter the number of elements (including the missing number): ");
    scanf("%d", &n);

    int a[n-1];  

  
    printf("Enter the %d elements of the array: ", n-1);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
    }


    number(a, n-1);

    return 0;
}
