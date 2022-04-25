#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll arr[1000001];
ll fwd[1000001];
ll back[1000001];

int main()

{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        for(ll i=1;i<n+1;i++)
            cin>>arr[i];

        ll sum=0;
        for(ll i=1;i<n+1;i++)
            sum+=arr[i];

        sort(arr,arr+n+1);
        
        fwd[1]=arr[1];
        back[n]=arr[n];

        for(ll i=n-1;i>0;i--)
            back[i]=__gcd(back[i+1],arr[i]);

        for(ll i=2;i<n+1;i++)
            fwd[i]=__gcd(fwd[i-1],arr[i]);
        
        ll ans=LLONG_MAX;

        for(ll i=1;i<n+1;i++)
        {
            ll temp=( sum - arr[i] + __gcd(fwd[i-1],back[i+1])) / (__gcd(fwd[i-1],back[i+1]));

            if(temp<ans)
                ans=temp;
        }
        cout<<ans<<"\n";
    }

}