#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

bool chefora(ll m)
{
    ll res=0,n=m,count=0;
    while(n)
    {
        count++;
        res=res*10+n%10;
        n=n/10;
    }
    return ((res==m)&&(count%2!=0));
}

ll power(ll a,ll b)
{
    //ll ans=1;
    //while(b--){ans=ans*a;ans=ans%mod;}   
    if(b==0)
        return 1;
    if(b%2==0)
        return ((power(a,b/2)%mod)*(power(a,b/2)%mod));
    else
         return ((a%mod)*(power(a,b-1)%mod));
}
int main()
 {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        ios::sync_with_stdio(false); cin.tie(0);
        
    int q;
    cin>>q;

    vector<int> chefarr;
    for(ll i=1;i<=10000000;i++)
    {
        if(chefora(i))
            chefarr.push_back(i);
    }
    //cout<<chefarr.size()<<"size\n";
    //for(int i=0;i<chefarr.size();i++)
        //cout<<chefarr[i]<<" ";

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        ll ans=1;
        ll al=chefarr[l-1],ai;

        for(int i=l+1;i<=r;i++)
        { 
            ai=chefarr[i-1];
            ans=((ans%mod)*(power(al,ai)%mod))%mod;
            //ans=ans%mod;
        }
        cout<<ans<<"\n";
    }
        
    return 0;
}

