#include <bits/stdc++.h>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

string Find_It (int X, int K, string S, int N)
{
  std::string res = "";
  std::vector<std::vector<int>> table(N, std::vector<int> (N,0));
  std::vector<int> lob;
  int i=1;
  int left = (i-1)*X+1;
  int right = min(N,(i*X));
  while(left<right)
  {
    for(int k=0;k<=right-left;k++)
    {
      table[i-1][k] = (int)S.at(left-1+k)-'0';
      // cout<<table[i-1][k]<<" ";
    }
    sort(table[i-1].begin(),table[i-1].begin()+(right-left+1));
    // cout<<endl;
    lob.push_back(right-left+1);
    i++;
    left = (i-1)*X+1;
    right = min(N,(i*X));
  }
  int rem,t;
  t = lob.size()-1;
  while(t>=0)
  {
    rem = K%lob[t];
    if(rem==0 && t==lob.size()-1)
    {
      res+=to_string(table[i-1][lob[t]]);
      i--;t--;
    }
    else if (rem!=0 && t==lob.size()-1)
    {
      res+=to_string(table[i-1][rem-1]);
      i--;t--;
    }
    else
    {
      res+=to_string(table[i-1][rem]);
      i--;t--;
    }
    K=K/lob[t];
  }
  reverse(res.begin(),res.end());
  return res;

}

int main()
{
  int N;
  std::cin >> N;
  int X;
  std::cin >> X;
  long long K;
  std::cin >> K;
  std::string S;
  std::cin >> S;
  auto start = high_resolution_clock::now();
  std::string out = Find_It(X,K,S,N);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
  std::cout << out << '\n';
  return 0;
}
