//Solution to Pseudo Sorted Array on codechef
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    long long int ar[n];
	    for(int x=0;x<n;x++)
	    {
	        cin>>ar[x];
	    }
	    for(int x=0;x<n-1;x++)
	    {
	        if(ar[x]>ar[x+1])
	        {
	            int t=ar[x];
	            ar[x]=ar[x+1];
	            ar[x+1]=t;
	            break;
	        }
	    }
	    int f=0;
	    for(int x=0;x<n-1;x++)
	    {
	        if(ar[x]>ar[x+1])
	        {
	            cout<<"No"<<endl;
	            f=1;
	            break;
	        }
	    }
	    if(f==0)
	    cout<<"Yes"<<endl;
	    
	}
	return 0;
}
