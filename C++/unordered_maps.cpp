// Hash table implementation

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int count(std::vector<int> arr, int total, int n, std::vector<std::vector<int>> memo)
{

  int ans;
  if (n<0) return 0;
  if (memo[n][total] != -1) return memo[n][total];
  if (total == 0) return 1;
  else if (total < 0) return 0;
  else if (total<arr[n-1])
  {
    ans = count(arr, total, n-1, memo);
  }
  else
  {
    ans = (count(arr, total-arr[n-1], n-1, memo) + count(arr, total, n-1, memo));
  }
  memo[n][total] = ans;
  return ans;
}

int count_sets(std::vector<int> arr, int total)
{
  std::vector<std::vector<int>> memo(arr.size()+1, std::vector<int>(total+1,-1));
  sort(arr.begin(),arr.end());
  return count(arr, total, arr.size(), memo);
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
  int total;
  scanf("%d", &total);
  int ans;
  ans = count_sets(arr, total);
  cout<<"\t"<<ans<<endl;
  return 0;
}
