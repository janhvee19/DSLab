/*Program for finding nth Fibonacci number using Recursion and improving its run time to save stack operations*/
#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    return fib(n-1)+fib(n-2);
}
void main()
{
    int i, n;
    printf("Enter the range");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", fib(i));
    }
}
