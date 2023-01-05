#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void dfs(int u, vector<vector<int>> &adj, vector<int> &v)
{

    if (u == adj.size() - 1)
    {
        ans.pb(v);
    }

    for (int i = 0; i < adj[u].size(); i++)
    {
        v.pb(adj[u][i]);
        dfs(adj[u][i], adj, v);
        v.pop_back();
    }
}
vector<vector<int>> allpathsTOsource(vector<vector<int>> &graph)
{
    int n = graph.size();
    ans.clear();
    vector<int>v;
    v.push_back(0);
    dfs(0, graph, v);
    return ans;
}
int main() {}