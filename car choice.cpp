#include <iostream>
using namespace std;

int main() {
	float t,x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
	    cin>>x1>>x2>>y1>>y2;
	    x1=y1/x1;
	    x2=y2/x2;
	    if(x1>x2)
	    cout<<"1"<<endl;
	 else if(x1==x2)
	    cout<<"0"<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
