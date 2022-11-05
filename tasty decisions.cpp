#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    x=2*x;
	    y=5*y;
	    if(x>y)
	    cout<<"CHOCOLATE"<<endl;
	    else if(x==y)
	    cout<<"EITHER"<<endl;
	      else 
	    cout<<"candy"<<endl;
	    
	}
	return 0;
}
