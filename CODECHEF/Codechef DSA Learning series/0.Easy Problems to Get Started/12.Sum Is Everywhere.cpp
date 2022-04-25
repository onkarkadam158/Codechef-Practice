#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n;
	cin>>n;
	n=2*n;
	long long int sumo=0,sume=0;
	for(long int i=1;i<=n;i++)
	{
	    if(i%2==0)
	        sume+=i;
	}
    for(long int i=1;i<=n;i++)
	{
	    if(i%2!=0)
	        sumo+=i;
	}
	cout<<sumo<<" "<<sume;
	return 0;
}
