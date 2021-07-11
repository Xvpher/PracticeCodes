#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
int gcd(int a, int b) {
  if(a==0) return b;
  else if(b==0) return a;
  else
  {
    if(a>=b) return gcd(a-b, b);
    else return gcd(a, b-a);
  }

}

int main()
{
  int a,b;
  scanf("%d %d", &a,&b);
  int g = gcd(a,b);
  int l = (a*b)/g;
  cout<<g<<" "<<l<<endl;
}
