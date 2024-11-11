#include<stdio.h>
void word_count(char a[])
{
    int i,count=0;
    for(i=0;a[i];i++)
    {
        if((a[i]>='a'&& a[i]<='z')||(a[i]>='A'&& a[i]<='Z'))
        {
            count++;
            {
                while(a[i]>='0'&a[i]<='9')
                {
                    i++;
                }
            }
        }
    }
    printf("word_count of %s:%d ",a,count);

}
int main()
{
    char arr[100];
    printf("enter the array:\n");
    fgets(arr,sizeof(arr),stdin);
    word_count(arr);
    return 0;
}