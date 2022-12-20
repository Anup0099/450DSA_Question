#include <bits/stdc++.h>
using namespace std;
int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<pair<int, int>, int>> q;
    int vis[n][n];
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }
    int tm = 0;
    int drow[] = {1, -1, 0, 0};
    int dcol[] = {0, 0, 1, -1};
    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int row = r + drow[i];
            int col = c + dcol[i];
            if (row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == 1 && vis[row][col] == 0)
            {
                q.push({{row, col}, t + 1});
                vis[row][col] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && vis[i][j] == 0)
            {
                return -1;
            }
        }
    }
    return tm;
}
int main() {}