/*Program for Stack Primitive Operations*/
#include<stdio.h>
int STACK[20],top=-1,n,x;
void push();
void pop();
void display();
void main()
{
    printf("enter the capacity by the user\n");
    scanf("%d ", &n);
    int choice;
    do
    {
        printf("Enter the choice\n 1. Push \n 2. Pop \n 3. Display \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                

            }
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("Enter the valid choice\n");
        }
    }
    while(choice!=4);
}
void push()
{
    if(top >= n-1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the element to be inserted\n");
        scanf("%d", &x);
        top=top+1;
        STACK[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Deleted element = %d\n", STACK[top]);
        top=top-1;
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