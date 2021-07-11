#include<bits/stdc++.h>
using namespace std;




std::vector<int> mergeSort(std::vector<int> arr, int l, int h)
{
  if(l<h)
  {
    int mid = (l+h)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, h);
    merge(arr, l, mid, h);
  }

}

void display(std::vector<int> arr)
{
  for (size_t i = 0; i < arr.size(); i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  int n;
  cin>>n;
  std::vector<int> arr(n);
  for (size_t i = 0; i < n; i++) {
    cin>>arr[i];
  }
  display(arr);
  // new_arr = mergeSort(arr, 0, arr.size()-1);
  // display(new_arr);
}
