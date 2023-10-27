/*Program for finding factorial of a given number using recursion*/
#include<stdio.h>
int fact(int n,int f)
{
    if(n==1 || n==0)
    {
        return f;
    }
    return fact(n-1,n*f);
}
int main()
{
    int n, f;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",fact(n,1));
}