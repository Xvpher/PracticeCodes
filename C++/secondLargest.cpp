// find subsets that equal to a given total

#include<bits/stdc++.h>
using namespace std;

int secLar(std::vector<int> arr, int n)
{
  int first = INT_MIN;
  int second = INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=first)
    {
      second=first;
      first=arr[i];
    }
    else if(arr[i]>second && arr[i]<first)
    {
      second=arr[i];
    }
    else continue;
  }
  return second;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<secLar(arr, n)<<endl;
  }
}
