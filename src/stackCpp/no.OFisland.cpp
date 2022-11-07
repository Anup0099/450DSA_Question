#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &matrix, int x, int y, int r, int c)
{
    if (x < 0 || y < 0 || x >= r || y >= c || matrix[x][y] != '1')
    {
        return;
    }
    matrix[x][y] = '2';
    dfs(matrix, x + 1, y, r, c);
    dfs(matrix, x - 1, y, r, c);
    dfs(matrix, x, y + 1, r, c);
    dfs(matrix, x, y - 1, r, c);
}
int numberOFISland(vector < vector, char >> &grid)
{
    if (grid.size() == 0)
    {
        return 0;
    }
    int rows = grid.size();
    if (rows == 0)
    {
        return 0;
    }
    int cols = grid[0].size();
    int numberOfIsland = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == '1')
            {
                numberOfIsland++;
                dfs(grid, i, j, rows, cols);
            }
        }
    }
    return numberOfIsland;
}
int main() {}