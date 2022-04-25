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
    ll index=5;
    ll india=0,england=0;
    while(index--)
    {
        int Ri;
        cin>>Ri;
        if(Ri==1)
            india++;
        if(Ri==2)
            england++;
    }
    if(india>england)
        cout<<"INDIA"<<endl;
    else if(england>india)
        cout<<"ENGLAND"<<endl;
    else
        cout<<"DRAW"<<endl;
}

return 0;
}
/*
Input Test Cases
3
0 1 2 1 0
0 1 2 1 2
2 2 2 2 1


Output
INDIA
DRAW
ENGLAND


*/
