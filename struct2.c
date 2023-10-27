/*Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to
store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.*/
#include<stdio.h>
struct students
{
    int roll_no,age;
    char name[20];
    float marks;
}s[5];
void main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter the details");
        scanf("%d %d %s %f", &s[i].roll_no,&s[i].age,s[i].name, &s[i].marks);
    }
    for(i=0;i<2;i++)
    {
        if(s[i].roll_no==1)
        printf("%d %d %s %f", s[i].roll_no,s[i].age,s[i].name, s[i].marks);
    }
}