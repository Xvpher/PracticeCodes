#include<iostream>
#include<math.h>
using namespace std;
void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            cout<<data[j];
        cout<<endl;
        return;
    }
    for (int i=start; i<=end; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
int main()
{
	int r,n,i;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
    cout<<"Enter the value of r"<<endl;
	cin>>r;
	int data[r];
	int arr[n];
	for(i=1;i<=n;i++)
	{
		arr[i-1]=i;
	}
    cout<<"The Combinations are : "<<endl;
    combinationUtil(arr, data, 0, n-1, 0, r);
}

