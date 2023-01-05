#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> nearestdistance(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<int>> dis(n, vector<int>(m, 0));
    queue < pair<int, int>, int >> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                vis[i][j] = 1;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        dis[row][col] = steps;

        for (int i = 0; i < 4; i++)
        {
            int newrow = row + delrow[i];
            int newcol = col + delcol[i];
            if (newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && vis[newrow][newcol] == 0)
            {
                q.push({{newrow, newcol}, steps + 1});
                vis[newrow][newcol] = 1;
            }
        }
        return dis;
    }
}

int main() {}