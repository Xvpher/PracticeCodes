#include<bits/stdc++.h>
using namespace std;

int minBottles(int gallons[], int m, int N)
{
    int table[N+1];

    table[0] = 0;

    for (int i=1; i<=N; i++)
        table[i] = INT_MAX;

    for (int i=1; i<=N; i++)
    {
        for (int j=0; j<m; j++)
          if (gallons[j] <= i)
          {
              int res = table[i-gallons[j]];
              if (res != INT_MAX && res + 1 < table[i])
                  table[i] = res + 1;
          }
    }
    return table[N];
}

int main()
{
    int gallons[] =  {10, 7, 5, 1};
    int m = sizeof(gallons)/sizeof(gallons[0]);
    int N;
    std::cin >> N;
    cout<<minBottles(gallons, m, N)<<endl;
    return 0;
}
