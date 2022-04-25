#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

void solve()
{
    int g,c;
    cin>>g>>c;
    cout<<((c*c)/(2*g));

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

