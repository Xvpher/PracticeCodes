#include<stdio.h>

void func_1(int ptr[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("   %d\n", ptr[i]);
  }
}

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void sorted(int a[], int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<(n-i);j++)
    {
      // if(*ptr > *(ptr+1))
      if(a[j] > a[j+1])
      {
        swap(&a[j], &a[j+1]);
      }
    }
  }
}
int main()
{
  int n,i;
  // printf("Enter the number of elements\n");
  scanf("%d", &n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  // sorted(arr, n);
  int *ptr;
  ptr = &arr[0];
  func_1(ptr, n);
  for(i=0;i<n;i++)
  {
    // printf("%d\n", arr[i]);
  }
}
