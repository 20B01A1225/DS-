#include<stdio.h>
void print_arr(int a[],int n);
void bubble_sort(int a[],int n);
int main()
{
  int a[20],i,size;
  printf("enter the size of array elements");
  scanf("%d",&size);
  for (i=0;i<size;i++)
  {
    printf("enter a %d elements:",i+1);
    scanf("%d",&a[i]);
  }
   bubble_sort(a,size);
   print_arr(a,size);
}
void print_arr(int a[],int n)
{
  int i;
  printf("the elements of array are:");
  for (i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
void bubble_sort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
for(j=0;j<n-1;j++)
{
 if(a[j]<a[j+1])
   {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
   }
}
}
   printf("elements are:");
   for(i=0;i<n;i++)
   {
   printf("%d\n",a[i]);
   }
   }
 