class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
         int n = matrix.size();
    int m = matrix[0].size();
    int dp[n][m];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = matrix[i][j] - '0';
            }
            else if (matrix[i][j] == '1')
            {
                int left = dp[i][j - 1];
                int top = dp[i - 1][j];
                int diag = dp[i - 1][j - 1];
                dp[i][j] = min(left, min(top, diag)) + 1;
                
            }
            else
            {
                dp[i][j] = 0;
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans * ans;
    }
};