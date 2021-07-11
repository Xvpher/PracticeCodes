#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n,i,j,t,ii,index;
  scanf("%d\n", &m);
  int k[m],a[100],b[100];
  for(i=0;i<m;i++)
  {
    scanf("%d\n", &k[i]);
  }
  scanf("%d\n", &n);
  for(i=0;i<100;i++)
  {
    a[i]=i+1;
  }
  for(i=0;i<m;i++)
  {
    index=0;
    for(j=0;j<k[i];j++)
    {
      for(t=j;t<100;t=t+(k[i]))
      {
        b[index]=a[t];
        index++;
      }
    }
    for(ii=0;ii<100;ii++)
    {
      a[ii]=b[ii];
    }
  }
  for(i=0;i<100;i++)
  {
    printf("%d ", b[i]);
  }
  printf("\n");
  printf("Required number : %d\n", b[n-1]);
}
