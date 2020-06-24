#include<stdio.h>
void display();
struct empdetails
{
	char empname[20];
	int empno;
	char dept_name[20];
	int salary;
}details[20];

int const n;

int main()
{
	int i;
	printf("How many employees? ");
	scanf("%d", &n);
	printf("Enter Employee info as Name, Number, Department name, and salary: ");
	for(i=0;i<n;i++)
	{
		scanf("%s %d %s %d", &details[i].empname, &details[i].empno, &details[i].dept_name, &details[i].salary);
	}
	display();
	return 0;
}

void display()
{
	int i;
	printf("\nEmployee_Name\tEmployee_Number\tDepartment_Name\tSalary\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%s\t\t%d \n", details[i].empname, details[i].empno, details[i].dept_name, details[i].salary);
	}
}
