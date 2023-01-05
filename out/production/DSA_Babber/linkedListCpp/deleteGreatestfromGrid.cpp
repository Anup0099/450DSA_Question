#include <bits/stdc++.h>
using namespace std;
// You are given an m x n matrix grid consisting of positive integers.

// Perform the following operation until grid becomes empty:

// Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
// Add the maximum of deleted elements to the answer.
// Note that the number of columns decreases by one after each operation.

// Return the answer after performing the operations described above.
int deleteGreatestValue(vector<vector<int>> &grid)
{
    // sort using row by row
    for (int i = 0; i < grid.size(); i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }
    int ans = 0;
    for (int i = 0; i < grid[0].size(); i++)
    {
        int maxi = INT_MIN;
        for (int j = 0; j < grid.size(); j++)
        {
            maxi= max(maxi, grid[j][i]);
        }
        ans += maxi;
    }
    return ans;
}
int main()
{
    vector<vector<int>> grid = {{1,2,4},{3,3,1}};
    cout << deleteGreatestValue(grid);
    return 0;
}