#include<iostream>
#include<math.h>
using namespace std;
int fact(int a)
{
	int f=1,i;
	for(i=a;i>0;i--)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int a;
	cin>>a;
	cout<<(double)fact(a)<<endl;
}
