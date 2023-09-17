/*Program for Matrix Transpose*/
#include<stdio.h>
int main()
{
    int m,n,j;
    printf("Enter the number of rows and column\n");
    scanf("%d%d",&m,&n);
    int a[m][n],at[n][m];
    printf("Enter the elements of matrix\n");
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            at[j][i]=a[i][j];
        }
    }
    printf("Transpose:\n");
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",at[i][j]);
        }
        if(j==m)
        {
            printf("\n");
        }
    }
}