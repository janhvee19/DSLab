/*Program for Matrix Multiplication*/
#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the number of rows and column of first array\n");
    scanf("%d%d",&m,&n);
    int a1[m][n];
    printf("Enter the elements of first matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the number of rows and column of second array\n");
    scanf("%d%d",&p,&q);
    int a2[p][q],c[m][q];
    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
   if(n==p)
   {
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<q;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
            {
                c[i][j]+=a1[i][k]*a2[k][j];
            }
        }
      }
      printf("Multiplication of two array is:\n");
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
      }
    }
    else
    {
        printf("Multiplication is not possible");
    }
}