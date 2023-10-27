/*Program for Decimal to Hexadecimal Conversion*/
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
        r=n%16;
        n=n/16;
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
            if(STACK[i]<10)
            printf("%d",STACK[i]);
            else
            printf("%c",65+STACK[i]-10);
        }
    }
    else
    {
        printf("Exit");
    }
}