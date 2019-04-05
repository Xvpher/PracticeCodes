#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,x,y,s;
	cout<<"Enter the number of rows and columns"<<endl;
	cin>>r>>c;
	cout<<"Enter the position"<<endl;
	cin>>x>>y;
	if(r < c)s=r/2;
	else s=c/2;
	int lr,lc,ur,uc,t=0;
	lr=lc=1;ur=r;uc=c;
	for(i=s;i>0;i--)
	{
		if(x!=lr && x!=ur && y!=lc && y!=uc)
		{
			t = t + 2*(ur-lr+1+uc-lc+1) - 4;
			lr++;lc++;ur--;uc--;
		}
		else break;
	}
	if(x==lr)t=t+(y-lc+1);
	else if(y==uc)t=t+(uc-lc+1)+(x-lr);
	else if(x==ur)t=t+(uc-lc+1)+(ur-lr)+(uc-y);
	else t=t+(uc-lc+1)+(ur-lr)+(uc-lc)+(ur-x);
	cout<<t<<endl;
	return 0;
}
