#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    int g;
	    cin>>g;
	    while(g--)
	    {
	        int i,n,q;
	        cin>>i>>n>>q;
	        /*vector<int> arr(n,i);
	        int count=0;
	        for(int j=0;j<n;j++)
	        {
	            if((n-j)%2!=0)
	            {
	                if(i==1)
	                    arr[j]=2;
	                else
	                    arr[j]=1;
	            }
	        }
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]==q)
	                count++;
	        }
	        cout<<count<<endl;*/
	        if(i==q)
	            cout<<n/2<<endl;
	        else
	        {
	            if(n%2!=0)
	                cout<<(n/2+1)<<endl;
	            else
	                cout<<(n/2)<<endl;
	        }
	    }
	}
	return 0;
}
