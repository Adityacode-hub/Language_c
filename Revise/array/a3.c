#include<stdio.h>
void sorting(int b[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }
    }
}

}
void sum(int b[],int n)
{
    int i,sumeven=0,sumodd=0;
    for(i=0;i<n;i++)
    {
        if(b[i]%2==0)
        {
            sumeven=sumeven+b[i];

        }
        else{
            sumodd=sumodd+b[i];
        }
    }
     printf("Sum of even numbers: %d\n", sumeven);
    printf("Sum of odd numbers: %d\n", sumodd);
}
int main()
{
    int size,i;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sorting(a,size);
    sum(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}