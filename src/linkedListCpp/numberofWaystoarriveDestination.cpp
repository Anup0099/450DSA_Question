#include <bits/stdc++.h>
using namespace std;

int countPaths(int n, vector<vector<int>> &roads)
{
    int i, j, k, ans, m = roads.size();
    vector<vector<int>> adj(n + 1);
    vector<int> v(n + 1, 0);
    vector<int> dp(n + 1, 0);
    for (i = 0; i < m; i++)
    {
        adj[roads[i][0]].push_back(roads[i][1]);
    }
    dp[0] = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < adj[i].size(); j++)
        {
            dp[adj[i][j]] += dp[i];
            dp[adj[i][j]] %= 1000000007;
        }
    }
    return dp[n - 1];

}

int main() {}