/*Program to Reverse the given String using Stack*/
#include<stdio.h>
char STACK[20],str[20];
int top=-1,i;
void push(char c);
void pop();
void display();
void main()
{
    printf("Enter the string");
    gets(str);
    for(i=0; str[i] !='\0';i++)
    {
        push(str[i]);
    }
    display();
}
void push(char c)
{
    if(top >= 19)
    {
        printf("Overflow");
    }
    else
    {
        top=top+1;
        STACK[top]=c;
    }
}
void display()
{
    if(top>=0)
    {
        for(int i=top; i>=0; i--)
        {
            printf("%c",STACK[i]);
        }
    }
    else
    {
        printf("Exit");
    }
}
