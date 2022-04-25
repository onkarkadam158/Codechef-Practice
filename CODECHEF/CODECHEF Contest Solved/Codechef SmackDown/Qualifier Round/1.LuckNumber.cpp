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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==7 || b==7 || c==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;
}
/*
Input Test Cases
3
0 0 0
7 8 9
2 7 7


Output
NO
YES
YES

*/
