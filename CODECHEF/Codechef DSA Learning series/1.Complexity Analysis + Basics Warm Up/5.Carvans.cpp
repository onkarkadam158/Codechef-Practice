#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   int mincount=0;
	   for(int i=0;i<n-1;i++)
	   {
	       if(arr[i]==-1)
	            continue;
	       for(int j=i+1;j<n;j++)
	       {
	           if(arr[j]>arr[i])
                    arr[j]=-1;    
	       }
	   }
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]!=-1)
	            mincount++;
	   }
	        
	   cout<<mincount<<endl;
	}
	return 0;
}
