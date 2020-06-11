#include<stdio.h>
int main()
{
	int a,b;
	a=4;
	b=8;
	printf("Before swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=a+b; // a=12 because it's added with b
	b=a-b; // b=4 since we need to decrease it by changed a again for
               // it to return to the value of a.
	a=a-b; // a=8 it's decreased with b whose value is now 4.
	printf("After swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
	
}
