#include <bits/stdc++.h>
using namespace std;
#define fatafat ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int Count_of_SubSet(vector<int> &arr, int sum, int n)
{
    int t[n+1][sum+1];

    // initialization
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i == 0)
            {
                t[i][j] = 0;
            }
            if (j == 0)
            {
                t[i][j] = 1;
            }
        }
    }

    // Choice Diagram
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if (arr[i-1] <= j)
            {
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }
            else
            {
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main()
{
    fatafat
    int t = 1;
    // cin >>t;
    while(t--)
    {
       int n;
       cin >>n;
       vector<int> arr(n);
       for (int i = 0; i < n; i++)
       {
           cin >>arr[i];
       }
       int k; // Sum of Subset
       cin >>k;
       cout <<Count_of_SubSet(arr, k, n);
    }
    return 0;
}
