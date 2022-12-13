class Solution {
public:
  
        int f(int i, int j,int m, vector<vector<int>> &matrix, vector<vector<int>> &dp)
{
      if (i == 0 and j < m and j >= 0)
        return matrix[i][j];

    if (i < 0 or j < 0 or j >= m)
        return INT_MAX;

    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = matrix[i][j] + min(f(i - 1, j - 1, m, matrix, dp), min(f(i - 1, j, m, matrix, dp), f(i - 1, j + 1, m, matrix, dp)));
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
   int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ans = INT_MAX;
    for (int j = 0; j < m; j++)
    {
        int maxi = f(n - 1, j, m, matrix, dp);
        ans = min(ans, maxi);
    }
    return ans;
}
    
};