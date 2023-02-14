class Solution {
public:
   int n;
void bfs(int u, unordered_map<int, vector<int>> &adj, vector<bool> &visited)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int &v : adj[node])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }

}
int findCircleNum(vector<vector<int>> &isConnected)
{
    n = isConnected.size();
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isConnected[i][j] == 1)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<bool> visited(n, false);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(i, adj, visited);
            count++;
        }
    }
    return count;
}
};