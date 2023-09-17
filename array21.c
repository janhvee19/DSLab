/*Program for Matrix transposition without second matrix*/
#include<stdio.h>
int main()
{
    int m,n,i,j,t;
    printf("Enter the size of row and column\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    printf("Transpose:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        if(j==n-1)
        {
            printf("\n");
        }
    }
}