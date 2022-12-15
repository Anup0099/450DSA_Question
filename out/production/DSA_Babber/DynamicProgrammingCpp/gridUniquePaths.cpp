#include <bits/stdc++.h>
using namespace std;
int func(int i, int j, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int up = func(i - 1, j, dp);
    int right = func(i, j - 1, dp);
    return dp[i][j] = up + right;
}
///tabulation
int func2(int i, int j, vector<vector<int>> &dp)
{
    for (int i = 0; i <= i; i++)
    {
        for (int j = 0; j <= j; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
                continue;
            }
            int up = 0, right = 0;
            if (i - 1 >= 0)
                up = dp[i - 1][j];
            if (j - 1 >= 0)
                right = dp[i][j - 1];
            dp[i][j] = up + right;
        }
    }
    return dp[i][j];
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return func(m - 1, n - 1, dp);
}
int main() {}