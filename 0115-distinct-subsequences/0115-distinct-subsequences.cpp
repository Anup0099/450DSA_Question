class Solution {
public:
   int helper(string &s, string &t, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
    {
        return m == 0;
    }

    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (s[n - 1] == t[m - 1])
    {
        return dp[n][m] = helper(s, t, n - 1, m - 1, dp) + helper(s, t, n - 1, m, dp);
    }

    return dp[n][m] = helper(s, t, n - 1, m, dp);
}

int numDistinct(string s, string t)
{
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return helper(s, t, n, m, dp);
}
};