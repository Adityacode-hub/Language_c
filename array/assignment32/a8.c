//write the program to count the frequency of the occurance of the elements in an array
#include<stdio.h>
void sort(int a[],int size)
{
int i,j,temp;
for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<size;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
}
void frequency(int a[],int size)
{
    int i,j,count;
    for(i=0;i<size;)//here we have not incremented the value of the i
    { for(count=0,j=i;i<size&&a[i]==a[j];i++)//here i value has been incremented thats why it has not been used earlier.
    count++;
    printf("\n%d-%d",a[j],count);
    }
     
}
int main()
{
    int a[11]={1,2,3,5,7,6,1,2,5,3,1};
    int size=11;
    sort(a,size);
    frequency(a,size);
    return 0;

}
