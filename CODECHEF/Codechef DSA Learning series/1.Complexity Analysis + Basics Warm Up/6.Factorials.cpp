#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int sum=0,x=5;
	    while(x<=n)
	    {
	        sum+=n/x;
	        x=x*5;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
