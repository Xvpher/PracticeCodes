#include<bits/stdc++.h>
using namespace std;
void printNums(int m, int n, int *arr)
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\n",*((arr+i*n)+j));
    }
  }
  return;
}
int main()
{
  int var = 10;
  int *ptr;
  ptr = &var;
  int arr[5] = {34,32,45,65,7};
  int nums[2][3]  =  {{16, 18, 20}, {25, 26, 27}};
  int m = 2;
  int n = 3;
  // printNums(m,n,&nums[0][0]);
  printf("---------------------\n");
  char g = 'r';
  int x = sizeof(g);
  printf("%d\n", x);
  return 0;
}
