/*Program for traversing array elements.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}