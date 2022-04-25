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
    int a,b,c,d;
    cin>>a>>b>>c>>d;    
    int res;
    if((a+b+c)<=d)
        res=1;
    else if(((a+b)<=d) || ((a+c)<=d) || ((b+c)<=d))
        res=2;
    else
        res=3;
    cout<<(res)<<"\n";
}

return 0;
}
