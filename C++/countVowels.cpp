#include<bits/stdc++.h>
using namespace std;

long countVowels(std::string str)
{
  long n = str.size();
  std::string vow = "aeiouAEIOU";
  std::vector<long> memo(n,0);
  if(vow.find(str[0]) != string::npos) memo[0]=1;
  for(int i=1;i<n;i++)
  {
    if(vow.find(str[i]) != string::npos) memo[i]=memo[i-1]+1;
    else memo[i]=memo[i-1];
  }
  
}


int main()
{
  std::string str;
  getline(cin, str);
  cout<<countVowels(str)<<endl;
}
