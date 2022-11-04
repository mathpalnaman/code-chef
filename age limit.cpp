#include <iostream>
using namespace std;

int main() {
     int t,x,a,y;
     cin>>t;
     while(t--)
     {
         cin>>x>>y>>a;
        if(a>=x && a<y)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
        
     }
	return 0;
}
