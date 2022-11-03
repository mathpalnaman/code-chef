#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x>y)
	    {x=x-y;
	    cout<<x<<endl;}
	    else cout<<"0"<<endl;
	}
	return 0;
}
