//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
   bool isCycleBFS(vector<int> adj[], int v, vector<bool> &visited)
{
    queue<pair<int, int>> q;
    q.push({v, -1});
    visited[v] = true;

    while (!q.empty())
    {
        int n = q.size();
        pair<int, int> temp = q.front();
        q.pop();
        int source = temp.first;
        int parent = temp.second;
        for (int &v : adj[source])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push({v, source});
            }
            else if (v != parent)
            {
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int v, vector<int> adj[])
{
    vector<bool> visited(v, false);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i] and isCycleBFS(adj, i, visited))
        {
            return true;
        }
    }
    return false;
}
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends