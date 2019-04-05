#include<stdio.h>
void bubble(int a[], int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<(n-i);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main()
{
int n,i;
printf("Enter the value of n\n");
scanf("%d", &n);
int arr[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
bubble(arr,n);
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
}
