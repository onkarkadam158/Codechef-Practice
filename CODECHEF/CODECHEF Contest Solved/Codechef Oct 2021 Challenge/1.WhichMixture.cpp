#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{

 #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

ll t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;    
    if(a>0 && b>0)
        cout<<"Solution";
    else if(b==0)
        cout<<"Solid";
    else if(a==0)
        cout<<"Liquid";
    cout<<"\n";
}

return 0;
}
