// Problem Link: https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90){
            a++;
        }
        else if(s[i]>=97 && s[i]<=122){
            b++;
        }
    }
    if(a<=b){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s;
	// your code goes here
	return 0;
}
