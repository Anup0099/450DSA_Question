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
  //using set
    int m = grid.size();    
    int n = grid[0].size();
    int ans = 0;
    while (n > 0)
    {
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            s.insert(grid[i][n - 1]);
        }
        ans += *s.rbegin();
        n--;
    }
    return ans;
}
int main() {}