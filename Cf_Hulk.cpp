#include<bits/stdc++.h>
using namespace std;
int main()
{string s1="I hate it ",s2="I love it ",s3="I hate that ",s4="I love that ";
int n;
cin>>n;
if(n>1)
{
if(n%2!=0)
{while(n>1)
{if(n%2==0)cout<<s4;
else cout<<s3;n--;}cout<<s1;
 
    
}else if(n%2==0)
{while(n>1)
{if(n%2==0)cout<<s3;
else cout<<s4;n--;}cout<<s2;
}
}
else if(n==1)cout<<s1;
 
}