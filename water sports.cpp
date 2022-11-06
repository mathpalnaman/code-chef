#include <iostream>
using namespace std;

int main() {
	int t,z,y,a,b,c;
	cin>>t;
	
	while(t--)
	{
	    cin>>z>>y>>a>>b>>c;
	    z=z-y;
	    if(z>(a+b+c))
	    cout<<"YES"<<endl;
	    else if(z==(a+b+c))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
