/*Program for Matrix Subtraction*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows and column\n");
    scanf("%d%d",&m,&n);
    int a1[m][n],a2[m][n];
    int diff[m][n];
    diff[m][n]=0;
    printf("Enter the elements of first matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            diff[i][j]=a1[i][j]-a2[i][j];
        }
    }
    printf("Subtraction of two array is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",diff[i][j]);
        }
    }
}