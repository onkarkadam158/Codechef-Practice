#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

void solve()
{
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    int way1=x*7;
    int way2=d*y+(7-d)*z;
    if(way1>way2)
        cout<<way1;
    else
        cout<<way2;
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

