#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cost(int k, int n, std::vector<ll> x, std::vector<ll> c)
{
  ll min = LONG_MAX, sum;
  for(int i=0;i<n;i++)
  {
    ll arr[n];
    sum = c[i];
    for(int j=0;j<n;j++)
    {
      if (j==i) arr[j]=-1;
      else {ll dc = c[j]+abs(x[j]-x[i]);
      arr[j] = dc;}
    }
    sort(arr, arr+n);
    int j=0;
    int count=0;
    while(count<k)
    {
      if(arr[j]!=-1) {sum+=arr[j];count++;}
      j++;
    }
    if(sum<min) min=sum;
  }
  return min;
}

int main()
{
  int test;
  cin>>test;
  int t=1;
  while(t<=test)
  {
    int k,n;
    cin>>k>>n;
    std::vector<ll> x(n);
    std::vector<ll> c(n);
    for(int i=0;i<n;i++)
    {
      cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>c[i];
    }
    ll ans = cost(k, n, x, c);
    printf("Case #%d: ", t);t++;
    cout<<ans<<endl;
  }
}
