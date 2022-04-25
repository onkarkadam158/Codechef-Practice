#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
#ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    char s[n];
    for(ll i=0;i<n;i++)
        cin>>s[i];
        
    ll count=0;
    for(ll i=0;i<n;i++)
        for(ll j=i+1;j<=min(i+9,n-1);j++)
            if((j-i)==abs(int(s[j])-int(s[i])))
                count++;

    cout<<count<<"\n";
}

return 0;
}
/*
Input Test Cases
3
3
123
5
13492
8
94241234

//Output
3
2
9
*/
