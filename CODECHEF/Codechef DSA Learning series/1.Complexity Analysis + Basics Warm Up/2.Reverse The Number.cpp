#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    long long int n,num=0;
	    cin>>n;
	    while(n)
	    {
	        num=num*10+n%10;
	        n=n/10;
	    }
	    cout<<num<<endl;
	}
	return 0;
}
