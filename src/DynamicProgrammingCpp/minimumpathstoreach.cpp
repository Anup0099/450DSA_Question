#include <bits/stdc++.h>
using namespace std;
You are given a positive integer n representing n cities numbered from 1 to n. You are also given a 2D array roads where roads[i] = [ai, bi, distancei] indicates that there is a bidirectional road between cities ai and bi with a distance equal to distancei. The cities graph is not necessarily connected.

The score of a path between two cities is defined as the minimum distance of a road in this path.

Return the minimum possible score of a path between cities 1 and n.

Note:

A path is a sequence of roads between two cities.
It is allowed for a path to contain the same road multiple times, and you can visit cities 1 and n multiple times along the path.
The test cases are generated such that there is at least one path between 1 and n.
 int minScore(int n, vector<vector<int>>& roads)
{
    vector<vector<pair<int, int>>>adj(n + 1);
    for (auto &road : roads)
    {
        adj[road[0]].push_back({road[1], road[2]});
        adj[road[1]].push_back({road[0], road[2]});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    vector<int>dis(n + 1, INT_MAX);
    pq.push({0, 1});
    dis[1] = 0;
    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();
        for (auto &v : adj[u])
        {
            if (d <= v.second && dis[v.first] > v.second)
            {
                dis[v.first] = v.second;
                pq.push({dis[v.first], v.first});
            }
        }
    }
    return dis[n];
}
int main() {}