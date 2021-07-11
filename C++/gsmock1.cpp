#include<bits/stdc++.h>
using namespace std;

void processQuery(int p, int q, std::vector<std::string> queries)
{

}


int main()
{
  int p,q;
  std::cin >> p;
  std::cin >> q;
  std::vector<std::string> queries(q);
  for(int i=0;i<q;i++)
  {
    std::cin >> queries[i];
  }
  processQuery(p, q, queries);
  return 0;
}
