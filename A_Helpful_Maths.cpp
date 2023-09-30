#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> vec;
    for(auto i:s)
    {
        if(i!='+')
        {
            vec.push_back(i-'0');
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        if(i==vec.size()-1)
        {
            cout<<vec[i];
        }
        else
        {
            cout<<vec[i]<<"+";
        }
    }
    return 0;
}