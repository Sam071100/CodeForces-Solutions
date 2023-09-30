#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n+1,-1);
    int x;
    vec[1]=1;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        vec[i+2]=x;
    }
    bool flag=false;
    int node=n;
    vector<int> res;
    while(flag==false)
    {
        if(node==1)
        {
            flag=true;
        }
        res.push_back(node);
        node=vec[node];
    }
    for(int i=res.size()-1;i>=0;i--)
    {
        cout<<res[i]<<" ";
    }
}