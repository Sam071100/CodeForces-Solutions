#include <bits/stdc++.h>
using namespace std;

bool inRange(int val, int limit)
{
    return 0 <= val && val < limit;
}

int cherryPickup(vector<vector<int>> &grid)
{
    int dir[] = {-1, 0, 1};
    int row = grid.size();
    int col = grid[0].size();
    int dp[row][col][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col; k++)
            {
                dp[i][j][k] = -1;
            }
        }
    }

    int col1 = 0, col2 = col - 1; // Positon of the robots
    dp[0][col1][col2] = grid[0][col1] + grid[0][col2];
    int maxi = dp[0][col1][col2];

    for (int i = 1; i < row; i++)
    {
        for (int c1 = 0; c1 < col; c1++) // All the possible positions of Column * Column matrix is c1 and c2
        {
            for (int c2 = 0; c2 < col; c2++)
            {
                int prev = dp[i - 1][c1][c2];

                if (prev >= 0)
                {
                    for (int d1 : dir)
                    {
                        col1 = c1 + d1;
                        for (int d2 : dir)
                        {
                            col2 = c2 + d2;

                            if (inRange(col1, col) && inRange(col2, col))
                            {
                                dp[i][col1][col2] = max(dp[i][col1][col2], prev + ((col1 == col2) ? grid[i][col1] : (grid[i][col1] + grid[i][col2])));
                                maxi = max(maxi, dp[i][col1][col2]);
                            }
                        }
                    }
                }
            }
        }
    }
    return maxi;
}

int main()
{
    vector<vector<int>>grid = {{3,1,1},{2,5,1},{1,5,5},{2,1,1}};
    cout << cherryPickup(grid);
    return 0;
}
