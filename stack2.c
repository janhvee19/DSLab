/*Program for Decimal to Binary Conversion*/
#include<stdio.h>
int STACK[20],top=-1,n,r;
void push();
void display();
void main()
{
    printf("Enter the decimal number");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%2;
        n=n/2;
        push(r);
    }
    display();
}
void push(int r)
{
    if(top >= 19)
    {
        printf("Overflow");
    }
    else
    {
        top=top+1;
        STACK[top]=r;
    }
}
void display()
{
    if(top>=0)
    {
        for(int i=top; i>=0; i--)
        {
            printf("%d\n",STACK[i]);
        }
    }
    else
    {
        printf("Exit");
    }
}