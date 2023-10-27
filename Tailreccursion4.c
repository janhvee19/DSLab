/*Program for finding GCD of two numbers using Recursion*/
#include<stdio.h>
int hcf(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    return hcf(b,a%b);
}
int main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d %d", &a,&b);
    printf("HCF of %d and %d is %d",a,b,hcf(a,b));
}