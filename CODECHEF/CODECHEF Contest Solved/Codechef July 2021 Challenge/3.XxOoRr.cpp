#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

void solve()
{
    //input
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=0;
    
    //logic

    for(ll p=0;p<=32;p++)
    {
        ll count=0,powp;
        powp=pow(2,p);
        for(int z=0;z<n;z++)
        {
            if((arr[z]^powp)<arr[z])
            {
                count++;
                (arr[z]=(powp^arr[z]));
            }
            //if(count==k){p--;break;}
        }
        
        //ans+=min(count,k);
        ans+=(count/k);
        if(count%k!=0)
            ans++;
    }

    cout<<ans;
}
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        ios::sync_with_stdio(false); cin.tie(0);
        
        int n;
        cin>>n;
        while(n--)
        {
            solve();
            cout<<"\n";
        }

        
    return 0;
}

