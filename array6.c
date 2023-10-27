/*Program to find which element is repeated in the array and which is not*/
#include<stdio.h>
int main()
{
    int n,c,max=0;
    printf("Enter the size");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    int dat[max];
    dat[max+1]=;
}