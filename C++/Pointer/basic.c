#include<stdio.h>
int main()
{
int var1, i,n;
char var2[10];
// printf("1  %p\n", &var1);
// printf("2  %p\n", &var2);

printf("Enter the value of elements\n");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++)
{
  scanf("%d", &arr[i]);
}
int *ptr;
ptr = &arr[0];
printf("\n\n\n\n\n");
for(i=0;i<n;i++)
{
  printf("%d\n", *ptr);
  ptr++;
}
}
