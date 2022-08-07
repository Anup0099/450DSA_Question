#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
} // add edge from u to v and v to u  in adjacency list   //undirected graph
// void dfs(int s, int n, vector<vector<int>> &isConnected, vector<bool> &isVisited)
// {
//     isVisited[s] = true;
//     vector<int> adj;
//     for (int i = 0; i < n; i++)
//     {
//         int x = isConnected[s][i];
//         if (x == 1)
//         {
//             adj.push_back(i);
//         }
//     }
//     for (auto x : adj)
//     {
//         if (!isVisited[x])
//         {
//             dfs(x, n, isConnected, isVisited);
//         }
//     }
// }
void bfs(vector<int> adj[], int &v, int &s)
{
    bool visited[v + 1];
     int distance[v]={INT_MAX};
    for (int i = 0; i < v; i++)
    {
        visited[i] = false; // initialize all vertices as not visited
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (auto v : adj[u])
        {
            if (visited[v] == false)
            {        distance[v]=distance[u]+1;
                visited[v] = true;
                q.push(v);
            }
        }
    }
     for (int i = 0; i < v; i++)
    {
        cout<<distance[i]<<" ";
    }
}

int main()
{   
    

}