// Move 0 to the end
#include <bits/stdc++.h>
using namespace std;
#define fatafat ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int main()
{
    fatafat
    int t = 1;
    // cin >>t;
    while(t--)
    {
       int n;
       cin >>n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
           cin >>arr[i];
       }
       int cnt = 0;
       for (int i = 0; i < n; i++)
       {
           if(arr[i]!=0)
           {
               arr[cnt++] = arr[i];
           }
       }
       for (; cnt < n; cnt++)
       {
           arr[cnt] = 0;
       }
       
       for (auto x : arr)
       {
           cout <<x<<" ";
       }
       
    }
    return 0;
}
