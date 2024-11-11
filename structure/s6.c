#include<stdio.h>
#include<string.h>
struct employee
{
int id;
char name[20];
float salary;
};

struct employee inputemployee()
{
    struct employee e;
    printf("enter the employees id:\n");
    scanf("%d",&e.id);
    printf("enter the name of the employees:");
    fgets(e.name,20,stdin);
    e.name[strcspn(e.name,"\n")]='0';
    printf("enter the salary:");
    scanf("%f",&e.salary);
}
void display(struct employee e)
{
 printf("%d %s %f",e.id,e.name,e.salary);   
}

void sortbysalary(struct employee e[],int n)
{ 
    struct employee sort;
    int i,r;
    for(r=0;r<n;r++)
    {
      for(i=0;i<n;i++)
      {
         if(e[i].salary>e[i+1].salary)
        {
              sort=e[i];
              e[i]=e[i+1];
              e[i+1]=sort;
        }
      }
    }
}

void sortbyname(struct employee e[],int n)
{
    int r,i;
    struct employee swap;
    for(r=0;r<n;r++)
    {
        for(i=0;i<n;i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {
                swap=e[i];
                e[i]=e[i+1];
                e[i+1]=swap;
            }
        }
    }
}

struct employee highestsalary(struct employee e[],int n)
{
   struct employee maxsalary;
   int i;
   maxsalary=e[0];
   for(i=0;i<n;i++)
   {
      if(maxsalary.salary>e[i].salary)
      {
            maxsalary=e[i];
      }
   }
   return maxsalary;
}


int main()
{ int n,i;
    printf("enter the number of employees");
    scanf("%d",&n);
    struct employee employees[n];
     for (int i = 0; i < n; i++) 
    {
        printf("\nEmployee %d:\n", i + 1);
        employees[i] = inputemployee();
    }


     for (int i = 0; i < n; i++) 
    {
        printf("\ndisplay %d:\n", i + 1);
        display(employees[i]);
    }

   struct employee maxSalaryEmp = highestsalary(employees, n);//variable of maxsalary we have to make it from highest struct 
    printf("\nEmployee with highest salary:\n");
    display(maxSalaryEmp);

 printf("\nEmployees sorted by salary:\n");
    sortbysalary(employees, n);
    for (int i = 0; i < n; i++) {
        display(employees[i]);
    }
     printf("\nEmployees sorted by name:\n");
    sortbyname(employees, n);
    for (int i = 0; i < n; i++) {
        display(employees[i]);
    }


}