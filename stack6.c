/*Program to check the validity of Parenthesized Arithmetic Expression using Stack*/
#include <stdio.h>
int top = -1, c = 0;
char STACK[20], str[20];
void push(char c);
void pop();
int main()
{
    printf("Enter the expression: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            push(str[i]);
        }
        else
        {
            if (str[i] == ']' || str[i] == '}' || str[i] == ')')
            {
                if (top >= 0 && (str[i] == STACK[top] + 1 || str[i] == STACK[top] + 2))
                {
                    pop();
                }
                else 
                {
                    c++;
                }
            }
        }
    }
    
    if (c == 0 && top == -1)
    {
        printf("Expression is balanced\n");
    }
    else
    {
        printf("Not balanced\n");
    }
    return 0;
}

void push(char c) 
{
    if (top >= 19)
    {
        printf("Overflow\n");
    }
    else 
    {
        top = top + 1;
        STACK[top] = c;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Underflow\n");
    }
    else
    {
        top = top - 1;
    }
}
