#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int max=0,min=0,a,b,c,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    if(a<b && b<c)
	    {n=c-a;}
	    cout<<n<<endl;
	}
	return 0;
}
