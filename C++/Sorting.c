#include<bits/stdc++.h>
using namespace std;

void display(int arr[])
{
  int n = (int)(sizeof(arr)/sizeof(arr[0]));
  printf("%d\n", n);
}

int main()
{
  int n;
  scanf("%d\n", &n);
  int arr[n];
  display(arr);
}
