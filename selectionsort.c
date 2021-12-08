#include <stdio.h>
void print_arr(int[],int);
void main()
{
int a[20],n,i;
printf("enter the number required in the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the number %d:",i+1);
scanf("%d",&a[i]);
}
print_arr(a,n);
}
void print_arr(int a[],int n)
{
int i;
printf("the element of the array are:\t");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void selection_sort(int a[],int n)
{
int temp,i,j,min;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<=n-1;j++)
{
if (a[j]<a[min])
{
min =j;
}
}
if (i!=min)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
}