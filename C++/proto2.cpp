#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	//int n,w,m,a[n],b[n];
	string str = "0";int l,i;
	string str2 = "";
	string str3 = "";
	char t[20];
	//cout<<"Enter n"<<endl;
	//cin>>n;
	itoa (10,t,2);
	cout<<t<<endl;
	string u=t;
	l=u.size();
	for(i=0;i<(5-l);i++)str3=str3+"0";
	str2 = str3+u;
	cout<<str2<<endl;
}
