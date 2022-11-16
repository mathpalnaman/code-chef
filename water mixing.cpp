#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int s=abs(a-b);
        if(a>b)
        {
            if(s>y) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
        else if(a<b)
        {
            if(s>x) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
        else cout<<"yes"<<endl;
        
    }
}
