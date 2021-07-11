#include <bits/stdc++.h>
using namespace std;

std::vector<int> solve (int N, int M, std::vector<std::vector<int>> A, int K)
{
  std::vector<int> res(2);
  std::map<int, std::vector<pairs<int, int>>> mp;
  std::vector<std::vector<int>> xorr;
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<M;j++)
    {
      if(j==0) xorr[i][j] = A[i][j];
      else
      {
        xorr[i][j] = xorr[i][j-1]^A[i][j];
      }
    }
  }
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<M;j++)
    {
      int val;
      if(i==0) xorr[i][j] = xorr[i][j];
      else
      {
        xorr[i][j] = xorr[i-1][j]^xorr[i][j]
      }
    }
    mp[xorr[i][j]].push_back(make_pair(i,j));
  }
  for()



  return res;
}



int main()
{
  int t,n,m,k;
  std::cin >> t;
  while(t-->0)
  {
    std::cin >> n;
    std::cin >> m;
    std::vector<std::vector<int>> arr(n, std::vector<int> m);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        std::cin >> arr[i][j];
      }
    }
    std::cin >> k;
    std::vector<int> res;
    res = solve(n, m, arr, k);
    cout<<res[0]<<" "<<res[1]<<endl;
  }
  return 0;
}
