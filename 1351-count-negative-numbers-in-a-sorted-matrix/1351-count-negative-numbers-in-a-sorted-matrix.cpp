class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
            int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    int r = n - 1, c = 0;

    while (r >= 0 && c < m)
    {
        if (grid[r][c] < 0)
        {
            r--;
            count += m - c;
        }
        else
        {
            c++;
        }
    }
    return count;
    }
};