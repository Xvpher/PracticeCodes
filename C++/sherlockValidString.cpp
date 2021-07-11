#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
vector<int> arr(26,0);
for(int i=0;i<s.size();i++)
{
    arr[int(s[i])-97]++;
}
int min= INT_MAX;
int sum=0;
int zeros=0;
for(int i=0;i<26;i++)
{
    if(arr[i]==0){zeros++;continue;}
    else
    {
        if(arr[i]<min) min=arr[i];
    }
}
for(int i=0;i<26;i++)
{
    if(arr[i]==0) continue;
    sum=sum+abs(arr[i]-min);
}
cout<<zeros<<endl;
if(sum>1 || sum==(25-zeros)) return ("NO");
else return ("YES");
}

int main()
{
  string s;
  getline(cin,s);
  cout<<isValid(s)<<endl;
  return 0;
}
