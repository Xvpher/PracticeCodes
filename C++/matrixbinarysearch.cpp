#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
  int t,r,c,i,j,x,k=0;
  std::cin >> t;
  while(t>0)
  {
    k=0;
    std::cin >> r >> c;
    int arr[r][c];
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        std::cin >> arr[i][j];
      }
    }
    std::cin >> x;
    i=0;j=c-1;
    while(i<r && j>=0)
    {
      if(arr[i][j] == x){ k++; break; }
      else if(arr[i][j] > x) j--;
      else i++;
    }
    std::cout << k << '\n';
    t--;
  }
}
