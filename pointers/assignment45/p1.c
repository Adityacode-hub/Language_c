#include<stdio.h>
void sort(int *p,int size)
{
    int i,temp,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(p+i)>*(p+j))
             {
              temp=*(p+i);
              *(p+i)=*(p+j);
              *(p+j)=temp;
             }
        }
    }
    printf("sorted elements:-");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
    }
}

int main()
{ int i;
    int a[20];
    int size;
    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &size);
      printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
  sort(a,size);
  return 0;
}
