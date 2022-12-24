#include <bits/stdc++.h>
using namespace std;
bool isBipartite(vector<vector<int>> &adj, int N, int node, vector<int> &color)
{
    queue<int> q;
    q.push(node);
    color[node] = 1;
    // Process current graph component using BFS
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int ele : adj[curr])
        {
            if (color[ele] == color[curr]) // Odd-cycle
                return false;
            if (color[ele] == -1) // Unvisited node
            {
                color[ele] = 1 - color[curr];
                q.push(ele);
            }
        }
    }
    return true;
}
bool possibleBipartition(int N, vector<vector<int>> &dislikes)
{
    set<int> s;
    set<int> s2;
    for (int i = 0; i < dislikes.size(); i++)
    {
        s.insert(dislikes[i][0]);
        s.insert(dislikes[i][1]);
    }
    for (int i = 0; i < dislikes.size(); i++)
    {
        if (s.find(dislikes[i][0]) != s.end() && s.find(dislikes[i][1]) != s.end())
        {
            s2.insert(dislikes[i][0]);
            s2.insert(dislikes[i][1]);
        }
    }
    if (s2.size() == 0)
        return true;
    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < dislikes.size(); ++i)
    {
        adj[dislikes[i][0]].push_back(dislikes[i][1]);
        adj[dislikes[i][1]].push_back(dislikes[i][0]);
    }
    vector<int> color(N + 1, -1);
    for (int i = 1; i <= N; ++i)
        if (color[i] == -1)
            if (!isBipartite(adj, N, i, color))
                return false;
    return true; 
}

public:
bool possibleBipartition(int N, vector<vector<int>> &dislikes)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < dislikes.size(); ++i)
    {
        adj[dislikes[i][0]].push_back(dislikes[i][1]);
        adj[dislikes[i][1]].push_back(dislikes[i][0]);
    }

    vector<int> color(N + 1, -1);
    for (int i = 1; i <= N; ++i)
        if (color[i] == -1)
            if (!isBipartite(adj, N, i, color))
                return false;
    return true;
}
int main() {}