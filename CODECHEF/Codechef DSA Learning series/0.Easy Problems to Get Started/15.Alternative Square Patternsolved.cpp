#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int  k=1;
	int arr[n][5];
	for(int i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	        for(int j=0;j<5;j++)
	            arr[i][j]=k++;
	    }
	    else
	    {
	        for(int j=4;j>=0;j--)
	            arr[i][j]=k++;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<5;j++)	    
	        cout<<arr[i][j]<<" ";
	    cout<<endl;
	}
	return 0;
}
