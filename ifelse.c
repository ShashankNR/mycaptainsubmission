#include<stdio.h>
 int main()
{
	int marks;
	printf("Bit elementary School\n");
	printf("*********************\n");
	printf("                     \n");
	printf("Enter your marks: ");
	scanf("%d", &marks);
	if ((marks >= 85) && (marks <=100))
	{
		printf("Your result: Grade A");
	}
	else if ((marks >= 70) && (marks <=84))
	{
		printf("Your result: Grade B");
	}
	else if ((marks >= 55) && (marks <=69))
	{
		printf("Your result: Grade C");
	}
	else if ((marks >= 40) && (marks <=54))
	{
		printf("Your result: Grade D");
	}
	else if (marks < 40)
	{
		printf("Your result: Grade F");
	}
	else
	{
		printf("Invalid marks");
	}
	return 0;
}
