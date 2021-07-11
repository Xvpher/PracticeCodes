#include<bits/stdc++.h>
using namespace std;

std::vector<long> findPairs(std::vector<long> arr, std::vector<std::vector<long>> events)
{
  std::vector<int> res;
  std::vector<long> memo(arr.size(),0);
  if(int(arr[0]&1) == 0) {cout<<"asd";memo[0]=1;}
  for (size_t i = 1; i < arr.size(); i++) {
    if (arr[i]&1) {
      memo[i]=memo[i-1];
    }
    else memo[i]=memo[i-1]+1;
  }
  for (size_t i = 0; i < events.size(); i++) {
    switch (events[i][0]) {
      case 1:{
        if(!(arr[events[i][1]]&1) && (events[i][2]&1)) for(int j=events[i][1];j<arr.size();j++) memo[j]--;
        else if((arr[events[i][1]]&1) && !(events[i][2]&1)) for(int j=events[i][1];j<arr.size();j++) memo[j]++;
        else break;
      }
      case 2:{
        long even, odd;
        even = memo[events[i][2]] - memo[events[i][1]-1];
        odd = (events[i][2]-events[i][1]+1) - even;
        res.push_back((even*odd)%int(10E9+7));
        break;
      }
      default: break;
    }
  }
  return memo;
}


int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  std::vector<long> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int q;
  cin>>q;
  std::vector<std::vector<long>> events(q);
  for(int i=0;i<q;i++)
  {
    events[i] = std::vector<long>(3);
    cin>>events[i][0]>>events[i][1]>>events[i][2];
  }
  std::vector<long> res;
  res = findPairs(arr, events);
  for (size_t i = 0; i < res.size(); i++) {
    cout<<res[i]<<endl;
  }



  return 0;
}
