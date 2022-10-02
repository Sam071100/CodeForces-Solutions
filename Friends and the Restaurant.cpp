#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
ll max(ll a,ll b){return ((a>=b)?a:b);}
ll min(ll a,ll b){return ((a<=b)?a:b);}
 
 
 
 
ll solve()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }
   for(int i=0;i<n;i++)
   {
      int a;
      cin>>a;
      v[i]=a-v[i];
   }
   sort(v.begin(),v.end());
   vector<int>vis(n,0);
   ll pos=1e15,neg=-1,z=0,ans=0;
   for(int i=0;i<n;i++)
   {
      if(v[i]<0)
      {
         neg=max(neg,i);
      }
      else if(v[i]>0)
      {
         pos=min(pos,i);
      }
      else
      {
         z++;
      }
   }
   // for(auto a:v)cout<<a<<" ";
   // cout<<endl;
   while(pos<n and neg>=0)
   {
      if(v[neg]+v[pos]>=0)
      {
         vis[pos]=1;
         // cout<<pos<<"=="<<neg<<endl;
         ans++;
         neg--;
      }
      pos++;
   }
   z=0;
   for(int i=0;i<n;i++)
   {
      if(v[i]>=0 and vis[i]==0)z++;
   }
   z/=2;
   ans+=z;
   cout<<ans<<endl;
   
   return 0;
}
 
 
 
 
 
signed main()
{
   ll t,tt;
   cin>>t;
   tt=t;
   while(t--)
   {
      solve();
   }
   
   
   return 0;
}
