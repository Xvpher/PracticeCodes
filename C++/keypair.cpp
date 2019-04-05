#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
  int n,m,k,i,l,u,mid;
  //std::cout << "enter n" << '\n';
  std::cin >> n;
  while(n>0)
  {
    m=0;k=0;
    //std::cout << "enter m" << '\n';
    std::cin >> m;
    int arr[m];
    //std::cout << "enter arr" << '\n';
    for(i=0;i<m;i++)
    {
      std::cin >> arr[i];
    }
    //std::cout << "enter k" << '\n';
    std::cin >> k;
    if(k>=(2*arr[m-1])) {std::cout << "-1" << '\n'; n--; continue;}
    for(i=0;i<(m/2);i++)
    {
      l=i+1;u=m-1;
      //std::cout << "outside while i l u" <<i<<l<<u<< '\n';
      while(l<=u)
      {
        mid=(l+u)/2; //std::cout << "l and u" << l <<"  "<< u << '\n';
        if(arr[mid] == (k-arr[i]) && arr[i]!=arr[mid]) {std::cout << arr[i] <<' '<< arr[mid] <<' '<< k << '\n'; break;}
        else if(arr[mid] > (k-arr[i])) u=mid-1;
        else l=mid+1;
      }
    }
    n--;
  }
  return 0;
}
