/*Program to check if the given number is a palindrome using stacks*/
#include<stdio.h>
int STACK[20],top=-1,x,a=0,c=0;
void push(int n);
void pop();
void display();
void main()
{
    printf("Enter the number");
    scanf("%d", &x);
    while(x>0)
    {
        push(x%10);
        c++;
        x=x/10;
    }
    for(int i=0;i<c/2;i++)
    {
        if(STACK[i]==STACK[top])
        {
            a++;
            top=top-1;
        }
        else
        {
            break;
        }
    }
    if(a==c/2)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}
void push(int n)
{
    if(top >= 19)
    {
        printf("Overflow");
    }
    else
    {
        top=top+1;
        STACK[top]=n;
    }
}