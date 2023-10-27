/*Program for Set union*/
#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    printf("Enter the size of the two arrays");
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[m+n];
    printf("Enter the elements of the first array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            k++;
            i++;
            j++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(n<=m && j<m)
    {
        while(j<m)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}