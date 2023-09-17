/*Program for insertion in the sorted array.*/
#include<stdio.h>
int main()
{
  int n,b,t;
  printf("Enter the size of the array");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of the sorted array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the number to be inserted\n");
  scanf("%d",&b);
  n++;
  a[n-1]=b;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
  }
  printf("The elements of the array are:\n");
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
