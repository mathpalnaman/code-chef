#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,n=0,m=0,p=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    n=a+b;
	    m=a+c;
	    p=c+b;
	    
	    if(n%2!=0 || m%2!=0 || p%2!=0)
	    {cout<<"YES"<<endl;}
	    else
	    {cout<<"NO"<<endl;}
	}
	return 0;
}
