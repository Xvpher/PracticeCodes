#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the value of N"<<endl;
	cin>>n;int t=n;
	int a[n],b[n];
	for(i=0;i<n;i++){a[i]=0;b[i]=0;}
	a[0]=1;
	if(n<1){cout<<"Invalid"<<endl;return 0;}
	printf("%*d \n",(t+2),1);
	for(i=1;i<n;i++)
	{
		b[0]=1;b[i]=1;t--;
		for(j=1;j<i;j++)
		{
			b[j]=a[j]+a[j-1];
		}
		for(j=0;j<t;j++)printf(" ");
		for(j=0;j<=i;j++)
		{
			printf("%2d",b[j]);
		}
		for(j=0;j<n;j++)
		{
			a[j]=b[j];
		}
		cout<<endl;
	}
	return 0;
}
