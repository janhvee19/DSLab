/*Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible for admission
in Delhi University.A student is eligible for DU if he has scored 95 % or more in Best 4.*/
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks[6];
}s;
void main()
{
    int a;
    float percentage;
    printf("Enter the name and roll number");
    scanf("%s %d",s.name, &s.roll);
    printf("Enter the marks of 6 subject");
    for(int i=0;i<6;i++)
    {
        scanf("%f",&s.marks[i]);
    }
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(s.marks[i]>s.marks[j])
            {
                a=s.marks[i];
                s.marks[i]=s.marks[j];
                s.marks[j]=a;
            }
        }
    }
    percentage=(s.marks[2]+s.marks[3]+s.marks[4]+s.marks[5])/4.0;
    printf("Percentage of best 4 subject is %0.2f\n", percentage);
    if(percentage>=95.000)
    {
        printf("eligible for DU");
    }
    else 
    {
        printf("Not eligible for DU");
    }
}