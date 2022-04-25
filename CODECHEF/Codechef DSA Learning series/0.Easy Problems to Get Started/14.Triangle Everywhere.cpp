#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a,b,c;
	cin>>a>>b>>c;
	if(a+b<=c || a+c<=b || b+c<=a)
	    cout<<(-1)<<endl;
	else 
	{
	    if(a==b && b==c)
	        cout<<1<<endl;
	    else if(a==b || b==c || a==c)
	        cout<<2<<endl;
	    else 
	        cout<<3<<endl;
	}
	return 0;
}
