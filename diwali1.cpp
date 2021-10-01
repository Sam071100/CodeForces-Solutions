//Adarsh Priyadarshi
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
void solve(){
    ll p,a,b,c,x,y;
    cin>>p>>a>>b>>c>>x>>y;
    ll k=x*a+b;
    ll l=y*a+c;
    ll m= min(k,l);
    cout<<p/m<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
