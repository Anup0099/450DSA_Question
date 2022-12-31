class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }
    int ans=0;
    for (int i = 0; i < grid[0].size(); i++)
    {
        int maximum = INT16_MIN;
        for (int j = 0; j < grid.size(); j++)
        {
            maximum = max(maximum, grid[j][i]);
        }
        ans += maximum;
    }
    return ans;
    }
};