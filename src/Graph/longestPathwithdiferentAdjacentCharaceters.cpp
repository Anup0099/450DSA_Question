#include <bits/stdc++.h>
using namespace std;
// given a tree rooted at node 0 cosiisting of n nodes the tree repesented by a parent
int ans = 1;
int dist[100005];
void dfs(int src, string &s, vector<vector<int>> &adj)
{
    dist[src] = 1;
    for (auto node : adj[src])
    {
        dfs(node, s, adj);
        if (s[src] != s[node])
        {
            ans = max(ans, dist[src] + dist[node]);
            dist[src] = max(dist[src], dist[node] + 1);
        }
    }
}
int longestPath(vector<int> &parent, string s)
{
    int n = parent.size();
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
        adj[parent[i]].push_back(i);
    }
    dfs(0, s, adj);
    return ans;
}
int main() {
    
}