#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	 int flag=0;
	for(int i=0;i<n;i++)
	    {
	        if(arr[i]==k)
	        {
	            flag=1;
	            break;
	        }
	    }
	 if(flag==1)
	    cout<<1<<endl;
	 else
	    cout<<(-1)<<endl;
	    
	return 0;
}
