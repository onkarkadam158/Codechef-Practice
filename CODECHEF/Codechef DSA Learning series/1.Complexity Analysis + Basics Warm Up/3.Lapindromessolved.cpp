#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    vector<char> s1,s2;
	    for(int i=0;i<s.size()/2;i++)
	        s1.push_back(s[i]);
	   int n=s.size()/2;
	   if(s.size()%2!=0)
	        n=s.size()/2+1;
	    for( int i=n;i<s.size();i++)
	        s2.push_back(s[i]);

	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    int flag=0;
	    for(int i=0;i<s.size()/2;i++)
	    {
	        if(s1[i]!=s2[i])
	       {
	           flag=1;
	           break;
	       }
	    }
	    if(flag==1)
	        cout<<"NO"<<endl;
	   else
	        cout<<"YES"<<endl;
	}
	return 0;
}
