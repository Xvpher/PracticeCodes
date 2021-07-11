#include<bits/stdc++.h>
using namespace std;

int printSorted(std::vector<std::vector<int>>&arr,int i,int j, int n)
{
  // int i,j;
  // for(i=0;i<n;i++)
  // {
  //   for(j=0;j<n;j++)
  //   {
  //     printf("%d ", arr[i][j]);
  //   }
  //   printf("\n");
  // }
  printf("%d\n", arr[i][j]);
  if(i==n-1 || j==n-1) return 0;
  else if(abs(arr[i+1][j]-arr[i][j]) < abs(arr[i][j+1]-arr[i][j])) return printSorted(arr,i+1,j,n);
  else return printSorted(arr,i,j+1,n);
}

int main()
{
  int t;
  scanf("%d\n", &t);
  while(t--)
  {
    int n,i,j;
    scanf("%d\n", &n);
    int a[n][n];
    std::vector<std::vector<int>>arr(n,std::vector<int>(n));
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d\n", &arr[i][j]);
      }
    }
    printSorted(arr,0,0,n);
    printf("Done\n");
  }
}
