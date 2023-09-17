/*Program for reversal of an array.*/
#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n],ar[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            ar[j]=a[i];
            i++;
        }
    }
    printf("Reversed array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
}