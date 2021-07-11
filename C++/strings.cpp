#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,a;
        cin>>n;
        string str = "";
        while(n--)
        {
            cin>>a;
            if(abs(a)%2==0) str+='e';
            else str+='o';
            str+=to_string(a)+',';
        }
        cout<<str<<endl;
    }
    return 0;
}
