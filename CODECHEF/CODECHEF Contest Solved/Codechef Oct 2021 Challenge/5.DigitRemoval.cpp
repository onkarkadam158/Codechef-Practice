#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll a, ll b)
{
if(b==0)
    return 1;
if(b==1)
    return a;
if((b%2)==0)
    return power(a,b/2)*power(a,b/2);
else
    return a*power(a,b-1);
}
ll toadd(ll m,ll d)
{

    ll n=m,j=0,flag=0,rem=0;
    ll temp,res=m;
    while(n)
    {
        j++;
        rem=n%10;
        n=n/10;
        if(rem==d)
        {
            flag=1;
            n=n*power(10,j);
            n=n+(rem+1)*power(10,j-1);
            j=0;
            res=n-m;
        }
    }

    if(flag==0)
        return 0;
    //cout<<i<<"=i"<<endl;
    //temp=power(10,i);
    //cout<<temp<<"temp"<<endl;
    //cout<<(m%temp)<<"m%temp"<<endl;
    //res=temp-(m%temp);
    //cout<<res<<"res"<<endl;

    if(d==0)
    {
        m+=res;
        ll temp1=0;
        while(m)
        {
            if(m%10==0)
            {
                temp1=temp1*10+1;
            }
            m=m/10;
        }
        //cout<<temp1<<"temp1"<<endl;
        return (res+temp1);
    }
        //cout<<res<<"res"<<endl;

    return res;
}

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
    ll n,d;
    cin>>n>>d;
    ll res;
    // logic
    res=toadd(n,d);
    cout<<res<<"\n";
}

return 0;
}
