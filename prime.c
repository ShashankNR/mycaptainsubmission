#include<stdio.h>
int primenumber(int,int);
int main()
{
    int n,primecheck;
    printf("Enter a number: ");
    scanf("%d", &n);
    primecheck=primenumber(n,n/2);
    if(primecheck==1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
 
int primenumber(int n,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
       if(n%i==0)
       {
         return 0;
       }
       else
       {
         return primenumber(n,i-1);
       }       
    }
}
