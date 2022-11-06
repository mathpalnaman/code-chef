#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,l,b,p,a;
    cin>>t;
    while(t--)
    {
     cin>>l>>b;
     a=l*b;
     p=2*(l+b);
     if(a>p)
     {cout<<"area"<<endl;
     cout<<a<<endl;
     }
     else if(p>a)
     {cout<<"peri"<<endl;
     cout<<p<<endl;
    }
     else
     {cout<<"eq"<<endl;
     cout<<a<<endl;
     }
}
	return 0;
}
