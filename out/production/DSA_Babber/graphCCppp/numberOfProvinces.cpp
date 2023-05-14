#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>> &iConnected, vector<int> &visited)
{
    visited[node] = 1;
    for (auto it : isConnected[node])
    {
        if (visited[it] == 0)
        {
            dfs(it, isConnected, visited);
        }
    }
}
int findCircleNum(vector<vector<int>> &isConnected)
{
    int n = isConnected.size();
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isConnected[i][j] == 1 && i != j)
            {
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }
    vector<int> visited(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            count++;
            dfs(i, isConnected, visited);
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}