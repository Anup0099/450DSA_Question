#include <bits/stdc++.h>
using namespace std;
int func(int ind, int prev, vector<vector<int>> &pairs, int n, vector<vector<int>> &dp)
{
    if (ind == n)
        return 0;
    int take = -1e8;
    int ntake = -1e8;
    if (dp[ind][prev + 1] != -1)
        return dp[ind][prev + 1];
    if (prev == -1 || pairs[ind][0] > prev[prev][1])
    {
        take = 1 + func(ind + 1, ind, pairs, n, dp);
    }
    ntake = 0 + func(ind + 1, prev, pairs, n, dp);
    return dp[ind][prev + 1] = max(take, ntake);
}
int findLongestChain(vector<vector<int>> &pairs)
{
    int n = pairs.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    sort(pairs.begin(), pairs.end());
    int count = func(0, -1, pairs, n, dp);
    return count;
}
int main() {}