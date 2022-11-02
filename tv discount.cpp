#include <iostream>
using namespace std;

int main() {
   int t,a,b,c,d,x,y;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>c>>d;
       x=a-c;
       y=b-d;
       if(x>y)
       cout<<"SECOND"<<endl;
       else if(x==y)
       cout<<"ANY"<<endl;
       else  cout<<"FIRST"<<endl;
   }
	return 0;
}
