#include <bits/stdc++.h>

using namespace std;

int maxxor(std::vector<int> arr, int n)
{
  sort(arr.begin(),arr.end());
  std::vector<int> count(n,0);
  count[0]=arr[0];
  for(int i=1;i<n;i++)
  {
    count[i] = count[i-1] ^ arr[i];
  }
  for(int i=0;i<n;i++)
  {
    printf("%u\n", ~count[n-i-1]);
  }
  return 0;
}

int main()
{
  int n;
  cin>>n;
  std::vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  maxxor(arr,n);
  return 0;
}
