#include <bits/stdc++.h>
using namespace std;
// int findPeakElement(vector<int> &nums)
// {
//     int left = 0;
//     int right = nums.size() - 1;
//     while (left < right)
//     {
//         int mid = (left + right) / 2;
//         if (nums[mid] < nums[mid + 1])
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid;
//         }
//     }
//     return left;
// }
// number of islands
int dfs(vector<vector<char>> &grid, int i, int j)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0')
    {
        return 0;
    }
    grid[i][j] = '0';
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
    return 1;
}
int numIslands(vector<vector<char>> &grid)
{
    if (grid.size() == 0)
        return 0;
    int numIslands = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                numIslands += dfs(grid,  i,  j);
            }
        }
    }
    return numIslands;
}

int main()
{
}