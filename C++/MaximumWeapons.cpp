#include<bits/stdc++.h>
using namespace std;

long maxWeapons(long x, long y, long z)
{
  long tot;
  while(z>0)
  {
    tot=0;
    while(x>=y)
    {
      tot = tot+(y-1);
      x=x-y;
    }
    if(x>0) tot+=(x-1);
    x=tot;
    z--;
  }
}

int main()
{
    long X,Y,Z;
    cin>>X>>Y>>Z;
    cout<<maxWeapons(X,Y,Z)<<endl;
}
