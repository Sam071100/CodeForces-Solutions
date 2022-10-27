// Problem Link: https://codeforces.com/contest/705/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<"I hate ";
    for(int i=1;i<n;i++){
        cout<<"that ";
        if(i%2!=0){
            cout<<"I love ";
        }
        else{
            cout<<"I hate ";
        }
    }
    cout<<"it";
	// your code goes here
	return 0;
}
