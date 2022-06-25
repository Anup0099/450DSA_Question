#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[])
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (it == parent)
                continue;
            if (vis[it] == 1)
                return true;
            if (checkForCycle(it, node, vis, adj))
                return true;
        }
        return false;
    }
    bool isCyclic(int v, vector<int> adj[])
    {
        vector<int> vis(v + 1, 0);
        for (int i = 1; i <= v; i++)
        {
            if (vis[i] == 0 && checkForCycle(i, -1, vis, adj))
                return true;
        }
        return false;
    }
};

int main()
{
}