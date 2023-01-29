#include <bits/stdc++.h>
using namespace std;
// There exists an undirected and initially unrooted tree with n nodes indexed from 0 to n - 1. You are given the integer n and a 2D integer array edges of length n - 1, where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// Each node has an associated price. You are given an integer array price, where price[i] is the price of the ith node.

// The price sum of a given path is the sum of the prices of all nodes lying on that path.

// The tree can be rooted at any node root of your choice. The incurred cost after choosing root is the difference between the maximum and minimum price sum amongst all paths starting at root.

// Return the maximum possible cost amongst all possible root choices.
void dfs(int node, vector<vector<int>> &graph, vector<int> &price, vector<int> &sum, vector<int> &count, vector<int> &visited)
{
    visited[node] = 1;
    sum[node] = price[node];
    count[node] = 1;
    for (auto child : graph[node])
    {
        if (!visited[child])
        {
            dfs(child, graph, price, sum, count, visited);
            sum[node] += sum[child];
            count[node] += count[child];
        }
    }
}
long long maxOutput(int n, vector<vector<int>> &edges, vector<int> &price)
{
    vector<vector<int>> graph(n);
    for (auto e : edges)
    {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    vector<int> sum(n, 0);
    vector<int> count(n, 0);
    vector<int> visited(n, 0);
    dfs(0, graph, price, sum, count, visited);
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (long long)sum[i] * (n - count[i]) - (long long)sum[i] * count[i]);
    }
    return ans;
}
int main() {}