#include<bits/stdc++.h>
#define ll long long
#define mn 10000007
using namespace std;
void koli()
{
  
  int t;
  cin>>t;
  vector<int> v;int sum=0;
  for(int i=0;i<t;i++)
  {
    int x;cin>>x;
    v.push_back(x);
    sum+=x;
  }
  sort(v.begin(), v.end(),greater<int>());
  int sum2=v[0],count=1;
for(int i=1;i<t;i++)
{ //sum2+=v[0];
  if(sum2<=(sum-sum2))
  {count++;sum2+=v[i];}
  else break;
  
}
cout<<count<<endl;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
  
    koli();
return 0;
 
}
