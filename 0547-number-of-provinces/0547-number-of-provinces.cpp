class Solution {
public:
    void dfs(int u, unordered_map<int, vector<int>> &adj, vector<bool> &visited)
{
    visited[u] = true;
    for (int &v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v, adj, visited);
        }
    }
}
int n;
    int findCircleNum(vector<vector<int>>& isConnected) {
         n = isConnected.size();
    vector<bool> visited(n, false);
    unordered_map<int, vector<int>> adj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isConnected[i][j] == 1)
            {
                adj[i].push_back(j);
                adj[j].push_back(j);
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited);
            count++;
        }
    }
    return count;
    }
};