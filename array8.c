/*Program for merging two sorted arrays*/
#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    printf("Enter the size of the two arrays");
    scanf("%d %d",&m,&n);
    int a[m],b[n],c[m+n];
    printf("Enter the elements of the first array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(m<=n && j<n)
    {
        while(j<n)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<m)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
}