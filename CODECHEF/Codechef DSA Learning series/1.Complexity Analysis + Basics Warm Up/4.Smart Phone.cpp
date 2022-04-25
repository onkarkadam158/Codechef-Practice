#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	vector<long long int> arr ;
	for(int i=0;i<n;i++)
	    {
	        long long int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(),arr.end());
	    long long int sum=n*arr[0];
	    for(int i=1;i<arr.size();i++)
	    {
	        if(sum<arr[i]*(n-i))
	        {
	            sum=arr[i]*(n-i);
	        }
	    }
	    cout<<sum<<endl;
	return 0;
}
