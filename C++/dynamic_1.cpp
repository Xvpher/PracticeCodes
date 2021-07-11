// find subsets that equal to a given total

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count(std::vector<int> arr, int total);
ll count_sets(std::vector<int> arr, int total, int i, std::vector<std::vector<std::string>> memo);

ll count_sets(std::vector<int> arr, int total, int i, std::vector<std::vector<std::string>> memo)
{
  ll ans;
  std::string key = to_string(total)+":"+to_string(i);
  cout<<memo[key]<<endl;
  // if() return memo[key];
  // if (total==0) return 1;
  // else if (total<0) return 0;
  // else if (i<0) return 0;
  // else if (total < arr[i]) ans = count_sets(arr, total, i-1, memo);
  // else ans = count_sets(arr, total-arr[i], i-1, memo) + count_sets(arr, total, i-1, memo);
  // memo[key] = ans;
  return 0;
}

ll count(std::vector<int> arr, int total)
{
  std::vector<std::vector<std::string>> memo(total, std::vector<std::string>(arr.size()));
  return count_sets(arr, total, arr.size()-1, memo);
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
  ll ans = 0;
  //ll ans = count(arr, total);
  cout<<ans<<endl;
  return 0;
}
