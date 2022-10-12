// Problem Link: https://codeforces.com/contest/116/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0,c=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        c=c-a+b;
        m=max(m,c);
    }
    cout<<m<<endl;
}
