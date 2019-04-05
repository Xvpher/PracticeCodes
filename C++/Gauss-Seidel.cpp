#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
  int i,j,iter=1,n;
  //std::cout << "Enter the number of equaions" << '\n';
  std::cin >> n;
  double a[n][n],b[n],x[n],y[n],e[n];
  double k,s=0.0;
  //std::cout << "Enter the coefficient matrix" << '\n';
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      std::cin >> a[i][j];
    }
  }
  //std::cout << "Enter the constant vector" << '\n';
  for(i=0;i<n;i++)
  {
    std::cin >> b[i];
  }
  //std::cout << "Enter the initial guess" << '\n';
  for(i=0;i<n;i++)
  {
    std::cin >> x[i];y[i]=x[i];
  }
  std::cout << "Iteration \t\t x(k) \t\t\t e(k) \t\t ||e(k)||" << '\n';
  while(true)
  {
    k=0;s=0.0;i=0;j=0;
    for(i=0;i<n;i++)
    {
      s=0.0;
      for(j=0;j<n;j++)
      {
        if(i!=j) s=s+a[i][j]*y[j];
      }
      y[i]=(b[i]-s)/a[i][i];
    }
    for(i=0;i<n;i++)
    {
      e[i]=y[i]-x[i];
      k=k+pow(e[i],2);
    }
    k=pow(k,0.5);
    printf("%5d    \t",iter);
    for(i=0;i<n;i++)
    {
      printf("% 4.3f  ", y[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("% 4.3f  ", e[i]);
    }
    std::cout << k << '\n';
    if(k<0.00000001) break;
    for(i=0;i<n;i++)
    {
      x[i]=y[i];
    }
    iter++;
  }
}
