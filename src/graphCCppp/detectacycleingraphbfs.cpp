#include <bits/stdc++.h>
using namespace std;
bool detect(int src, vector<int> adj[], int vis[])
{
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while (!q.empty())
    {
        int node = q.fornt().first;
        int parent = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[adj[node]])
            {
                vis[adj[node]] = 1;
                q.push({adj[node], node});
            }
            else if (parent != adj[node])
            {
                return true;
            }
        }
    }
    return false;
}
bool detctAcycle(int v, vector<int> adj[])
{
    int vis[v] = {0};
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            if (detect(i, adj, vis))
            {
                return true;
            }
        }
    }
    return false;
}
int main() {}