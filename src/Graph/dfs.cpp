#include <bits/stdc++.h>
using namespace std;
class Solution
{

    void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs)
    {
        storeDfs.push_back(node);
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
                dfs(it, vis, adj, storeDfs);
        }
    }

public:
    vector<int> dfsOfgraph(int v, vector<int> adj[])
    {
        vector<int> storeDfs;
        vector<int> vis(v + 1, 0);

        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
                dfs(i, vis, adj, storeDfs);
        }
        return storeDfs;
    }
    void addEdge(vector<int>adj[],int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);    //undirected graph
    }
};
int main()

{
    int v = 5;
    vector<int> adj[v + 1];
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(2);
    adj[4].push_back(3);
    Solution s;
    vector<int> storeDfs = s.dfsOfgraph(v, adj);
    for (auto it : storeDfs)
    {
        cout << it << " ";
    }
    return 0;
}