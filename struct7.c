/*7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks
having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
#include<stdio.h>
struct marks
{
    int roll_no;
    char name[20];
    float chem_marks,maths_marks,phy_marks;
}m[5];
void main()
{
    int i;
    float percentage[5];
    for(i=0;i<2;i++)
    {
        printf("Enter the details");
        scanf("%d %s %f %f %f", &m[i].roll_no, m[i].name, &m[i].chem_marks,&m[i].maths_marks, &m[i].phy_marks);
    }
    for(i=0;i<2;i++)
    {
        percentage[i]=(m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/3.0;
        printf("Percentage of %s is %f\n", m[i].name, percentage[i]);
    }
}