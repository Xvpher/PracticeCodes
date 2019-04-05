#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,r,i,j,k;
	/*cout<<"Enter the numbers"<<endl;
	cin>>n>>r;*/
	for(i=1;i<=3;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			for(k=j+1;k<=5;k++)
			{
				cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}
	}
	return 0;
}

