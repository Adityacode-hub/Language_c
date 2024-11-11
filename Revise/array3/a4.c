#include <stdio.h>
void rotate(int a[], int size, int n, int d) 
{
    int temp, i, count;
    if (d == 1) //right side rotation
    {
        for (count = 1; count <= n; count++) {
            temp = a[size - 1]; 
            for (i = size - 1; i > 0; i--)
             {
                a[i] = a[i - 1];
            }
            a[0] = temp; 
        }
    } 
    else if (d == -1) //left roatation
    {
        
        for (count = 1; count <= n; count++) {
            temp = a[0]; 
            for (i = 0; i < size - 1; i++) {
                a[i] = a[i + 1];
            }
            a[size - 1] = temp; 
        }
    }

   
    for (i = 0; i < size; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    int q = 1; 
    int p=-1;
    rotate(a, size, q, p);

    return 0;
}
