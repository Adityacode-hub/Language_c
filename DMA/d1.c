//define a function to input variable length string and store it in an array without memory wastage
//all three best question of the dma is here practise it more
#include<stdio.h>
#include<stdlib.h>
char* inputstring()
{
    char *p=NULL,ch;
    char *q=NULL;
    int size=1,i;
    while(1)
    {
        ch=getchar();
        if(ch=10)
        break;
        p=(char*)malloc(size);
        if(q)
        {
            for(i=0;i<size;i++)
             *(p+i)=*(q+i);
            *(p+i-1)=ch;
            free(q);
        }
        else
           *p=ch;
        q=(char*)malloc(size+1);
        for(i=0;i<size;i++)
          *(q+i)=*(p+i);
        *(q+i)='\0';
        free(p);
        size++;
    }
    return q;
}
void f2()
{
    int *arr,i,n,s=0;
    float avg;
    printf("how many values you want to enter:");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    printf("enter %d values :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
     s=s+arr[i];
    avg=(float)s/n;
    printf("average is %f",avg);
}
void f3()
{
    int *arr,i,n,s=0;
    float avg;
    printf("how many values you want to enter:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter %d values :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
     s=s+arr[i];
    printf("sum is %d",s);
}
int* merge(int A[],int n1,int B[],int n2)
{
    int *arr,i,j,k;
    arr=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0,j=0,k=0;i<n1&&j<n2;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
return arr;
}
int main()
{
    // char *str;
    // printf("enter the string");
    // str=inputstring();
    // printf("\n%s",str);
    // f2();
    // f3();
    int A[]={3,7,10,18,21};
    int B[]={9,11,15};
    int *C,i;
    C=merge(A,5,B,3);
    for(i=0;i<8;i++)
      printf("%d ",C[i]);
    printf("\n");
    return 0;
}