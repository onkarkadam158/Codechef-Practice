#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll max(ll a, ll b)
{
    if(a>b)
        return a;
    else
        return b;
}
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
    ll n;
    cin>>n;
    
    ll x= floor(log2(n));
    
    ll y=pow(2,(x-1));

    ll res=max(y,(n-pow(2,x)+1));
    cout<<res<<"\n";
}

return 0;
}
