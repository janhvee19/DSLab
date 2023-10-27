/*Finding sum of the digits of the number*/
#include<stdio.h>
int sumDigits(int num,int s)
{
    if(num==0)
    {
        return s;
    }
    return sumDigits(num/10,s+num%10);
}
int main()
{
    int num, s;
    printf("Enter the number");
    scanf("%d",&num);
    printf("%d",sumDigits(num,0));
}