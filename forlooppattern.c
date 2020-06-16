#include<stdio.h>
int main()
{
	int n, p, d, space;
	space=1;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	space=n-1;
	for (d=1;d<=n;d++)
	{
		for(p=1;p<=space;p++)
		   printf(" ");
		space--;
		for(p=1;p<=2*d-1;p++)
		   printf("*");
		printf("\n");
    }
    space=1;
    for(d=1;d<=n-1;d++)
    {
    	for(p=1;p<=space;p++)
    	   printf(" ");
    	space++;
    	for(p=1;p<=2*(n-d)-1;p++)
    	   printf("*");
    	printf("\n");
    }
    return 0;
}
