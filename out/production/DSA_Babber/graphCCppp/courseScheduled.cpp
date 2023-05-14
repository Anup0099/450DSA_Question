#include <bits/stdc++.h>
using namespace std;
bool detect(int src, vector<int> adj[], vector<int> vis)
{
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, node});
            }
            else if (parent != it)
            {
                return true;
            }
        }
    }
    return false;
}
bool isCycle(int v, vector<int> adj[])
{
    vector<int> vis(v, 0);
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == 0)
        {
            if (detect(i, adj, vis))
            {
                return true;
            }
        }
    }
    return false;
}
bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{
    int n = prerequisites.size();
    vector<int> adj[numCourses];
    for (int i = 0; i < n; i++)
    {
        adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
    }
    vector<int> vis(numCourses, 0);
    vector<int> pathVisited(numCourses, 0);
    for (int i = 0; i < numCourses; i++)
    {
        if (vis[i] == 0)
        {
        }
    }
    return true;
}
bool dfsCheck(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &pathVisit)
{
    vis[node] = 1;
    pathVisit[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfsCheck(it, adj, vis, pathVisit) == true)
            {
                return true;
            }
        }
        else if (pathVisit[it])
        {
            return true;
        }
    }
    pathVisit[node] = 0;
    return false;
}
bool canFinish(int n, vector<vector<int>> &pre)
{
    vector<vector<int>> adj(n);
    for (int i = 0; i < pre.size(); i++)
    {
        adj[pre[i][1]].push_back(pre[i][0]);
    }
    vector<int> vis(n, 0);
    vector<int> pathVisit(n, 0);
    // int vis[n]={0};

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if (dfsCheck(i, adj, vis, pathVisit) == true)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}