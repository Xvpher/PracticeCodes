#include<bits/stdc++.h>
using namespace std;

void operate(std::vector<int> arr, int n, int x, int q, std::vector<std::vector<int>> queries){
  for (int i = 0; i < q; i++) {
    int flag=0;
    if(queries[i][0]==1)
    {
      for (int k = queries[i][1]-1; k < queries[i][2]; k++) {
        if(arr[k]==x) flag++;
        if(flag==queries[i][3]) {printf("%d\n",k+1);break;}
        else if(flag!=queries[i][3] && k==queries[i][2]-1) printf("%d\n", -1);
      }
    }
    else
    {
      arr[queries[i][1]-1]=queries[i][2];
    }
  }
}

int main() {
  int n,x,q;
  cin>>n>>x;
  std::vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  cin>>q;
  std::vector<std::vector<int>> queries(q, std::vector<int> (4,0));
  for (int i = 0; i < q; i++) {
    cin>>queries[i][0];
    if(queries[i][0]==1)
    {
      for (int j = 1; j <= 3; j++) {
        cin>>queries[i][j];
      }
    }
    else
    {
      for (int j = 1; j <= 2; j++) {
        cin>>queries[i][j];
      }
    }
  }
  operate(arr, n, x, q, queries);
  return 0;
}
