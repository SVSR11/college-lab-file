/*30.	Write a program to print the Fibonacci series 
and find the factorial of a number using recursion.*/
#include<stdio.h>

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


long long fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*fac(n-1);
}

void main()
{

    int n;
    printf("enter a number to find fatorial..");
    scanf("%d",&n);
    long long value=fac(n);
    printf("factorial of n:-%lld",value);

    printf("\nenter the number of elements for fibonacci..");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
}

