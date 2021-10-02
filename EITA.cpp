#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
  long long int d,x,y,z;
  cin>>d>>x>>y>>z;
  long long int ans1=7*x;
  long long int ans2=(d*y)+(7-d)*z;
  long long int ans3=max(ans1,ans2);
  cout<<ans3<<endl;
  return 0;
}
}
