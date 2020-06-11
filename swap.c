#include<stdio.h>
int main()
{
	int a,b;
	a=4;
	b=8;
	printf("Before swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=a+b; // a=12
	b=a-b; // b=4
	a=a-b; // a=8
	printf("After swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
	
}
