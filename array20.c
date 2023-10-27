/*Program for finding Matrix Determinant*/
#include <stdio.h>

void main()
{
    int arr1[10][10],i,j,n;
    int det=0;  
	printf("Input elements in the first matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
	        scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));
    }
    printf("\nThe Determinant of the matrix is: %d\n\n",det);
}
