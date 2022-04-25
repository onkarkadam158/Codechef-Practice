#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool check(ll n)
{
    while(n)
    {
        if(n%2==0)
            return false;
        n=n/2;
    }
    return true;
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
    ll x;
    cin>>x;
    if(x<=1)
    {
        cout<<(x+1)<<"\n";
        continue;
    }
    if(check(x))
    {
        cout<<(x+1)<<"\n";
        continue;
    }
    ll a=floor(log2(x));
    a=pow(2,a);

    cout<<a<<"\n";
}

return 0;
}
