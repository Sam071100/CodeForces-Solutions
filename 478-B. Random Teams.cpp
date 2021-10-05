#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        ll n,m;
        cin >> n >> m;
        ll max,min,aa;
        aa=n-(m-1);
        max=(((aa)*(aa-1))/2);
        if(n%m==0){
            min=m*(((n/m)*((n/m)-1))/2);
        }
        else{
            min=(n%m)*(((n/m+1)*((n/m+1)-1))/2);
            min+=(m-(n%m))*(((n/m)*((n/m)-1))/2);
        }
        cout << min << " " << max;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    solve(t);
    return 0;
}
