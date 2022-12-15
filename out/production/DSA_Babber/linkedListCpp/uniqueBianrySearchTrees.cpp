#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<int> &dp)
{
    if (n == 1 or n == 0)
        return 1;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dp[n] != -1)
            return dp[n];
        ans += solve(i - 1, dp) * solve(n - i, dp);
    }
    return dp[n] = ans;
}
int numtrees(int n)
{
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}
int main() {}