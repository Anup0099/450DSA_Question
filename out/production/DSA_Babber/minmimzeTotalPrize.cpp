#include <bits/stdc++.h>
using namespace std;
// There exists an undirected and unrooted tree with n nodes indexed from 0 to n - 1. You are given the integer n and a 2D integer array edges of length n - 1, where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// Each node has an associated price. You are given an integer array price, where price[i] is the price of the ith node.

// The price sum of a given path is the sum of the prices of all nodes lying on that path.

// Additionally, you are given a 2D integer array trips, where trips[i] = [starti, endi] indicates that you start the ith trip from the node starti and travel to the node endi by any path you like.

// Before performing your first trip, you can choose some non-adjacent nodes and halve the prices.

// Return the minimum total price sum to perform all the given trips.
int minimumTotalPrice(int n, vector<vector<int>> &edges, vector<int> &price, vector<vector<int>> &trips)
{
    vector<vector<int>> graph(n);
    for (auto &edge : edges)
    {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }
    vector<int> ans;
    for (auto &trip : trips)
    {
        int start = trip[0];
        int end = trip[1];
        vector<int> visited(n, 0);
        queue<int> q;
        q.push(start);
        visited[start] = 1;
        int sum = 0;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto &child : graph[node])
            {
                if (!visited[child])
                {
                    visited[child] = 1;
                    q.push(child);
                    sum += price[child];
                }
            }
        }
        ans.push_back(sum);
    }
    int minSum = INT_MAX;
    for (auto &a : ans)
    {
        minSum = min(minSum, a);
    }
    return minSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}