#include <bits/stdc++.h>

using namespace std;

int sorted(string str)
{
    int n = str.length();
    map<int, int > mp;
    mp[0] = 0;
    int ca = 0, cc = 0;
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == 'a') ac++;
        else if (str[i] == 'c') cc++;

        int temp =
        res = res + mp[tmp];

        // increasing the count of current difference
        // pair by 1
        mp[tmp]++;
    }

    return res;
}
int int main() {
  cin>>n;
  String str;
  cin>>str;
  printf("%d\n", sorted(str,n));
  return 0;
}
