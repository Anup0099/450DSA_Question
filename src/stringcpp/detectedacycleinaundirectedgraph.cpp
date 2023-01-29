#include <bits/stdc++.h>
using namespace std;

bool idCycleDFS(vector<int> adj[], int u, vecotr<bool> &visited, int v)
{
    visited[v] = true;
    for (int &v : adj[u])
    {
        if (v == parent)
            continue;
        if (visited[v])
            return true;
        if (isCycleDFS(adj, v, visitd, u))
        {
            return true;
        }
    }
    return false;
}
bool detectCycle(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++)
    {
        if (!visited[i] and isCycleDFS(adj, i, visited, -1))
        {
            return true;
        }
    }
    return false;
}
int main() {}