#include<stdio.h>
#include<string.h>
 struct employee
 { 
    int id;
    char name[50];
    float salary;

 };
struct employee inputemployees()
{
    struct employee input;
    printf("enter the empoyees details:");
    scanf("%d",&input.id);
    fgets(input.name,50,stdin);
    input.name[strcspn(input.name,"\n")]='\0';
    printf("enter the employee salary:\n");
    scanf("%.2f",&input.salary);
    return input;

}
void display(struct employee input)
{
printf("%d %s %f",input.id,input.name,input.salary);
}

struct employee highestsalary(struct employee input[],int n)
{
    struct employee maxsalary;
    int i;
    maxsalary=input[0];
    for(i=1;i<n;i++)
    {
        if(maxsalary.salary<input[i].salary)
        maxsalary=input[i];
    }
    return maxsalary;
}
void sortBysalary(struct employee input[],int n)//array always starts from 0 to n-1.
{
    int r,i;
    struct employee swap;
  for(r=1;r<n;r++)
  {
    for(i=1;i<n;i++)
    {
        if(input[i].salary>input[i+1].salary)
        {
            swap=input[i];
            input[i]=input[i+1];
            input[i+1]=swap;
        }

    }
  }


}

void sortByname(struct employee input[],int n)
{
    int r,i;
    struct employee swap;
    for(r=1;r<n;r++)
  {
    for(i=1;i<n;i++)
    {
        if(strcmp(input[i].name,input[i+1].name)>0)
        {
            swap=input[i];
            input[i]=input[i+1];
            input[i+1]=swap;
        }

    }
  }

}
int main() 
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    for (int i = 0; i < n; i++) 
    {
        printf("\nEmployee %d:\n", i + 1);
        employees[i] = inputemployees();
    }

    printf("\nEmployee details:\n");
    for (int i = 0; i < n; i++) {
        display(employees[i]);
    }

    struct employee maxSalaryEmp = highestsalary(employees, n);//variable of maxsalary we have to make it from highest struct 
    printf("\nEmployee with highest salary:\n");
    display(maxSalaryEmp);

    printf("\nEmployees sorted by salary:\n");
    sortBysalary(employees, n);
    for (int i = 0; i < n; i++) {
        display(employees[i]);
    }

    printf("\nEmployees sorted by name:\n");
    sortByname(employees, n);
    for (int i = 0; i < n; i++) {
        display(employees[i]);
    }

    return 0;
}
