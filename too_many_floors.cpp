//Solution to Too Many floors on codechef
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    int x,y;
	    cin>>x>>y;
	    x=x%10==0?x-1:x;
	    y=y%10==0?y-1:y;
	    int a=x/10;
	    int b=y/10;
	    int ans=b>a?b-a:a-b;
	    cout<<ans<<endl;
	}
	return 0;
}
