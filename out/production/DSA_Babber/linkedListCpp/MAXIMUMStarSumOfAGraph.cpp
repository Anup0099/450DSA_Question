#include <bits/stdc++.h>
using namespace std;
//  There is an undirected graph consisting of n nodes numbered from 0 to n - 1. You are given a 0-indexed integer array vals of length n where vals[i] denotes the value of the ith node.

// You are also given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting nodes ai and bi.

// A star graph is a subgraph of the given graph having a center node containing 0 or more neighbors. In other words, it is a subset of edges of the given graph such that there exists a common node for all edges.

// The image below shows star graphs with 3 and 4 neighbors respectively, centered at the blue node.

int dfs(vector<vector<int>> &adj, vector<int> &vals, vector<int> &dp, int u, int p)
{
    dp[u] = vals[u];
    for (auto &v : adj[u])
    {
        if (v == p)
            continue;
        dp[u] += dfs(adj, vals, dp, v, u);
    }
    return dp[u];
}
int dfs2(vector<vector<int>> &adj, vector<int> &vals, vector<int> &dp, int u, int p)
{
    int ans = dp[u];
    for (auto &v : adj[u])
    {
        if (v == p)
            continue;
        dp[u] -= dp[v];
        dp[v] += dp[u];
        ans = max(ans, dfs2(adj, vals, dp, v, u));
        dp[v] -= dp[u];
        dp[u] += dp[v];
    }
    return ans;
}

int maxStarSum(vector<int> &vals, vector<vector<int>> &edges, int k)
{
    int n = vals.size();
    vector<vector<int>> adj(n);
    for (auto &e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    vector<int> dp(n, 0);
    vector<int> ans(n, 0);
    function<void(int, int)> dfs = [&](int u, int p) {
        dp[u] = vals[u];
        for (auto &v : adj[u])
        {
            if (v == p)
                continue;
            dfs(v, u);
            dp[u] += dp[v];
        }
        ans[u] = dp[u];
    };
    dfs(0, -1);
    function<void(int, int)> dfs2 = [&](int u, int p) {
        for (auto &v : adj[u])
        {
            if (v == p)
                continue;
            dp[u] -= dp[v];
            dp[v] += dp[u];
            ans[v] = max(ans[v], dp[v]);
            dfs2(v, u);
            dp[v] -= dp[u];
            dp[u] += dp[v];
        }
    };
    dfs2(0, -1);
    sort(ans.begin(), ans.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += ans[i];
    return sum;

}

int main() {}