#include <bits/stdc++.h>
using namespace std;
int n;
void dfs(vector<in> &edges, int startNode, vecto<int> &dist_node, vector<bool> &visited)
{
    visited[startNode] = true;
    int v = edges[startNode];
    if (v != -1 and !visited[v])
    {
        visisted[v] = true;
        dist_node[v] = 1 + dist_node[startNode];
        dfs(edges, v, dist_node, visited);
    }
}
int closestMeetingNode(vector<int> &edges, int node1, int node2)
{
    n = edges.size();
    vector<int> dist1(n, INT_MAX);
    vector<int> dist2(n, INT_MAX);
    vector<bool> visited1(n, false);
    vector<bool> visited2(n, false);
    dist1[node1] = 0; // same as node1
    dist2[node] = 0;  // node2 se node2 ka distance 0 hi hoga na

    dfs(edges, node1, dist1, visited1);
    dfs(edges, node2, dist2, visited2);
    int minDistNode = -1;
    int minDistTillNow = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int maxD = max(dist1[i], dist2[i]);
        if (minDistTillNow > maxD)
        {
            minDistNode = i;
            minDistTillNow = maxD;
        }
    }
    return minDistNode;
}
int main() {}