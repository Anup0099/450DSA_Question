class Solution {
public:
  
        int f(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp)
{
    if (i == matrix.size())
        return 0;
    if (j < 0 || j >= matrix[0].size())
        return INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = INT_MAX;
    ans = min(ans, f(i + 1, j - 1, matrix, dp));
    ans = min(ans, f(i + 1, j, matrix, dp));
    ans = min(ans, f(i + 1, j + 1, matrix, dp));
    return dp[i][j] = ans + matrix[i][j];
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans = INT_MAX;
    for (int j = 0; j < m; j++)
    {
        ans = min(ans, f(0, j, matrix, dp));
    }
    return ans;
}
    
};