#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int act;
	    cin>>act;
	    string origin;
	    cin>>origin;
	    int laddu=0;
	    while(act--)
	    {
	        string cw;
	        int rank;
	        cin>>cw;
	        
	        if(cw=="CONTEST_WON")
	        {
	            cin>>rank;
	            int b=0;
	            if(rank>20)
	                b=0;
	            else
	                b=20-rank;
	            laddu+=300+b;
	        }
	        
	        if(cw=="TOP_CONTRIBUTOR")
	        {
	            laddu+=300;
	        }
	       
	        
	        if(cw=="BUG_FOUND")
	        {
	            cin>>rank;
	            laddu+=rank;
	        }
	       
	        if(cw=="CONTEST_HOSTED")
	            laddu+=50;
	        
	    }
	    if(origin=="INDIAN")
	        cout<<laddu/200<<endl;
	    else
	        cout<<laddu/400<<endl;
	}
	return 0;
}
