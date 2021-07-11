#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,i,j,w,q,l,r,x,k,val,max;
  scanf("%d\n", &n);
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d %d", &a[i], &b[i]);
  }
  scanf("%d\n", &q);
  while(q--)
  {
    max=0;
    scanf("%d\n", &w);
    switch (w)
    {
      case 1:
      {
      scanf("%d %d", &i, &j);
      i--;j--;
      pair <int, int> temp;
      temp.first = a[i];
      temp.second = b[i];
      for(k=i;k<j;k++)
      {
        a[k]=a[k+1];
        b[k]=b[k+1];
      }
      a[j]=temp.first;
      b[j]=temp.second;
      break;
      }
      case 2:
      {
      scanf("%d %d %d", &l, &r, &x);
      for(k=l-1;k<=r-1;k++)
      {
        val = a[k]*x+b[k];
        if(val>max) max=val;
      }
      printf("%d\n", max);
      break;
      }
      default: {printf("default");}
    }
  }
  return 0;
}
