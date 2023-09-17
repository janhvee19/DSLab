/*Program for traversing array elements.*/
#include<stdio.h>
int main()
{
  int n,b,pos;
  printf("Enter the size of the array");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of the array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the number to be inserted\n");
  scanf("%d",&b);
  printf("Enter the position of the element to be inserted\n");
  scanf("%d",&pos);
  n++;
  for(int i=n-1;i>=pos;i--)
  {
    a[i]=a[i-1];
  }
  a[pos-1]=b;
  printf("The elements of the array are:\n");
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
