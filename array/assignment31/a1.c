#include<stdio.h>
int greatest(int a[10],int n)
{
int i;
 int greatest = a[0]; // Initialize the greatest element as the first element

    for (int i = 1; i <=n; i++) {
        if (a[i] > greatest) {
            greatest = a[i]; // Update the greatest element
        }
    }

    return greatest;
}
int main()
{
    int a[10],size,i;
    printf("enter the array");
    size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<=size;i++)
    {
       scanf("%d",&a[i]); 
    }
    int great=greatest(a,size);
  printf("the greatest element is %d",great);
}

