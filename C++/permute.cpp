#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,r,i,j,k,s=0;
	cout<<"Enter N"<<endl;
	cin>>n;cout<<endl;
	int a[r];
	for(i=0;i<r;i++)
	{
		a[i]=i+1;
	}
	// while(a[0]<(n-r+1))
	// {
	// 	for(j=r-1;j>=0;j--)
	// 	{
	// 		if(a[j]>(n-r+j+1))
	// 		{
	// 			a[j-1]++;
	// 			for(k=j;k<r;k++)a[k]=a[j-1]+(k-j+1);
	// 		}
	// 	}
	// 	for(i=0;i<r;i++)
	// 	{
	// 		cout<<a[i]<<" ";
	// 	}
	// 	cout<<endl;
	// 	a[r-1]++;
	// }
	// if(r==1)cout<<n;
  for(i=1;i<=n;i++)
	{
		for(j=0;j<=(n-i);j++)
		{
			for(k=j;k<j+i;k++)
			{
				cout<<a[k]<<" ";
				s=s+a[k];
			}
			cout<<"\n";
		}
		// cout<<endl;
	}
  cout<<"lord heaven's above"<<s<<endl;
	return 0;
}
