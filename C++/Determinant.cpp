#include<iostream>
using namespace std;
int det(int *a,int n)
{
	int i,j,r=0,c=0,k;int b[n-1][n-1];int ctr=1,d=0;
	if(n==1)
	{
		return (*a);
	}
	else
	{
		for(k=0;k<n;k++)
		{
			r=0;c=0;
			for(i=0;i<n;i++)
			{
				for(j=1;j<n;j++)
				{
					if(i!=k)
					{
						b[r][c]=*((a+i*n)+j);c++;
						if(c==(n-1))
						{
							c=0;r++;
						}
					}
				}
			}
			d=d+ctr*(*(a+k*n))*det((int *)b,n-1);ctr=-ctr;
		}
		return d;
	}
}
int main()
{
	int n,i,j;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int arr[n][n];
	cout<<"Enter the value of array row-wise"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<det(&arr[0][0],n);
}
