#include <bits/stdc++.h>
using namespace std;
#define fatafat ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int Pascal(int row, int col)
{
    if (col == 0 || row == col)
    {
        return 1;
    }
    else
    {
        return Pascal(row-1, col-1) + Pascal(row-1, col-1);
    }
    
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
       int t[n+1][n+1]; //t[row+1][col+1] where sow = col --> square matrix
       memset(t, 0, sizeof(t));
       for (int i = 0; i < n+1; i++)
       {
           for (int j = 0; j < n+1; j++)
           {
               if (i == 0)
               {
                   t[i][j] = 0;
               }
               
               if(j == 0)
               {
                   t[i][j] = 1;
               }

               if (i == j)
               {
                   t[i][j] = 1;
               }
           }
           
       }

       for (int i = 2; i < n+1; i++)
       {
           for (int j = 1; j < n+1; j++)
           {
               if (t[i][j] == 1)
               {
                   break;
               }
               t[i][j] = t[i-1][j-1] + t[i-1][j];
           }
       }
       for (int k = 0; k < n+1; k++)
       {
           cout <<t[n][k]<<" ";
       }
       cout <<endl;
    }
    return 0;
}
