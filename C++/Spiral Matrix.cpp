#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	int r,c,n,k,t=0,a;
	cout<<"Enter the number of rows and columns"<<endl;
	cin>>r>>c;
	int arr[r][c];
	n = r*c;a=n;
	for(a=n;a>0;a=a/10)t++;
	int i=0,j=0,lr=0,lc=0,ur=r-1,uc=c-1;
	for(k = 1;k<=n;k++)
	{
		arr[i][j]=k;
		if(i==lr && j<uc)j++;
		else if(j==uc && i<ur)i++;
		else if(i==ur && j>lc)j--;
		else if(j==lc && i>lr)i--;
		if(i==lr && j==lc)
		{
			lr+=1;lc+=1;ur-=1;uc-=1;i=lr;j=lc;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%*d  ",t,arr[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
