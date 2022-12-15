class Solution {
public:
    int M = 1e9 + 7;
int f(int s, int e, int i, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        if (s == e)
            return 1;
        return 0;
    }
    if (dp[s + 1000][i] != -1)
        return dp[s+1000][i]%M;
    if (abs(e - s) > i)
        return 0;
    int left = f(s - 1, e, i - 1, dp) % M;
    int right = f(s + 1, e, i - 1, dp) % M;
    return dp[s + 1000][i] = (left + right) % M;
}
int numberOfWays(int startPos, int endPos, int k)
{
    vector<vector<int>> dp(3001, vector<int>(k + 1, -1));
    return f(startPos, endPos, k, dp);
}
};