//structure program
#include<stdio.h>
#include<string.h>
struct employee//declearing structure variables
{
char name[50];
int id;
char department[20];
float salary;
char email[50];
}employee1;
//main function
int main()
{
//struct employee1
strcpy(employee1.name,"john doe");
employee1.id=12345;
strcpy(employee1.department,"Human resources");
employee1.salary=55000.50;
strcpy(employee1.email,"john.doe@company.com");
//output display
printf("Name       :%s\n",employee1.name);
printf("id         :%d\n",employee1.id);
printf("Department :%s\n",employee1.department);
printf("Salary     :%.2f\n",employee1.salary);
printf("email      :%s\n",employee1.email);
return 0;
}
