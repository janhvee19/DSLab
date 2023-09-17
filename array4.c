/*Program for delete the given elements into an array.*/
#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position of the element to be deleted");
    scanf("%d",&d);
    if(d>=n+1)
    {
        printf("Deletion is not possible");
    }
    else
    {
        for(int i=d-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    printf("The elements of the array are\n");
    for(int i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }
}