#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back using namespace std;
void dfs(vector<vector<int>> &grid, int row, int col)
{
    int n = grid.size();
    int m = grid[0].size();
    if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == 0)
    {
        return;
    }
    grid[row][col] = 0;
    dfs(grid, row + 1, col);
    dfs(grid, row - 1, col);
    dfs(grid, row, col + 1);
    dfs(grid, row, col - 1);
}
int numEnclaves(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int row = 0; row < n; row++)
    {
        if (grid[row][0] == 1)
        {
            dfs(grid, row, 0);
        }
        if (grid[row][m - 1] == 1)
        {
            dfs(grid, row, m - 1);
        }
    }
    for (int col = 0; col < m; col++)
    {
        if (grid[0][col] == 1)
        {
            dfs(grid, 0, col);
        }
        if (grid[n - 1][col] == 1)
        {
            dfs(grid, n - 1, col);
        }
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (grid[row][col] == 1)
            {
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}