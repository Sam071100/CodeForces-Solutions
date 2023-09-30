// Most asked question of Coding round based on Flood Fill algorithm
// Here grid is a sqaure matrix
#include <bits/stdc++.h>
using namespace std;
#define fatafat ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

template<class T>
int dist(T a, T b)
{
    return abs(a.first - b.first) + abs(a.second - b.second) - 1;
}

void flood_fill(set<pair<int, int>>&A, vector<vector<int>>&grid, int x, int y)
{
    int n = grid.size(); 
    if(x < 0 || x >= n || y < 0 || y >= n)
    {
        return;
    }
    else if (grid[x][y] != 1)
    {
        return;
    }
    A.insert({x, y});
    grid[x][y] = 2; // Already visited
    flood_fill(A, grid, x-1, y); // TOP
    flood_fill(A, grid, x, y+1); // Right
    flood_fill(A, grid, x+1, y); // Bottom
    flood_fill(A, grid, x, y-1); // Right
}

int shortestBridge(vector<vector<int>>grid)
{
    int n = grid.size();
    set<pair<int, int>>A; // To hold all the coordinates of the island A
    set<pair<int, int>>B;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 0)
            {
                continue;
            }
            if (A.empty())
            {
                flood_fill(A, grid, i, j);
            }
            else if (B.empty() && !A.count({i,j})) // We are checking the B set is empty and the coordinates of island B are not contained in Set A.
            {
                flood_fill(B, grid, i, j);
            }
        }
    }

    int ans = 2 * n;
    for(auto i : A)
    {
        for(auto j : B)
        {
            ans = min(ans, dist(i, j));
        }
    }
    return ans;
}

int main()
{
    fatafat
    int t = 1;
    // cin >>t;
    while(t--)
    {
       
    }
    return 0;
}
