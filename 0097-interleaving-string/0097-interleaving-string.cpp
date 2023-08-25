class Solution {
public:
    bool solve(string a, string b, string c, int i, int j, int p,vector<vector<int>>&dp)
{
    // base case
    if (i == a.size() && j == b.size() && p == c.size())
        return true;
    if (p == c.size())
        return false;
    if(dp[i][j]!=-1)return dp[i][j];
    bool res = false;
    if (i < a.size() and a[i] == c[p])
    {
        res = solve(a, b, c, i + 1, j, p + 1,dp);
    }
    if (res)
        return true;
    if (j < b.size() and b[j] == c[p])
    {
        res = solve(a, b, c, i, j + 1, p + 1,dp);
    }
    return dp[i][j]=res;
}
bool isInterleave(string a, string b, string c)
{
    int n = a.size();
    int m = b.size();
    int p = c.size();
    if (n + m != p)
        return false;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return solve(a, b, c, 0, 0, 0,dp);
}
};