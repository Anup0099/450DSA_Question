class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
         int n = grid.size();
    int m = grid[0].size();
    vector<int> ans(m, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t = to_string(grid[j][i]).size();
            ans[i] = max(ans[i], t);
        }
    }
    return ans;
    }
};