#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfsRec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (auto v : adj[s])
    {
        if (visited[v] == false)
        {
            dfsRec(adj, v, visited);
        }
    }
}
// will print for both connected and disconnected graph
void dfs(vector<int> adj[], int v)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            dfsRec(adj, i, visited);
        }
    }
}
int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 4);
    dfs(adj, v);
    return 0;
}
