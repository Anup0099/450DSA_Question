//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	typedef pair<int,int>p;
    int spanningTree(int v, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<p, vector<p>, greater<p>> pq;
    int sum = 0;
    vector<bool> vis(v, false);
    pq.push({0, 0});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int wt = it.first;
        int node = it.second;

        if (vis[node])
        {
            continue;
        }
        vis[node] = true;
        sum += wt;
        for (auto &temp : adj[node])
        {
            int neighbour = temp[0];
            int weight = temp[1];
            if (!vis[neighbour])
            {
                pq.push({weight, neighbour});
            }
        }
    }
    return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends