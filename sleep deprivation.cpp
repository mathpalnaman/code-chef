#include <iostream>
using namespace std;

int main() {
     int t,x;
     cin>>t;
     while(t--)
     {
         cin>>x;
         if(x<7)
         {cout<<"yes"<<endl;
         x=7-x;
          cout<<x<< " hours required"<<endl;}
          else
         cout<<"no"<<endl;
        
     }
     
	return 0;
}
