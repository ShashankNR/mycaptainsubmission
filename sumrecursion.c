#include<stdio.h>
int sum();
int main()
{
	int number=1234;
	printf("Input number: %d\n", number);
	int result=sum(number);
	printf("Sum of digits: %d", result);
}

int sum(int n)
{
	if (n==0)
	   return 0;
	return(n%10+sum(n/10));
}
