class Solution {
public:
    int solve(string &word1, string &word2, int i, int j,vector<vector<int>>&dp)
{
    if (i == word1.length())
    {

        return word2.length() - j;
    }
    if (j == word2.length())
    {
        return word1.length() - i;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if (word1[i] == word2[j])
    {
        return solve(word1, word2, i + 1, j + 1,dp);
    }
    else
    {
        int op1 = 1 + solve(word1, word2, i + 1, j,dp);
        int op2 = 1 + solve(word1, word2, i, j + 1,dp);
        return dp[i][j]=min(op1, op2);
    }
    return dp[i][j];
}
int minDistance(string word1, string word2)
{
    int n = word1.length(), m = word2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return solve(word1, word2, 0, 0, dp);
}
};