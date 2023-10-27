/*Program for Missing number in an array*/
#include<stdio.h>
void main()
{
    int a[20],n,i,sumN=0,sum=0,num;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    sumN = n*(n+1)/2;
    printf("\nEnter the elements of the array starting from 1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum= sum + a[i];
    }

    num = sumN-sum;
    printf("\nMissing number:%d",num);
}