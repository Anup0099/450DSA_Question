//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
   bool dfs(int node, int vis[],int pathVisited[], vector<int> adj[])
{
    vis[node] = 1;
    pathVisited[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, vis, pathVisited, adj) == true)
            {
                return true;
            }
        }
        else if (pathVisited[it] == true)
        {
            return true;
        }
    }
    pathVisited[node] = false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    int visited[V] = {0};
    int pathVisited[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, visited, pathVisited, adj) == true)
            {
                return true;
            }
        }
    }
    return false;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends