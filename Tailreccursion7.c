/*Program to reverse the given number using Recursion*/
#include<stdio.h>
int reverse(int num,int rev)
{
    if(num==0)
    {
        return rev;
    }
    return reverse(num/10,rev*10+num%10);
}
int main()
{
    int num, rev;
    printf("Enter the number");
    scanf("%d",&num);
    printf("%d",reverse(num,0));
}