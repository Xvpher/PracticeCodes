#include<bits/stdc++.h>
using namespace std;
void printBubble(vector<int> a)
{
  int n = a.size(),temp,swaps=0;
  n=n/2;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        swaps++;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  // printf("Array is sorted in %d swaps.\n", swaps);
  // printf("First Element: %d\n", a[0]);
  // printf("Last Element: %d\n", a[n-1]);
  vector<int> b;
  b.assign(a.begin(), a.end());
  for(int i=0;i<b.size();i++)
  {
    printf("%d\n", b[i]);
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  printBubble(arr);
}
