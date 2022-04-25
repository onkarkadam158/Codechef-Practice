#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b)
	{
	    if(b>c)
	        cout<<b<<endl;
	   if(c>a)
	        cout<<a<<endl;
	    else if(c>b && c<a)
	        cout<<c<<endl;
	}
	else
	{
	    if(a>c)
	        cout<<a<<endl;
	   if(c>b)
	        cout<<b<<endl;
	    else if(c>a && c<b)
	        cout<<c<<endl;
	}
	return 0;
}
