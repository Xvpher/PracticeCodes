#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,w,m,i,j,c;char t[20];string str2 = "";int l,k,s;
	string pt="";n=6;w=31;m=110;
	/*cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter weight and modulo"<<endl;
	cin>>w>>m;*/
	int a[n],b[n];
	cout<<"Enter the keys"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=(a[i]*w)%m;
	}
	cout<<"Enter Plaintext"<<endl;
	cin>>pt;
	for(i=0;i<pt.size();i++)
	{
		string str3 = "";
		c=(int)pt[i]-65;
		itoa (c,t,2);
		string u=t;
		for(j=0;j<(5-u.size());j++)str3=str3+"0";
		str2 = str2+str3+u;
	}
	//cout<<str2;
	l=str2.size();
	k=l/n;
	for(i=0;i<k;i++)
	{
		s=0;
		for(j=0;j<n;j++)
		{
			s=s+b[j]*(int)str2[j+i*n];
		}
		cout<<s<<"  ";
	}
}
